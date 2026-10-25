#include "hashmap.h"

#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

bool canCreateNote(const std::string& note, const std::vector<std::string>& articles);

TEST_CASE("benchmarking the canCreateNote function") {
    BENCHMARK(R"(canCreateNote("Undertale", {"Deltarune"}))") {
        return canCreateNote("Undertale", {"Deltarune"});
    };
    BENCHMARK(R"(canCreateNote("Undertale", {"I write a lot.", "To and fro.", "Here be deadly dragons!"}))") {
        return canCreateNote("Undertale", {"I write a lot.", "To and fro.", "Here be deadly dragons!"});
    };
    BENCHMARK(R"(canCreateNote("The bird is red!", {"I write a lot.", "To and fro.", "Here be deadly dragons!"}))") {
        return canCreateNote("The bird is red!", {"I write a lot.", "To and fro.", "Here be deadly dragons!"});
    };
    BENCHMARK(R"(canCreateNote("The bird is red!", {"Deltarune"}))") {
        return canCreateNote("The bird is red!", {"Deltarune"});
    };
}

bool canCreateNote(const std::string& note, const std::vector<std::string>& articles)
{
    Hashmap<char, uint64_t> characterCountArticles;
    Hashmap<char, uint64_t> characterCountNote;
    std::string charsToInclude = "QWERTYUIOPASDFGHJKLZXCVBNM1234567890~`!@#$%^&*()_-+={}[]|\\:;\"'<>,.?/";
    for (std::string::size_type i = 0; i < charsToInclude.length(); i++)
    {
        characterCountArticles.insert(charsToInclude[i], 0);
        characterCountNote.insert(charsToInclude[i], 0);
    }
    for (std::vector<std::string>::size_type i = 0; i < articles.size(); i++)
    {
        for (std::string::size_type j = 0; j < articles[i].length(); j++)
        {
            if (characterCountArticles.contains(static_cast<char>(toupper(articles[i][j]))))
            {
                characterCountArticles[static_cast<char>(toupper(articles[i][j]))]++;
            }
        }
    }
    for (std::string::size_type i = 0; i < note.size(); i++)
    {
        if (characterCountNote.contains(static_cast<char>(toupper(note[i]))))
        {
            characterCountNote[static_cast<char>(toupper(note[i]))]++;
        }
    }
    for (std::string::size_type i = 0; i < charsToInclude.length(); i++)
    {
        if (characterCountArticles[charsToInclude[i]] < characterCountNote[charsToInclude[i]]) return false;
    }
    return true;
}