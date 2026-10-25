#ifndef HASHMAP_H
#define HASHMAP_H

#include <string>
#include <functional>
#include <list>
#include <vector>
#include <utility>
#include <stdexcept>

template <class T, class U>
class Hashmap {
public:
    Hashmap();
    U& operator[](const T& key);
    bool contains(const T& key);
    void insert(const T& key, const U& value);
    void erase(const T& key);
private:
    std::size_t hashAndCompress(const T& key);
    std::vector<std::list<std::pair<T,U>>> buckets;
};

template <class T, class U>
Hashmap<T,U>::Hashmap()
{
    buckets = std::vector<std::list<std::pair<T,U>>>(68, std::list<std::pair<T,U>>());
}

template <class T, class U>
std::size_t Hashmap<T,U>::hashAndCompress(const T& key)
{
    std::size_t result = std::hash<T>{}(key);
    result = ((69 * result + 420) % 101) % 68;
    return result;
}

template <class T, class U>
U& Hashmap<T,U>::operator[](const T& key)
{
    std::size_t index = hashAndCompress(key);
    for (auto& p: buckets[index])
    {
        if (p.first == key) return p.second;
    }
    throw std::out_of_range("Key does not exist");
}

template <class T, class U>
bool Hashmap<T,U>::contains(const T& key)
{
    std::size_t index = hashAndCompress(key);
    for (auto& p: buckets[index])
    {
        if (p.first == key) return true;
    }
    return false;
}

template <class T, class U>
void Hashmap<T,U>::insert(const T& key, const U& value)
{
    if (contains(key)) return;
    std::size_t index = hashAndCompress(key);
    buckets[index].push_back({key, value});
}

template <class T, class U>
void Hashmap<T,U>::erase(const T& key)
{
    std::size_t index = hashAndCompress(key);
    for (typename std::list<std::pair<T,U>>::iterator it = buckets[index].begin(); it != buckets[index].end(); ++it)
    {
        if (it->first == key)
        {
            buckets[index].erase(it);
            break;
        }
    }
}

#endif // HASHMAP_H
