#include <iostream>
#include "hashmap.h"
#include <cstdint>
#include <cctype>

bool canCreateNote(const std::string& note, const std::vector<std::string>& articles);

int main()
{
    if (canCreateNote("Undertale", {"D", "E", "L", "T", "A", "R", "U", "N", "E"}))
    {
        std::cout << R"(The note "Undertale" can be created with the article "DELTARUNE")" << "\n";
    }
    else
    {
        std::cout << R"(The note "Undertale" cannot be created with the article "DELTARUNE")" << "\n";
    }
    if (canCreateNote(R"(Synopsis:

The prologue of Romeo and Juliet calls the title characters “star-crossed lovers”—and the stars do seem to conspire against these young lovers.

Romeo is a Montague, and Juliet a Capulet. Their families are enmeshed in a feud, but the moment they meet—when Romeo and his friends attend a party at Juliet’s house in disguise—the two fall in love and quickly decide that they want to be married.

A friar secretly marries them, hoping to end the feud. Romeo and his companions almost immediately encounter Juliet’s cousin Tybalt, who challenges Romeo. When Romeo refuses to fight, Romeo’s friend Mercutio accepts the challenge and is killed. Romeo then kills Tybalt and is banished. He spends that night with Juliet and then leaves for Mantua.

Juliet’s father forces her into a marriage with Count Paris. To avoid this marriage, Juliet takes a potion, given her by the friar, that makes her appear dead. The friar will send Romeo word to be at her family tomb when she awakes. The plan goes awry, and Romeo learns instead that she is dead. In the tomb, Romeo kills himself. Juliet wakes, sees his body, and commits suicide. Their deaths appear finally to end the feud.

THE PROLOGUE
Enter Chorus.

Two households, both alike in dignity
(In fair Verona, where we lay our scene),
From ancient grudge break to new mutiny,
Where civil blood makes civil hands unclean.
From forth the fatal loins of these two foes
A pair of star-crossed lovers take their life;
Whose misadventured piteous overthrows
Doth with their death bury their parents’ strife.
The fearful passage of their death-marked love
And the continuance of their parents’ rage,
Which, but their children’s end, naught could remove,
Is now the two hours’ traffic of our stage;
The which, if you with patient ears attend,
What here shall miss, our toil shall strive to mend.
Chorus exits.
ACT 1
Scene 1
Enter Sampson and Gregory, with swords and bucklers,
of the house of Capulet.

SAMPSON  Gregory, on my word we’ll not carry coals.
GREGORY  No, for then we should be colliers.
SAMPSON  I mean, an we be in choler, we’ll draw.
GREGORY  Ay, while you live, draw your neck out of
collar.
SAMPSON  I strike quickly, being moved.
GREGORY  But thou art not quickly moved to strike.
SAMPSON  A dog of the house of Montague moves me.
GREGORY  To move is to stir, and to be valiant is to
stand. Therefore if thou art moved thou runn’st
away.
SAMPSON  A dog of that house shall move me to stand. I
will take the wall of any man or maid of Montague’s.
GREGORY  That shows thee a weak slave, for the weakest
goes to the wall.
SAMPSON  ’Tis true, and therefore women, being the
weaker vessels, are ever thrust to the wall. Therefore
I will push Montague’s men from the wall and
thrust his maids to the wall.
GREGORY  The quarrel is between our masters and us
their men.
SAMPSON  ’Tis all one. I will show myself a tyrant.
When I have fought with the men, I will be civil
with the maids; I will cut off their heads.
GREGORY  The heads of the maids?
SAMPSON  Ay, the heads of the maids, or their maidenheads.
Take it in what sense thou wilt.
GREGORY  They must take it in sense that feel it.
SAMPSON  Me they shall feel while I am able to stand,
and ’tis known I am a pretty piece of flesh.
GREGORY  ’Tis well thou art not fish; if thou hadst, thou
hadst been poor-john. Draw thy tool. Here comes
of the house of Montagues.

Enter Abram with another Servingman.

SAMPSON  My naked weapon is out. Quarrel, I will back
thee.
GREGORY  How? Turn thy back and run?
SAMPSON  Fear me not.
GREGORY  No, marry. I fear thee!
SAMPSON  Let us take the law of our sides; let them
begin.
GREGORY  I will frown as I pass by, and let them take it
as they list.
SAMPSON  Nay, as they dare. I will bite my thumb at
them, which is disgrace to them if they bear it.
He bites his thumb.
ABRAM  Do you bite your thumb at us, sir?
SAMPSON  I do bite my thumb, sir.
ABRAM  Do you bite your thumb at us, sir?
SAMPSON, aside to Gregory  Is the law of our side if I
say “Ay”?
GREGORY, aside to Sampson  No.
SAMPSON  No, sir, I do not bite my thumb at you, sir,
but I bite my thumb, sir.
GREGORY  Do you quarrel, sir?
ABRAM  Quarrel, sir? No, sir.
SAMPSON  But if you do, sir, I am for you. I serve as
good a man as you.
ABRAM  No better.
SAMPSON  Well, sir.

Enter Benvolio.

GREGORY, aside to Sampson  Say “better”; here comes
one of my master’s kinsmen.
SAMPSON  Yes, better, sir.
ABRAM  You lie.
SAMPSON  Draw if you be men.—Gregory, remember
thy washing blow.They fight.
BENVOLIO  Part, fools!Drawing his sword.
Put up your swords. You know not what you do.

Enter Tybalt, drawing his sword.

TYBALT
What, art thou drawn among these heartless hinds?
Turn thee, Benvolio; look upon thy death.
BENVOLIO
I do but keep the peace. Put up thy sword,
Or manage it to part these men with me.
TYBALT
What, drawn and talk of peace? I hate the word
As I hate hell, all Montagues, and thee.
Have at thee, coward!They fight.

Enter three or four Citizens with clubs or partisans.

CITIZENS
Clubs, bills, and partisans! Strike! Beat them down!
Down with the Capulets! Down with the Montagues!

Enter old Capulet in his gown, and his Wife.

CAPULET
What noise is this? Give me my long sword, ho!
LADY CAPULET
A crutch, a crutch! Why call you for a
sword?

Enter old Montague and his Wife.
CAPULET
My sword, I say. Old Montague is come
And flourishes his blade in spite of me.
MONTAGUE
Thou villain Capulet!—Hold me not; let me go.
LADY MONTAGUE
Thou shalt not stir one foot to seek a foe.

Enter Prince Escalus with his train.

PRINCE
Rebellious subjects, enemies to peace,
Profaners of this neighbor-stainèd steel—
Will they not hear?—What ho! You men, you beasts,
That quench the fire of your pernicious rage
With purple fountains issuing from your veins:
On pain of torture, from those bloody hands
Throw your mistempered weapons to the ground,
And hear the sentence of your movèd prince.
Three civil brawls bred of an airy word
By thee, old Capulet, and Montague,
Have thrice disturbed the quiet of our streets
And made Verona’s ancient citizens
Cast by their grave-beseeming ornaments
To wield old partisans in hands as old,
Cankered with peace, to part your cankered hate.
If ever you disturb our streets again,
Your lives shall pay the forfeit of the peace.
For this time all the rest depart away.
You, Capulet, shall go along with me,
And, Montague, come you this afternoon
To know our farther pleasure in this case,
To old Free-town, our common judgment-place.
Once more, on pain of death, all men depart.
All but Montague, Lady Montague,
and Benvolio exit.
MONTAGUE, to Benvolio
Who set this ancient quarrel new abroach?
Speak, nephew, were you by when it began?
BENVOLIO
Here were the servants of your adversary,
And yours, close fighting ere I did approach.
I drew to part them. In the instant came
The fiery Tybalt with his sword prepared,
Which, as he breathed defiance to my ears,
He swung about his head and cut the winds,
Who, nothing hurt withal, hissed him in scorn.
While we were interchanging thrusts and blows
Came more and more and fought on part and part,
Till the Prince came, who parted either part.
LADY MONTAGUE
O, where is Romeo? Saw you him today?
Right glad I am he was not at this fray.
BENVOLIO
Madam, an hour before the worshiped sun
Peered forth the golden window of the east,
A troubled mind drove me to walk abroad,
Where underneath the grove of sycamore
That westward rooteth from this city side,
So early walking did I see your son.
Towards him I made, but he was ’ware of me
And stole into the covert of the wood.
I, measuring his affections by my own
(Which then most sought where most might not be
found,
Being one too many by my weary self),
Pursued my humor, not pursuing his,
And gladly shunned who gladly fled from me.
MONTAGUE
Many a morning hath he there been seen,
With tears augmenting the fresh morning’s dew,
Adding to clouds more clouds with his deep sighs.
But all so soon as the all-cheering sun
Should in the farthest east begin to draw
The shady curtains from Aurora’s bed,
Away from light steals home my heavy son
And private in his chamber pens himself,
Shuts up his windows, locks fair daylight out,
And makes himself an artificial night.
Black and portentous must this humor prove,
Unless good counsel may the cause remove.
BENVOLIO
My noble uncle, do you know the cause?
MONTAGUE
I neither know it nor can learn of him.
BENVOLIO
Have you importuned him by any means?
MONTAGUE
Both by myself and many other friends.
But he, his own affections’ counselor,
Is to himself—I will not say how true,
But to himself so secret and so close,
So far from sounding and discovery,
As is the bud bit with an envious worm
Ere he can spread his sweet leaves to the air
Or dedicate his beauty to the same.
Could we but learn from whence his sorrows grow,
We would as willingly give cure as know.

Enter Romeo.

BENVOLIO
See where he comes. So please you, step aside.
I’ll know his grievance or be much denied.
MONTAGUE
I would thou wert so happy by thy stay
To hear true shrift.—Come, madam, let’s away.
Montague and Lady Montague exit.
BENVOLIO
Good morrow, cousin.
ROMEO  Is the day so young?
BENVOLIO
But new struck nine.
ROMEO  Ay me, sad hours seem long.
Was that my father that went hence so fast?
BENVOLIO
It was. What sadness lengthens Romeo’s hours?
ROMEO
Not having that which, having, makes them short.
BENVOLIO  In love?
ROMEO  Out—
BENVOLIO  Of love?
ROMEO
Out of her favor where I am in love.
BENVOLIO
Alas that love, so gentle in his view,
Should be so tyrannous and rough in proof!
ROMEO
Alas that love, whose view is muffled still,
Should without eyes see pathways to his will!
Where shall we dine?—O me! What fray was here?
Yet tell me not, for I have heard it all.
Here’s much to do with hate, but more with love.
Why then, O brawling love, O loving hate,
O anything of nothing first create!
O heavy lightness, serious vanity,
Misshapen chaos of well-seeming forms,
Feather of lead, bright smoke, cold fire, sick health,
Still-waking sleep that is not what it is!
This love feel I, that feel no love in this.
Dost thou not laugh?
BENVOLIO  No, coz, I rather weep.
ROMEO
Good heart, at what?
BENVOLIO  At thy good heart’s oppression.
ROMEO  Why, such is love’s transgression.
Griefs of mine own lie heavy in my breast,
Which thou wilt propagate to have it pressed
With more of thine. This love that thou hast shown
Doth add more grief to too much of mine own.
Love is a smoke made with the fume of sighs;
Being purged, a fire sparkling in lovers’ eyes;
Being vexed, a sea nourished with loving tears.
What is it else? A madness most discreet,
A choking gall, and a preserving sweet.
Farewell, my coz.
BENVOLIO  Soft, I will go along.
An if you leave me so, you do me wrong.
ROMEO
Tut, I have lost myself. I am not here.
This is not Romeo. He’s some other where.
BENVOLIO
Tell me in sadness, who is that you love?
ROMEO  What, shall I groan and tell thee?
BENVOLIO
Groan? Why, no. But sadly tell me who.
ROMEO
A sick man in sadness makes his will—
A word ill urged to one that is so ill.
In sadness, cousin, I do love a woman.
BENVOLIO
I aimed so near when I supposed you loved.
ROMEO
A right good markman! And she’s fair I love.
BENVOLIO
A right fair mark, fair coz, is soonest hit.
ROMEO
Well in that hit you miss. She’ll not be hit
With Cupid’s arrow. She hath Dian’s wit,
And, in strong proof of chastity well armed,
From love’s weak childish bow she lives uncharmed.
She will not stay the siege of loving terms,
Nor bide th’ encounter of assailing eyes,
Nor ope her lap to saint-seducing gold.
O, she is rich in beauty, only poor
That, when she dies, with beauty dies her store.
BENVOLIO
Then she hath sworn that she will still live chaste?
ROMEO
She hath, and in that sparing makes huge waste;
For beauty, starved with her severity,
Cuts beauty off from all posterity.
She is too fair, too wise, wisely too fair,
To merit bliss by making me despair.
She hath forsworn to love, and in that vow
Do I live dead, that live to tell it now.
BENVOLIO
Be ruled by me. Forget to think of her.
ROMEO
O, teach me how I should forget to think!
BENVOLIO
By giving liberty unto thine eyes.
Examine other beauties.
ROMEO  ’Tis the way
To call hers, exquisite, in question more.
These happy masks that kiss fair ladies’ brows,
Being black, puts us in mind they hide the fair.
He that is strucken blind cannot forget
The precious treasure of his eyesight lost.
Show me a mistress that is passing fair;
What doth her beauty serve but as a note
Where I may read who passed that passing fair?
Farewell. Thou canst not teach me to forget.
BENVOLIO
I’ll pay that doctrine or else die in debt.
They exit.



Scene 2
Enter Capulet, County Paris, and a Servingman.

CAPULET
But Montague is bound as well as I,
In penalty alike, and ’tis not hard, I think,
For men so old as we to keep the peace.
PARIS
Of honorable reckoning are you both,
And pity ’tis you lived at odds so long.
But now, my lord, what say you to my suit?
CAPULET
But saying o’er what I have said before.
My child is yet a stranger in the world.
She hath not seen the change of fourteen years.
Let two more summers wither in their pride
Ere we may think her ripe to be a bride.
PARIS
Younger than she are happy mothers made.
CAPULET
And too soon marred are those so early made.
Earth hath swallowed all my hopes but she;
She’s the hopeful lady of my earth.
But woo her, gentle Paris, get her heart;
My will to her consent is but a part.
And, she agreed, within her scope of choice
Lies my consent and fair according voice.
This night I hold an old accustomed feast,
Whereto I have invited many a guest
Such as I love; and you among the store,
One more, most welcome, makes my number more.
At my poor house look to behold this night
Earth-treading stars that make dark heaven light.
Such comfort as do lusty young men feel
When well-appareled April on the heel
Of limping winter treads, even such delight
Among fresh fennel buds shall you this night
Inherit at my house. Hear all, all see,
And like her most whose merit most shall be;
Which, on more view of many, mine, being one,
May stand in number, though in reck’ning none.
Come go with me.To Servingman, giving him a list.
Go, sirrah, trudge about
Through fair Verona, find those persons out
Whose names are written there, and to them say
My house and welcome on their pleasure stay.
Capulet and Paris exit.
SERVINGMAN  Find them out whose names are written
here! It is written that the shoemaker should
meddle with his yard and the tailor with his last, the
fisher with his pencil and the painter with his nets.
But I am sent to find those persons whose names
are here writ, and can never find what names the
writing person hath here writ. I must to the learned.
In good time!

Enter Benvolio and Romeo.

BENVOLIO, to Romeo
Tut, man, one fire burns out another’s burning;
One pain is lessened by another’s anguish.
Turn giddy, and be helped by backward turning.
One desperate grief cures with another’s languish.
Take thou some new infection to thy eye,
And the rank poison of the old will die.
ROMEO
Your plantain leaf is excellent for that.
BENVOLIO
For what, I pray thee?
ROMEO  For your broken shin.
BENVOLIO  Why Romeo, art thou mad?
ROMEO
Not mad, but bound more than a madman is,
Shut up in prison, kept without my food,
Whipped and tormented, and—good e’en, good
fellow.
SERVINGMAN  God gi’ good e’en. I pray, sir, can you
read?
ROMEO
Ay, mine own fortune in my misery.
SERVINGMAN  Perhaps you have learned it without
book. But I pray, can you read anything you see?
ROMEO
Ay, if I know the letters and the language.
SERVINGMAN  You say honestly. Rest you merry.
ROMEO  Stay, fellow. I can read.(He reads the letter.)
Signior Martino and his wife and daughters,
County Anselme and his beauteous sisters,
The lady widow of Vitruvio,
Signior Placentio and his lovely nieces,
Mercutio and his brother Valentine,
Mine Uncle Capulet, his wife and daughters,
My fair niece Rosaline and Livia,
Signior Valentio and his cousin Tybalt,
Lucio and the lively Helena.
A fair assembly. Whither should they come?
SERVINGMAN  Up.
ROMEO  Whither? To supper?
SERVINGMAN  To our house.
ROMEO  Whose house?
SERVINGMAN  My master’s.
ROMEO
Indeed I should have asked thee that before.
SERVINGMAN  Now I’ll tell you without asking. My
master is the great rich Capulet, and, if you be not
of the house of Montagues, I pray come and crush a
cup of wine. Rest you merry.He exits.
BENVOLIO
At this same ancient feast of Capulet’s
Sups the fair Rosaline whom thou so loves,
With all the admirèd beauties of Verona.
Go thither, and with unattainted eye
Compare her face with some that I shall show,
And I will make thee think thy swan a crow.
ROMEO
When the devout religion of mine eye
Maintains such falsehood, then turn tears to fire;
And these who, often drowned, could never die,
Transparent heretics, be burnt for liars.
One fairer than my love? The all-seeing sun
Ne’er saw her match since first the world begun.
BENVOLIO
Tut, you saw her fair, none else being by,
Herself poised with herself in either eye;
But in that crystal scales let there be weighed
Your lady’s love against some other maid
That I will show you shining at this feast,
And she shall scant show well that now seems best.
ROMEO
I’ll go along, no such sight to be shown,
But to rejoice in splendor of mine own.
They exit.


Scene 3
Enter Lady Capulet and Nurse.

LADY CAPULET
Nurse, where’s my daughter? Call her forth to me.
NURSE
Now, by my maidenhead at twelve year old,
I bade her come.—What, lamb! What, ladybird!
God forbid. Where’s this girl? What, Juliet!

Enter Juliet.

JULIET  How now, who calls?
NURSE  Your mother.
JULIET
Madam, I am here. What is your will?
LADY CAPULET
This is the matter.—Nurse, give leave awhile.
We must talk in secret.—Nurse, come back again.
I have remembered me, thou ’s hear our counsel.
Thou knowest my daughter’s of a pretty age.
NURSE
Faith, I can tell her age unto an hour.
LADY CAPULET  She’s not fourteen.
NURSE  I’ll lay fourteen of my teeth (and yet, to my teen
be it spoken, I have but four) she’s not fourteen.
How long is it now to Lammastide?
LADY CAPULET  A fortnight and odd days.
NURSE
Even or odd, of all days in the year,
Come Lammas Eve at night shall she be fourteen.
Susan and she (God rest all Christian souls!)
Were of an age. Well, Susan is with God;
She was too good for me. But, as I said,
On Lammas Eve at night shall she be fourteen.
That shall she. Marry, I remember it well.
’Tis since the earthquake now eleven years,
And she was weaned (I never shall forget it)
Of all the days of the year, upon that day.
For I had then laid wormwood to my dug,
Sitting in the sun under the dovehouse wall.
My lord and you were then at Mantua.
Nay, I do bear a brain. But, as I said,
When it did taste the wormwood on the nipple
Of my dug and felt it bitter, pretty fool,
To see it tetchy and fall out with the dug.
“Shake,” quoth the dovehouse. ’Twas no need, I
trow,
To bid me trudge.
And since that time it is eleven years.
For then she could stand high-lone. Nay, by th’
rood,
She could have run and waddled all about,
For even the day before, she broke her brow,
And then my husband (God be with his soul,
He was a merry man) took up the child.
“Yea,” quoth he, “Dost thou fall upon thy face?
Thou wilt fall backward when thou hast more wit,
Wilt thou not, Jule?” And, by my holidam,
The pretty wretch left crying and said “Ay.”
To see now how a jest shall come about!
I warrant, an I should live a thousand years,
I never should forget it. “Wilt thou not, Jule?”
quoth he.
And, pretty fool, it stinted and said “Ay.”
LADY CAPULET
Enough of this. I pray thee, hold thy peace.
NURSE
Yes, madam, yet I cannot choose but laugh
To think it should leave crying and say “Ay.”
And yet, I warrant, it had upon its brow
A bump as big as a young cock’rel’s stone,
A perilous knock, and it cried bitterly.
“Yea,” quoth my husband. “Fall’st upon thy face?
Thou wilt fall backward when thou comest to age,
Wilt thou not, Jule?” It stinted and said “Ay.”
JULIET
And stint thou, too, I pray thee, nurse, say I.
NURSE
Peace. I have done. God mark thee to his grace,
Thou wast the prettiest babe that e’er I nursed.
An I might live to see thee married once,
I have my wish.
LADY CAPULET
Marry, that “marry” is the very theme
I came to talk of.—Tell me, daughter Juliet,
How stands your disposition to be married?
JULIET
It is an honor that I dream not of.
NURSE
An honor? Were not I thine only nurse,
I would say thou hadst sucked wisdom from thy
teat.
LADY CAPULET
Well, think of marriage now. Younger than you
Here in Verona, ladies of esteem,
Are made already mothers. By my count
I was your mother much upon these years
That you are now a maid. Thus, then, in brief:
The valiant Paris seeks you for his love.
NURSE
A man, young lady—lady, such a man
As all the world—why, he’s a man of wax.
LADY CAPULET
Verona’s summer hath not such a flower.
NURSE
Nay, he’s a flower, in faith, a very flower.
LADY CAPULET
What say you? Can you love the gentleman?
This night you shall behold him at our feast.
Read o’er the volume of young Paris’ face,
And find delight writ there with beauty’s pen.
Examine every married lineament
And see how one another lends content,
And what obscured in this fair volume lies
Find written in the margent of his eyes.
This precious book of love, this unbound lover,
To beautify him only lacks a cover.
The fish lives in the sea, and ’tis much pride
For fair without the fair within to hide.
That book in many’s eyes doth share the glory
That in gold clasps locks in the golden story.
So shall you share all that he doth possess
By having him, making yourself no less.
NURSE
No less? Nay, bigger. Women grow by men.
LADY CAPULET
Speak briefly. Can you like of Paris’ love?
JULIET
I’ll look to like, if looking liking move.
But no more deep will I endart mine eye
Than your consent gives strength to make it fly.

Enter Servingman.

SERVINGMAN  Madam, the guests are come, supper
served up, you called, my young lady asked for, the
Nurse cursed in the pantry, and everything in
extremity. I must hence to wait. I beseech you,
follow straight.
LADY CAPULET
We follow thee.Servingman exits.
Juliet, the County stays.
NURSE
Go, girl, seek happy nights to happy days.
They exit.


Scene 4
Enter Romeo, Mercutio, Benvolio, with five or six other
Maskers, Torchbearers, and a Boy with a drum.

ROMEO
What, shall this speech be spoke for our excuse?
Or shall we on without apology?
BENVOLIO
The date is out of such prolixity.
We’ll have no Cupid hoodwinked with a scarf,
Bearing a Tartar’s painted bow of lath,
Scaring the ladies like a crowkeeper,
Nor no without-book prologue, faintly spoke
After the prompter, for our entrance.
But let them measure us by what they will.
We’ll measure them a measure and be gone.
ROMEO
Give me a torch. I am not for this ambling.
Being but heavy I will bear the light.
MERCUTIO
Nay, gentle Romeo, we must have you dance.
ROMEO
Not I, believe me. You have dancing shoes
With nimble soles. I have a soul of lead
So stakes me to the ground I cannot move.
MERCUTIO
You are a lover. Borrow Cupid’s wings
And soar with them above a common bound.
ROMEO
I am too sore enpiercèd with his shaft
To soar with his light feathers, and so bound
I cannot bound a pitch above dull woe.
Under love’s heavy burden do I sink.
MERCUTIO
And to sink in it should you burden love—
Too great oppression for a tender thing.
ROMEO
Is love a tender thing? It is too rough,
Too rude, too boist’rous, and it pricks like thorn.
MERCUTIO
If love be rough with you, be rough with love.
Prick love for pricking, and you beat love down.—
Give me a case to put my visage in.—
A visor for a visor. What care I
What curious eye doth cote deformities?
Here are the beetle brows shall blush for me.
BENVOLIO
Come, knock and enter, and no sooner in
But every man betake him to his legs.
ROMEO
A torch for me. Let wantons light of heart
Tickle the senseless rushes with their heels,
For I am proverbed with a grandsire phrase:
I’ll be a candle holder and look on;
The game was ne’er so fair, and I am done.
MERCUTIO
Tut, dun’s the mouse, the constable’s own word.
If thou art dun, we’ll draw thee from the mire—
Or, save your reverence, love—wherein thou
stickest
Up to the ears. Come, we burn daylight, ho!
ROMEO
Nay, that’s not so.
MERCUTIO  I mean, sir, in delay
We waste our lights; in vain, light lights by day.
Take our good meaning, for our judgment sits
Five times in that ere once in our five wits.
ROMEO
And we mean well in going to this masque,
But ’tis no wit to go.
MERCUTIO  Why, may one ask?
ROMEO
I dreamt a dream tonight.
MERCUTIO  And so did I.
ROMEO
Well, what was yours?
MERCUTIO  That dreamers often lie.
ROMEO
In bed asleep while they do dream things true.
MERCUTIO
O, then I see Queen Mab hath been with you.
She is the fairies’ midwife, and she comes
In shape no bigger than an agate stone
On the forefinger of an alderman,
Drawn with a team of little atomi
Over men’s noses as they lie asleep.
Her wagon spokes made of long spinners’ legs,
The cover of the wings of grasshoppers,
Her traces of the smallest spider web,
Her collars of the moonshine’s wat’ry beams,
Her whip of cricket’s bone, the lash of film,
Her wagoner a small gray-coated gnat,
Not half so big as a round little worm
Pricked from the lazy finger of a maid.
Her chariot is an empty hazelnut,
Made by the joiner squirrel or old grub,
Time out o’ mind the fairies’ coachmakers.
And in this state she gallops night by night
Through lovers’ brains, and then they dream of love;
On courtiers’ knees, that dream on cur’sies straight;
O’er lawyers’ fingers, who straight dream on fees;
O’er ladies’ lips, who straight on kisses dream,
Which oft the angry Mab with blisters plagues
Because their breaths with sweetmeats tainted are.
Sometime she gallops o’er a courtier’s nose,
And then dreams he of smelling out a suit.
And sometime comes she with a tithe-pig’s tail,
Tickling a parson’s nose as he lies asleep;
Then he dreams of another benefice.
Sometime she driveth o’er a soldier’s neck,
And then dreams he of cutting foreign throats,
Of breaches, ambuscadoes, Spanish blades,
Of healths five fathom deep, and then anon
Drums in his ear, at which he starts and wakes
And, being thus frighted, swears a prayer or two
And sleeps again. This is that very Mab
That plats the manes of horses in the night
And bakes the elflocks in foul sluttish hairs,
Which once untangled much misfortune bodes.
This is the hag, when maids lie on their backs,
That presses them and learns them first to bear,
Making them women of good carriage.
This is she—
ROMEO  Peace, peace, Mercutio, peace.
Thou talk’st of nothing.
MERCUTIO  True, I talk of dreams,
Which are the children of an idle brain,
Begot of nothing but vain fantasy,
Which is as thin of substance as the air
And more inconstant than the wind, who woos
Even now the frozen bosom of the north
And, being angered, puffs away from thence,
Turning his side to the dew-dropping south.
BENVOLIO
This wind you talk of blows us from ourselves.
Supper is done, and we shall come too late.
ROMEO
I fear too early, for my mind misgives
Some consequence yet hanging in the stars
Shall bitterly begin his fearful date
With this night’s revels, and expire the term
Of a despisèd life closed in my breast
By some vile forfeit of untimely death.
But he that hath the steerage of my course
Direct my sail. On, lusty gentlemen.
BENVOLIO  Strike, drum.
They march about the stage
and then withdraw to the side.



Scene 5
Servingmen come forth with napkins.

FIRST SERVINGMAN  Where’s Potpan that he helps not
to take away? He shift a trencher? He scrape a
trencher?
SECOND SERVINGMAN  When good manners shall lie
all in one or two men’s hands, and they unwashed
too, ’tis a foul thing.
FIRST SERVINGMAN  Away with the joint stools, remove
the court cupboard, look to the plate.—
Good thou, save me a piece of marchpane, and, as
thou loves me, let the porter let in Susan Grindstone
and Nell.—Anthony and Potpan!
THIRD SERVINGMAN  Ay, boy, ready.
FIRST SERVINGMAN  You are looked for and called for,
asked for and sought for, in the great chamber.
THIRD SERVINGMAN  We cannot be here and there too.
Cheerly, boys! Be brisk awhile, and the longer liver
take all.They move aside.

Enter Capulet and his household, all the guests and
gentlewomen to Romeo, Mercutio, Benvolio, and the
other Maskers.

CAPULET
Welcome, gentlemen. Ladies that have their toes
Unplagued with corns will walk a bout with
you.—
Ah, my mistresses, which of you all
Will now deny to dance? She that makes dainty,
She, I’ll swear, hath corns. Am I come near you
now?—
Welcome, gentlemen. I have seen the day
That I have worn a visor and could tell
A whispering tale in a fair lady’s ear,
Such as would please. ’Tis gone, ’tis gone, ’tis gone.
You are welcome, gentlemen.—Come, musicians,
play.Music plays and they dance.
A hall, a hall, give room!—And foot it, girls.—
More light, you knaves, and turn the tables up,
And quench the fire; the room is grown too hot.—
Ah, sirrah, this unlooked-for sport comes well.—
Nay, sit, nay, sit, good cousin Capulet,
For you and I are past our dancing days.
How long is ’t now since last yourself and I
Were in a mask?
CAPULET’S COUSIN  By ’r Lady, thirty years.
CAPULET
What, man, ’tis not so much, ’tis not so much.
’Tis since the nuptial of Lucentio,
Come Pentecost as quickly as it will,
Some five and twenty years, and then we masked.
CAPULET’S COUSIN
’Tis more, ’tis more. His son is elder, sir.
His son is thirty.
CAPULET  Will you tell me that?
His son was but a ward two years ago.
ROMEO, to a Servingman
What lady’s that which doth enrich the hand
Of yonder knight?
SERVINGMAN  I know not, sir.
ROMEO
O, she doth teach the torches to burn bright!
It seems she hangs upon the cheek of night
As a rich jewel in an Ethiop’s ear—
Beauty too rich for use, for Earth too dear.
So shows a snowy dove trooping with crows
As yonder lady o’er her fellows shows.
The measure done, I’ll watch her place of stand
And, touching hers, make blessèd my rude hand.
Did my heart love till now? Forswear it, sight,
For I ne’er saw true beauty till this night.
TYBALT
This, by his voice, should be a Montague.—
Fetch me my rapier, boy.Page exits.
What, dares the slave
Come hither covered with an antic face
To fleer and scorn at our solemnity?
Now, by the stock and honor of my kin,
To strike him dead I hold it not a sin.
CAPULET
Why, how now, kinsman? Wherefore storm you so?
TYBALT
Uncle, this is a Montague, our foe,
A villain that is hither come in spite
To scorn at our solemnity this night.
CAPULET
Young Romeo is it?
TYBALT  ’Tis he, that villain Romeo.
CAPULET
Content thee, gentle coz. Let him alone.
He bears him like a portly gentleman,
And, to say truth, Verona brags of him
To be a virtuous and well-governed youth.
I would not for the wealth of all this town
Here in my house do him disparagement.
Therefore be patient. Take no note of him.
It is my will, the which if thou respect,
Show a fair presence and put off these frowns,
An ill-beseeming semblance for a feast.
TYBALT
It fits when such a villain is a guest.
I’ll not endure him.
CAPULET  He shall be endured.
What, goodman boy? I say he shall. Go to.
Am I the master here or you? Go to.
You’ll not endure him! God shall mend my soul,
You’ll make a mutiny among my guests,
You will set cock-a-hoop, you’ll be the man!
TYBALT
Why, uncle, ’tis a shame.
CAPULET  Go to, go to.
You are a saucy boy. Is ’t so indeed?
This trick may chance to scathe you. I know what.
You must contrary me. Marry, ’tis time—
Well said, my hearts.—You are a princox, go.
Be quiet, or—More light, more light!—for shame,
I’ll make you quiet.—What, cheerly, my hearts!
TYBALT
Patience perforce with willful choler meeting
Makes my flesh tremble in their different greeting.
I will withdraw, but this intrusion shall,
Now seeming sweet, convert to bitt’rest gall.
He exits.
ROMEO, taking Juliet’s hand
If I profane with my unworthiest hand
This holy shrine, the gentle sin is this:
My lips, two blushing pilgrims, ready stand
To smooth that rough touch with a tender kiss.
JULIET
Good pilgrim, you do wrong your hand too much,
Which mannerly devotion shows in this;
For saints have hands that pilgrims’ hands do touch,
And palm to palm is holy palmers’ kiss.
ROMEO
Have not saints lips, and holy palmers too?
JULIET
Ay, pilgrim, lips that they must use in prayer.
ROMEO
O then, dear saint, let lips do what hands do.
They pray: grant thou, lest faith turn to despair.
JULIET
Saints do not move, though grant for prayers’ sake.
ROMEO
Then move not while my prayer’s effect I take.
He kisses her.
Thus from my lips, by thine, my sin is purged.
JULIET
Then have my lips the sin that they have took.
ROMEO
Sin from my lips? O trespass sweetly urged!
Give me my sin again.He kisses her.
JULIET  You kiss by th’ book.
NURSE
Madam, your mother craves a word with you.
Juliet moves toward her mother.
ROMEO
What is her mother?
NURSE  Marry, bachelor,
Her mother is the lady of the house,
And a good lady, and a wise and virtuous.
I nursed her daughter that you talked withal.
I tell you, he that can lay hold of her
Shall have the chinks.Nurse moves away.
ROMEO, aside  Is she a Capulet?
O dear account! My life is my foe’s debt.
BENVOLIO
Away, begone. The sport is at the best.
ROMEO
Ay, so I fear. The more is my unrest.
CAPULET
Nay, gentlemen, prepare not to be gone.
We have a trifling foolish banquet towards.—
Is it e’en so? Why then, I thank you all.
I thank you, honest gentlemen. Good night.—
More torches here.—Come on then, let’s to bed.—
Ah, sirrah, by my fay, it waxes late.
I’ll to my rest.
All but Juliet and the Nurse begin to exit.
JULIET
Come hither, nurse. What is yond gentleman?
NURSE
The son and heir of old Tiberio.
JULIET
What’s he that now is going out of door?
NURSE
Marry, that, I think, be young Petruchio.
JULIET
What’s he that follows here, that would not dance?
NURSE  I know not.
JULIET
Go ask his name. The Nurse goes. If he be marrièd,
My grave is like to be my wedding bed.
NURSE, returning
His name is Romeo, and a Montague,
The only son of your great enemy.
JULIET
My only love sprung from my only hate!
Too early seen unknown, and known too late!
Prodigious birth of love it is to me
That I must love a loathèd enemy.
NURSE
What’s this? What’s this?
JULIET  A rhyme I learned even now
Of one I danced withal.
One calls within “Juliet.”
NURSE  Anon, anon.
Come, let’s away. The strangers all are gone.
They exit.



ACT 2


Enter Chorus.

Now old desire doth in his deathbed lie,
And young affection gapes to be his heir.
That fair for which love groaned for and would die,
With tender Juliet matched, is now not fair.
Now Romeo is beloved and loves again,
Alike bewitchèd by the charm of looks,
But to his foe supposed he must complain,
And she steal love’s sweet bait from fearful hooks.
Being held a foe, he may not have access
To breathe such vows as lovers use to swear,
And she as much in love, her means much less
To meet her new belovèd anywhere.
But passion lends them power, time means, to meet,
Temp’ring extremities with extreme sweet.
Chorus exits.


Scene 1
Enter Romeo alone.

ROMEO
Can I go forward when my heart is here?
Turn back, dull earth, and find thy center out.
He withdraws.

Enter Benvolio with Mercutio.

BENVOLIO
Romeo, my cousin Romeo, Romeo!
MERCUTIO  He is wise
And, on my life, hath stol’n him home to bed.
BENVOLIO
He ran this way and leapt this orchard wall.
Call, good Mercutio.
MERCUTIO  Nay, I’ll conjure too.
Romeo! Humors! Madman! Passion! Lover!
Appear thou in the likeness of a sigh.
Speak but one rhyme and I am satisfied.
Cry but “Ay me,” pronounce but “love” and
“dove.”
Speak to my gossip Venus one fair word,
One nickname for her purblind son and heir,
Young Abraham Cupid, he that shot so trim
When King Cophetua loved the beggar maid.—
He heareth not, he stirreth not, he moveth not.
The ape is dead, and I must conjure him.—
I conjure thee by Rosaline’s bright eyes,
By her high forehead, and her scarlet lip,
By her fine foot, straight leg, and quivering thigh,
And the demesnes that there adjacent lie,
That in thy likeness thou appear to us.
BENVOLIO
An if he hear thee, thou wilt anger him.
MERCUTIO
This cannot anger him. ’Twould anger him
To raise a spirit in his mistress’ circle
Of some strange nature, letting it there stand
Till she had laid it and conjured it down.
That were some spite. My invocation
Is fair and honest. In his mistress’ name,
I conjure only but to raise up him.
BENVOLIO
Come, he hath hid himself among these trees
To be consorted with the humorous night.
Blind is his love and best befits the dark.
MERCUTIO
If love be blind, love cannot hit the mark.
Now will he sit under a medlar tree
And wish his mistress were that kind of fruit
As maids call medlars when they laugh alone.—
O Romeo, that she were, O, that she were
An open-arse, thou a pop’rin pear.
Romeo, good night. I’ll to my truckle bed;
This field-bed is too cold for me to sleep.—
Come, shall we go?
BENVOLIO  Go, then, for ’tis in vain
To seek him here that means not to be found.
They exit.


Scene 2
Romeo comes forward.

ROMEO
He jests at scars that never felt a wound.

Enter Juliet above.

But soft, what light through yonder window breaks?
It is the East, and Juliet is the sun.
Arise, fair sun, and kill the envious moon,
Who is already sick and pale with grief
That thou, her maid, art far more fair than she.
Be not her maid since she is envious.
Her vestal livery is but sick and green,
And none but fools do wear it. Cast it off.
It is my lady. O, it is my love!
O, that she knew she were!
She speaks, yet she says nothing. What of that?
Her eye discourses; I will answer it.
I am too bold. ’Tis not to me she speaks.
Two of the fairest stars in all the heaven,
Having some business, do entreat her eyes
To twinkle in their spheres till they return.
What if her eyes were there, they in her head?
The brightness of her cheek would shame those
stars
As daylight doth a lamp; her eye in heaven
Would through the airy region stream so bright
That birds would sing and think it were not night.
See how she leans her cheek upon her hand.
O, that I were a glove upon that hand,
That I might touch that cheek!
JULIET  Ay me.
ROMEO, aside  She speaks.
O, speak again, bright angel, for thou art
As glorious to this night, being o’er my head,
As is a wingèd messenger of heaven
Unto the white-upturnèd wond’ring eyes
Of mortals that fall back to gaze on him
When he bestrides the lazy puffing clouds
And sails upon the bosom of the air.
JULIET
O Romeo, Romeo, wherefore art thou Romeo?
Deny thy father and refuse thy name,
Or, if thou wilt not, be but sworn my love,
And I’ll no longer be a Capulet.
ROMEO, aside
Shall I hear more, or shall I speak at this?
JULIET
’Tis but thy name that is my enemy.
Thou art thyself, though not a Montague.
What’s Montague? It is nor hand, nor foot,
Nor arm, nor face. O, be some other name
Belonging to a man.
What’s in a name? That which we call a rose
By any other word would smell as sweet.
So Romeo would, were he not Romeo called,
Retain that dear perfection which he owes
Without that title. Romeo, doff thy name,
And, for thy name, which is no part of thee,
Take all myself.
ROMEO  I take thee at thy word.
Call me but love, and I’ll be new baptized.
Henceforth I never will be Romeo.
JULIET
What man art thou that, thus bescreened in night,
So stumblest on my counsel?
ROMEO  By a name
I know not how to tell thee who I am.
My name, dear saint, is hateful to myself
Because it is an enemy to thee.
Had I it written, I would tear the word.
JULIET
My ears have yet not drunk a hundred words
Of thy tongue’s uttering, yet I know the sound.
Art thou not Romeo, and a Montague?
ROMEO
Neither, fair maid, if either thee dislike.
JULIET
How camest thou hither, tell me, and wherefore?
The orchard walls are high and hard to climb,
And the place death, considering who thou art,
If any of my kinsmen find thee here.
ROMEO
With love’s light wings did I o’erperch these walls,
For stony limits cannot hold love out,
And what love can do, that dares love attempt.
Therefore thy kinsmen are no stop to me.
JULIET
If they do see thee, they will murder thee.
ROMEO
Alack, there lies more peril in thine eye
Than twenty of their swords. Look thou but sweet,
And I am proof against their enmity.
JULIET
I would not for the world they saw thee here.
ROMEO
I have night’s cloak to hide me from their eyes,
And, but thou love me, let them find me here.
My life were better ended by their hate
Than death proroguèd, wanting of thy love.
JULIET
By whose direction found’st thou out this place?
ROMEO
By love, that first did prompt me to inquire.
He lent me counsel, and I lent him eyes.
I am no pilot; yet, wert thou as far
As that vast shore washed with the farthest sea,
I should adventure for such merchandise.
JULIET
Thou knowest the mask of night is on my face,
Else would a maiden blush bepaint my cheek
For that which thou hast heard me speak tonight.
Fain would I dwell on form; fain, fain deny
What I have spoke. But farewell compliment.
Dost thou love me? I know thou wilt say “Ay,”
And I will take thy word. Yet, if thou swear’st,
Thou mayst prove false. At lovers’ perjuries,
They say, Jove laughs. O gentle Romeo,
If thou dost love, pronounce it faithfully.
Or, if thou thinkest I am too quickly won,
I’ll frown and be perverse and say thee nay,
So thou wilt woo, but else not for the world.
In truth, fair Montague, I am too fond,
And therefore thou mayst think my havior light.
But trust me, gentleman, I’ll prove more true
Than those that have more coying to be strange.
I should have been more strange, I must confess,
But that thou overheard’st ere I was ware
My true-love passion. Therefore pardon me,
And not impute this yielding to light love,
Which the dark night hath so discoverèd.
ROMEO
Lady, by yonder blessèd moon I vow,
That tips with silver all these fruit-tree tops—
JULIET
O, swear not by the moon, th’ inconstant moon,
That monthly changes in her circled orb,
Lest that thy love prove likewise variable.
ROMEO
What shall I swear by?
JULIET  Do not swear at all.
Or, if thou wilt, swear by thy gracious self,
Which is the god of my idolatry,
And I’ll believe thee.
ROMEO  If my heart’s dear love—
JULIET
Well, do not swear. Although I joy in thee,
I have no joy of this contract tonight.
It is too rash, too unadvised, too sudden,
Too like the lightning, which doth cease to be
Ere one can say “It lightens.” Sweet, good night.
This bud of love, by summer’s ripening breath,
May prove a beauteous flower when next we meet.
Good night, good night. As sweet repose and rest
Come to thy heart as that within my breast.
ROMEO
O, wilt thou leave me so unsatisfied?
JULIET
What satisfaction canst thou have tonight?
ROMEO
Th’ exchange of thy love’s faithful vow for mine.
JULIET
I gave thee mine before thou didst request it,
And yet I would it were to give again.
ROMEO
Wouldst thou withdraw it? For what purpose, love?
JULIET
But to be frank and give it thee again.
And yet I wish but for the thing I have.
My bounty is as boundless as the sea,
My love as deep. The more I give to thee,
The more I have, for both are infinite.
Nurse calls from within.
I hear some noise within. Dear love, adieu.—
Anon, good nurse.—Sweet Montague, be true.
Stay but a little; I will come again.She exits.
ROMEO
O blessèd, blessèd night! I am afeard,
Being in night, all this is but a dream,
Too flattering sweet to be substantial.

Reenter Juliet above.

JULIET
Three words, dear Romeo, and good night indeed.
If that thy bent of love be honorable,
Thy purpose marriage, send me word tomorrow,
By one that I’ll procure to come to thee,
Where and what time thou wilt perform the rite,
And all my fortunes at thy foot I’ll lay
And follow thee my lord throughout the world.
NURSE, within  Madam.
JULIET
I come anon.—But if thou meanest not well,
I do beseech thee—
NURSE, within  Madam.
JULIET  By and by, I come.—
To cease thy strife and leave me to my grief.
Tomorrow will I send.
ROMEO  So thrive my soul—
JULIET  A thousand times good night.She exits.
ROMEO
A thousand times the worse to want thy light.
Love goes toward love as schoolboys from their
books,
But love from love, toward school with heavy looks.
Going.

Enter Juliet above again.

JULIET
Hist, Romeo, hist! O, for a falc’ner’s voice
To lure this tassel-gentle back again!
Bondage is hoarse and may not speak aloud,
Else would I tear the cave where Echo lies
And make her airy tongue more hoarse than mine
With repetition of “My Romeo!”
ROMEO
It is my soul that calls upon my name.
How silver-sweet sound lovers’ tongues by night,
Like softest music to attending ears.
JULIET
Romeo.
ROMEO  My dear.
JULIET  What o’clock tomorrow
Shall I send to thee?
ROMEO  By the hour of nine.
JULIET
I will not fail. ’Tis twenty year till then.
I have forgot why I did call thee back.
ROMEO
Let me stand here till thou remember it.
JULIET
I shall forget, to have thee still stand there,
Rememb’ring how I love thy company.
ROMEO
And I’ll still stay, to have thee still forget,
Forgetting any other home but this.
JULIET
’Tis almost morning. I would have thee gone,
And yet no farther than a wanton’s bird,
That lets it hop a little from his hand,
Like a poor prisoner in his twisted gyves,
And with a silken thread plucks it back again,
So loving-jealous of his liberty.
ROMEO
I would I were thy bird.
JULIET  Sweet, so would I.
Yet I should kill thee with much cherishing.
Good night, good night. Parting is such sweet
sorrow
That I shall say “Good night” till it be morrow.
She exits.
ROMEO
Sleep dwell upon thine eyes, peace in thy breast.
Would I were sleep and peace so sweet to rest.
Hence will I to my ghostly friar’s close cell,
His help to crave, and my dear hap to tell.
He exits.


Scene 3
Enter Friar Lawrence alone with a basket.

FRIAR LAWRENCE
The gray-eyed morn smiles on the frowning night,
Check’ring the eastern clouds with streaks of light,
And fleckled darkness like a drunkard reels
From forth day’s path and Titan’s fiery wheels.
Now, ere the sun advance his burning eye,
The day to cheer and night’s dank dew to dry,
I must upfill this osier cage of ours
With baleful weeds and precious-juicèd flowers.
The Earth that’s nature’s mother is her tomb;
What is her burying grave, that is her womb;
And from her womb children of divers kind
We sucking on her natural bosom find,
Many for many virtues excellent,
None but for some, and yet all different.
O, mickle is the powerful grace that lies
In plants, herbs, stones, and their true qualities.
For naught so vile that on the Earth doth live
But to the Earth some special good doth give;
Nor aught so good but, strained from that fair use,
Revolts from true birth, stumbling on abuse.
Virtue itself turns vice, being misapplied,
And vice sometime by action dignified.

Enter Romeo.

Within the infant rind of this weak flower
Poison hath residence and medicine power:
For this, being smelt, with that part cheers each
part;
Being tasted, stays all senses with the heart.
Two such opposèd kings encamp them still
In man as well as herbs—grace and rude will;
And where the worser is predominant,
Full soon the canker death eats up that plant.
ROMEO
Good morrow, father.
FRIAR LAWRENCE  Benedicite.
What early tongue so sweet saluteth me?
Young son, it argues a distempered head
So soon to bid “Good morrow” to thy bed.
Care keeps his watch in every old man’s eye,
And, where care lodges, sleep will never lie;
But where unbruisèd youth with unstuffed brain
Doth couch his limbs, there golden sleep doth
reign.
Therefore thy earliness doth me assure
Thou art uproused with some distemp’rature,
Or, if not so, then here I hit it right:
Our Romeo hath not been in bed tonight.
ROMEO
That last is true. The sweeter rest was mine.
FRIAR LAWRENCE
God pardon sin! Wast thou with Rosaline?
ROMEO
With Rosaline, my ghostly father? No.
I have forgot that name and that name’s woe.
FRIAR LAWRENCE
That’s my good son. But where hast thou been
then?
ROMEO
I’ll tell thee ere thou ask it me again.
I have been feasting with mine enemy,
Where on a sudden one hath wounded me
That’s by me wounded. Both our remedies
Within thy help and holy physic lies.
I bear no hatred, blessèd man, for, lo,
My intercession likewise steads my foe.
FRIAR LAWRENCE
Be plain, good son, and homely in thy drift.
Riddling confession finds but riddling shrift.
ROMEO
Then plainly know my heart’s dear love is set
On the fair daughter of rich Capulet.
As mine on hers, so hers is set on mine,
And all combined, save what thou must combine
By holy marriage. When and where and how
We met, we wooed, and made exchange of vow
I’ll tell thee as we pass, but this I pray,
That thou consent to marry us today.
FRIAR LAWRENCE
Holy Saint Francis, what a change is here!
Is Rosaline, that thou didst love so dear,
So soon forsaken? Young men’s love then lies
Not truly in their hearts, but in their eyes.
Jesu Maria, what a deal of brine
Hath washed thy sallow cheeks for Rosaline!
How much salt water thrown away in waste
To season love, that of it doth not taste!
The sun not yet thy sighs from heaven clears,
Thy old groans yet ringing in mine ancient ears.
Lo, here upon thy cheek the stain doth sit
Of an old tear that is not washed off yet.
If e’er thou wast thyself, and these woes thine,
Thou and these woes were all for Rosaline.
And art thou changed? Pronounce this sentence
then:
Women may fall when there’s no strength in men.
ROMEO
Thou chid’st me oft for loving Rosaline.
FRIAR LAWRENCE
For doting, not for loving, pupil mine.
ROMEO
And bad’st me bury love.
FRIAR LAWRENCE  Not in a grave
To lay one in, another out to have.
ROMEO
I pray thee, chide me not. Her I love now
Doth grace for grace and love for love allow.
The other did not so.
FRIAR LAWRENCE  O, she knew well
Thy love did read by rote, that could not spell.
But come, young waverer, come, go with me.
In one respect I’ll thy assistant be,
For this alliance may so happy prove
To turn your households’ rancor to pure love.
ROMEO
O, let us hence. I stand on sudden haste.
FRIAR LAWRENCE
Wisely and slow. They stumble that run fast.
They exit.


Scene 4
Enter Benvolio and Mercutio.

MERCUTIO
Where the devil should this Romeo be?
Came he not home tonight?
BENVOLIO
Not to his father’s. I spoke with his man.
MERCUTIO
Why, that same pale hard-hearted wench, that
Rosaline,
Torments him so that he will sure run mad.
BENVOLIO
Tybalt, the kinsman to old Capulet,
Hath sent a letter to his father’s house.
MERCUTIO  A challenge, on my life.
BENVOLIO  Romeo will answer it.
MERCUTIO  Any man that can write may answer a letter.
BENVOLIO  Nay, he will answer the letter’s master, how
he dares, being dared.
MERCUTIO  Alas, poor Romeo, he is already dead,
stabbed with a white wench’s black eye, run
through the ear with a love-song, the very pin of his
heart cleft with the blind bow-boy’s butt shaft. And
is he a man to encounter Tybalt?
BENVOLIO  Why, what is Tybalt?
MERCUTIO  More than prince of cats. O, he’s the courageous
captain of compliments. He fights as you sing
prick-song, keeps time, distance, and proportion.
He rests his minim rests, one, two, and the third in
your bosom—the very butcher of a silk button, a
duelist, a duelist, a gentleman of the very first house
of the first and second cause. Ah, the immortal
passado, the punto reverso, the hay!
BENVOLIO  The what?
MERCUTIO  The pox of such antic, lisping, affecting
phantasimes, these new tuners of accent: “By
Jesu, a very good blade! A very tall man! A very good
whore!” Why, is not this a lamentable thing, grandsire,
that we should be thus afflicted with these
strange flies, these fashion-mongers, these “pardon-me” ’s,
who stand so much on the new form
that they cannot sit at ease on the old bench? O their
bones, their bones!

Enter Romeo.

BENVOLIO  Here comes Romeo, here comes Romeo.
MERCUTIO  Without his roe, like a dried herring. O
flesh, flesh, how art thou fishified! Now is he for the
numbers that Petrarch flowed in. Laura to his lady
was a kitchen wench (marry, she had a better love
to berhyme her), Dido a dowdy, Cleopatra a gypsy,
Helen and Hero hildings and harlots, Thisbe a gray
eye or so, but not to the purpose.—Signior Romeo,
bonjour. There’s a French salutation to your French
slop. You gave us the counterfeit fairly last night.
ROMEO  Good morrow to you both. What counterfeit
did I give you?
MERCUTIO  The slip, sir, the slip. Can you not conceive?
ROMEO  Pardon, good Mercutio, my business was
great, and in such a case as mine a man may strain
courtesy.
MERCUTIO  That’s as much as to say such a case as
yours constrains a man to bow in the hams.
ROMEO  Meaning, to curtsy.
MERCUTIO  Thou hast most kindly hit it.
ROMEO  A most courteous exposition.
MERCUTIO  Nay, I am the very pink of courtesy.
ROMEO  “Pink” for flower.
MERCUTIO  Right.
ROMEO  Why, then is my pump well flowered.
MERCUTIO  Sure wit, follow me this jest now till thou
hast worn out thy pump, that when the single sole
of it is worn, the jest may remain, after the wearing,
solely singular.
ROMEO  O single-soled jest, solely singular for the
singleness.
MERCUTIO  Come between us, good Benvolio. My wits
faints.
ROMEO  Switch and spurs, switch and spurs, or I’ll cry
a match.
MERCUTIO  Nay, if our wits run the wild-goose chase, I
am done, for thou hast more of the wild goose in
one of thy wits than, I am sure, I have in my whole
five. Was I with you there for the goose?
ROMEO  Thou wast never with me for anything when
thou wast not there for the goose.
MERCUTIO  I will bite thee by the ear for that jest.
ROMEO  Nay, good goose, bite not.
MERCUTIO  Thy wit is a very bitter sweeting; it is a most
sharp sauce.
ROMEO  And is it not, then, well served into a sweet
goose?
MERCUTIO  O, here’s a wit of cheveril that stretches
from an inch narrow to an ell broad.
ROMEO  I stretch it out for that word “broad,” which
added to the goose, proves thee far and wide a
broad goose.
MERCUTIO  Why, is not this better now than groaning
for love? Now art thou sociable, now art thou
Romeo, now art thou what thou art, by art as well as
by nature. For this driveling love is like a great
natural that runs lolling up and down to hide his
bauble in a hole.
BENVOLIO  Stop there, stop there.
MERCUTIO  Thou desirest me to stop in my tale against
the hair.
BENVOLIO  Thou wouldst else have made thy tale large.
MERCUTIO  O, thou art deceived. I would have made it
short, for I was come to the whole depth of my tale
and meant indeed to occupy the argument no
longer.

Enter Nurse and her man Peter.

ROMEO  Here’s goodly gear. A sail, a sail!
MERCUTIO  Two, two—a shirt and a smock.
NURSE  Peter.
PETER  Anon.
NURSE  My fan, Peter.
MERCUTIO  Good Peter, to hide her face, for her fan’s
the fairer face.
NURSE  God you good morrow, gentlemen.
MERCUTIO  God you good e’en, fair gentlewoman.
NURSE  Is it good e’en?
MERCUTIO  ’Tis no less, I tell you, for the bawdy hand of
the dial is now upon the prick of noon.
NURSE  Out upon you! What a man are you?
ROMEO  One, gentlewoman, that God hath made, himself
to mar.
NURSE  By my troth, it is well said: “for himself to
mar,” quoth he? Gentlemen, can any of you tell me
where I may find the young Romeo?
ROMEO  I can tell you, but young Romeo will be older
when you have found him than he was when you
sought him. I am the youngest of that name, for
fault of a worse.
NURSE  You say well.
MERCUTIO  Yea, is the worst well? Very well took, i’
faith, wisely, wisely.
NURSE  If you be he, sir, I desire some confidence with
you.
BENVOLIO  She will indite him to some supper.
MERCUTIO  A bawd, a bawd, a bawd. So ho!
ROMEO  What hast thou found?
MERCUTIO  No hare, sir, unless a hare, sir, in a Lenten
pie that is something stale and hoar ere it be spent.
  An old hare hoar,
 And an old hare hoar,
  Is very good meat in Lent.
 But a hare that is hoar
 Is too much for a score
  When it hoars ere it be spent.
Romeo, will you come to your father’s? We’ll to
dinner thither.
ROMEO  I will follow you.
MERCUTIO  Farewell, ancient lady. Farewell, lady, lady,
lady.Mercutio and Benvolio exit.
NURSE  I pray you, sir, what saucy merchant was this
that was so full of his ropery?
ROMEO  A gentleman, nurse, that loves to hear himself
talk and will speak more in a minute than he will
stand to in a month.
NURSE  An he speak anything against me, I’ll take him
down, an he were lustier than he is, and twenty
such jacks. An if I cannot, I’ll find those that shall.
Scurvy knave, I am none of his flirt-gills; I am none
of his skains-mates. To Peter. And thou must stand
by too and suffer every knave to use me at his
pleasure.
PETER  I saw no man use you at his pleasure. If I had,
my weapon should quickly have been out. I warrant
you, I dare draw as soon as another man, if I
see occasion in a good quarrel, and the law on my
side.
NURSE  Now, afore God, I am so vexed that every part
about me quivers. Scurvy knave! To Romeo. Pray
you, sir, a word. And, as I told you, my young lady
bid me inquire you out. What she bid me say, I will
keep to myself. But first let me tell you, if you
should lead her in a fool’s paradise, as they say, it
were a very gross kind of behavior, as they say. For
the gentlewoman is young; and therefore, if you
should deal double with her, truly it were an ill
thing to be offered to any gentlewoman, and very
weak dealing.
ROMEO  Nurse, commend me to thy lady and mistress.
I protest unto thee—
NURSE  Good heart, and i’ faith I will tell her as much.
Lord, Lord, she will be a joyful woman.
ROMEO  What wilt thou tell her, nurse? Thou dost not
mark me.
NURSE  I will tell her, sir, that you do protest, which, as
I take it, is a gentlemanlike offer.
ROMEO  Bid her devise
Some means to come to shrift this afternoon,
And there she shall at Friar Lawrence’ cell
Be shrived and married. Here is for thy pains.
Offering her money.
NURSE  No, truly, sir, not a penny.
ROMEO  Go to, I say you shall.
NURSE
This afternoon, sir? Well, she shall be there.
ROMEO
And stay, good nurse, behind the abbey wall.
Within this hour my man shall be with thee
And bring thee cords made like a tackled stair,
Which to the high topgallant of my joy
Must be my convoy in the secret night.
Farewell. Be trusty, and I’ll quit thy pains.
Farewell. Commend me to thy mistress.
NURSE
Now, God in heaven bless thee! Hark you, sir.
ROMEO  What sayst thou, my dear nurse?
NURSE
Is your man secret? Did you ne’er hear say
“Two may keep counsel, putting one away”?
ROMEO
Warrant thee, my man’s as true as steel.
NURSE  Well, sir, my mistress is the sweetest lady. Lord,
Lord, when ’twas a little prating thing—O, there is
a nobleman in town, one Paris, that would fain lay
knife aboard, but she, good soul, had as lief see a
toad, a very toad, as see him. I anger her sometimes
and tell her that Paris is the properer man, but I’ll
warrant you, when I say so, she looks as pale as any
clout in the versal world. Doth not rosemary and
Romeo begin both with a letter?
ROMEO  Ay, nurse, what of that? Both with an R.
NURSE  Ah, mocker, that’s the dog’s name. R is for
the—No, I know it begins with some other letter,
and she hath the prettiest sententious of it, of you
and rosemary, that it would do you good to hear it.
ROMEO  Commend me to thy lady.
NURSE  Ay, a thousand times.—Peter.
PETER  Anon.
NURSE  Before and apace.
They exit.


Scene 5
Enter Juliet.

JULIET
The clock struck nine when I did send the Nurse.
In half an hour she promised to return.
Perchance she cannot meet him. That’s not so.
O, she is lame! Love’s heralds should be thoughts,
Which ten times faster glides than the sun’s beams,
Driving back shadows over louring hills.
Therefore do nimble-pinioned doves draw Love,
And therefore hath the wind-swift Cupid wings.
Now is the sun upon the highmost hill
Of this day’s journey, and from nine till twelve
Is three long hours, yet she is not come.
Had she affections and warm youthful blood,
She would be as swift in motion as a ball;
My words would bandy her to my sweet love,
And his to me.
But old folks, many feign as they were dead,
Unwieldy, slow, heavy, and pale as lead.

Enter Nurse and Peter.

O God, she comes!—O, honey nurse, what news?
Hast thou met with him? Send thy man away.
NURSE  Peter, stay at the gate.Peter exits.
JULIET
Now, good sweet nurse—O Lord, why lookest thou
sad?
Though news be sad, yet tell them merrily.
If good, thou shamest the music of sweet news
By playing it to me with so sour a face.
NURSE
I am aweary. Give me leave awhile.
Fie, how my bones ache! What a jaunt have I!
JULIET
I would thou hadst my bones, and I thy news.
Nay, come, I pray thee, speak. Good, good nurse,
speak.
NURSE
Jesu, what haste! Can you not stay awhile?
Do you not see that I am out of breath?
JULIET
How art thou out of breath, when thou hast breath
To say to me that thou art out of breath?
The excuse that thou dost make in this delay
Is longer than the tale thou dost excuse.
Is thy news good or bad? Answer to that.
Say either, and I’ll stay the circumstance.
Let me be satisfied; is ’t good or bad?
NURSE  Well, you have made a simple choice. You know
not how to choose a man. Romeo? No, not he.
Though his face be better than any man’s, yet his leg
excels all men’s, and for a hand and a foot and a
body, though they be not to be talked on, yet they
are past compare. He is not the flower of courtesy,
but I’ll warrant him as gentle as a lamb. Go thy
ways, wench. Serve God. What, have you dined at
home?
JULIET
No, no. But all this did I know before.
What says he of our marriage? What of that?
NURSE
Lord, how my head aches! What a head have I!
It beats as it would fall in twenty pieces.
My back o’ t’ other side! Ah, my back, my back!
Beshrew your heart for sending me about
To catch my death with jaunting up and down.
JULIET
I’ faith, I am sorry that thou art not well.
Sweet, sweet, sweet nurse, tell me, what says my
love?
NURSE  Your love says, like an honest gentleman, and a
courteous, and a kind, and a handsome, and, I
warrant, a virtuous—Where is your mother?
JULIET
Where is my mother? Why, she is within.
Where should she be? How oddly thou repliest:
“Your love says, like an honest gentleman,
Where is your mother?”
NURSE  O God’s lady dear,
Are you so hot? Marry, come up, I trow.
Is this the poultice for my aching bones?
Henceforward do your messages yourself.
JULIET
Here’s such a coil. Come, what says Romeo?
NURSE
Have you got leave to go to shrift today?
JULIET  I have.
NURSE
Then hie you hence to Friar Lawrence’ cell.
There stays a husband to make you a wife.
Now comes the wanton blood up in your cheeks;
They’ll be in scarlet straight at any news.
Hie you to church. I must another way,
To fetch a ladder by the which your love
Must climb a bird’s nest soon when it is dark.
I am the drudge and toil in your delight,
But you shall bear the burden soon at night.
Go. I’ll to dinner. Hie you to the cell.
JULIET
Hie to high fortune! Honest nurse, farewell.
They exit.


Scene 6
Enter Friar Lawrence and Romeo.

FRIAR LAWRENCE
So smile the heavens upon this holy act
That after-hours with sorrow chide us not.
ROMEO
Amen, amen. But come what sorrow can,
It cannot countervail the exchange of joy
That one short minute gives me in her sight.
Do thou but close our hands with holy words,
Then love-devouring death do what he dare,
It is enough I may but call her mine.
FRIAR LAWRENCE
These violent delights have violent ends
And in their triumph die, like fire and powder,
Which, as they kiss, consume. The sweetest honey
Is loathsome in his own deliciousness
And in the taste confounds the appetite.
Therefore love moderately. Long love doth so.
Too swift arrives as tardy as too slow.

Enter Juliet.

Here comes the lady. O, so light a foot
Will ne’er wear out the everlasting flint.
A lover may bestride the gossamers
That idles in the wanton summer air,
And yet not fall, so light is vanity.
JULIET
Good even to my ghostly confessor.
FRIAR LAWRENCE
Romeo shall thank thee, daughter, for us both.
JULIET
As much to him, else is his thanks too much.
ROMEO
Ah, Juliet, if the measure of thy joy
Be heaped like mine, and that thy skill be more
To blazon it, then sweeten with thy breath
This neighbor air, and let rich music’s tongue
Unfold the imagined happiness that both
Receive in either by this dear encounter.
JULIET
Conceit, more rich in matter than in words,
Brags of his substance, not of ornament.
They are but beggars that can count their worth,
But my true love is grown to such excess
I cannot sum up sum of half my wealth.
FRIAR LAWRENCE
Come, come with me, and we will make short work,
For, by your leaves, you shall not stay alone
Till Holy Church incorporate two in one.
They exit.



ACT 3
Scene 1
Enter Mercutio, Benvolio, and their men.

BENVOLIO
I pray thee, good Mercutio, let’s retire.
The day is hot, the Capels are abroad,
And if we meet we shall not ’scape a brawl,
For now, these hot days, is the mad blood stirring.
MERCUTIO  Thou art like one of these fellows that, when
he enters the confines of a tavern, claps me his
sword upon the table and says “God send me no
need of thee” and, by the operation of the second
cup, draws him on the drawer when indeed there is
no need.
BENVOLIO  Am I like such a fellow?
MERCUTIO  Come, come, thou art as hot a jack in thy
mood as any in Italy, and as soon moved to be
moody, and as soon moody to be moved.
BENVOLIO  And what to?
MERCUTIO  Nay, an there were two such, we should
have none shortly, for one would kill the other.
Thou—why, thou wilt quarrel with a man that
hath a hair more or a hair less in his beard than
thou hast. Thou wilt quarrel with a man for cracking
nuts, having no other reason but because thou
hast hazel eyes. What eye but such an eye would spy
out such a quarrel? Thy head is as full of quarrels as
an egg is full of meat, and yet thy head hath been
beaten as addle as an egg for quarreling. Thou hast
quarreled with a man for coughing in the street
because he hath wakened thy dog that hath lain
asleep in the sun. Didst thou not fall out with a tailor
for wearing his new doublet before Easter? With
another, for tying his new shoes with old ribbon?
And yet thou wilt tutor me from quarreling?
BENVOLIO  An I were so apt to quarrel as thou art, any
man should buy the fee simple of my life for an
hour and a quarter.
MERCUTIO  The fee simple? O simple!

Enter Tybalt, Petruchio, and others.

BENVOLIO  By my head, here comes the Capulets.
MERCUTIO  By my heel, I care not.
TYBALT, to his companions
Follow me close, for I will speak to them.—
Gentlemen, good e’en. A word with one of you.
MERCUTIO  And but one word with one of us? Couple it
with something. Make it a word and a blow.
TYBALT  You shall find me apt enough to that, sir, an
you will give me occasion.
MERCUTIO  Could you not take some occasion without
giving?
TYBALT  Mercutio, thou consortest with Romeo.
MERCUTIO  Consort? What, dost thou make us minstrels?
An thou make minstrels of us, look to hear
nothing but discords. Here’s my fiddlestick; here’s
that shall make you dance. Zounds, consort!
BENVOLIO
We talk here in the public haunt of men.
Either withdraw unto some private place,
Or reason coldly of your grievances,
Or else depart. Here all eyes gaze on us.
MERCUTIO
Men’s eyes were made to look, and let them gaze.
I will not budge for no man’s pleasure, I.

Enter Romeo.

TYBALT
Well, peace be with you, sir. Here comes my man.
MERCUTIO
But I’ll be hanged, sir, if he wear your livery.
Marry, go before to field, he’ll be your follower.
Your Worship in that sense may call him “man.”
TYBALT
Romeo, the love I bear thee can afford
No better term than this: thou art a villain.
ROMEO
Tybalt, the reason that I have to love thee
Doth much excuse the appertaining rage
To such a greeting. Villain am I none.
Therefore farewell. I see thou knowest me not.
TYBALT
Boy, this shall not excuse the injuries
That thou hast done me. Therefore turn and draw.
ROMEO
I do protest I never injured thee
But love thee better than thou canst devise
Till thou shalt know the reason of my love.
And so, good Capulet, which name I tender
As dearly as mine own, be satisfied.
MERCUTIO
O calm, dishonorable, vile submission!
Alla stoccato carries it away.He draws.
Tybalt, you ratcatcher, will you walk?
TYBALT  What wouldst thou have with me?
MERCUTIO  Good king of cats, nothing but one of your
nine lives, that I mean to make bold withal, and, as
you shall use me hereafter, dry-beat the rest of the
eight. Will you pluck your sword out of his pilcher
by the ears? Make haste, lest mine be about your
ears ere it be out.
TYBALT  I am for you.He draws.
ROMEO
Gentle Mercutio, put thy rapier up.
MERCUTIO  Come, sir, your passado.They fight.
ROMEO
Draw, Benvolio, beat down their weapons.
Romeo draws.
Gentlemen, for shame forbear this outrage!
Tybalt! Mercutio! The Prince expressly hath
Forbid this bandying in Verona streets.
Hold, Tybalt! Good Mercutio!
Romeo attempts to beat down their rapiers.
Tybalt stabs Mercutio.
PETRUCHIO  Away, Tybalt!
Tybalt, Petruchio, and their followers exit.
MERCUTIO  I am hurt.
A plague o’ both houses! I am sped.
Is he gone and hath nothing?
BENVOLIO  What, art thou hurt?
MERCUTIO
Ay, ay, a scratch, a scratch. Marry, ’tis enough.
Where is my page?—Go, villain, fetch a surgeon.
Page exits.
ROMEO
Courage, man, the hurt cannot be much.
MERCUTIO  No, ’tis not so deep as a well, nor so wide as
a church door, but ’tis enough. ’Twill serve. Ask for
me tomorrow, and you shall find me a grave man. I
am peppered, I warrant, for this world. A plague o’
both your houses! Zounds, a dog, a rat, a mouse, a
cat, to scratch a man to death! A braggart, a rogue, a
villain that fights by the book of arithmetic! Why the
devil came you between us? I was hurt under your
arm.
ROMEO  I thought all for the best.
MERCUTIO
Help me into some house, Benvolio,
Or I shall faint. A plague o’ both your houses!
They have made worms’ meat of me.
I have it, and soundly, too. Your houses!
All but Romeo exit.
ROMEO
This gentleman, the Prince’s near ally,
My very friend, hath got this mortal hurt
In my behalf. My reputation stained
With Tybalt’s slander—Tybalt, that an hour
Hath been my cousin! O sweet Juliet,
Thy beauty hath made me effeminate
And in my temper softened valor’s steel.

Enter Benvolio.

BENVOLIO
O Romeo, Romeo, brave Mercutio is dead.
That gallant spirit hath aspired the clouds,
Which too untimely here did scorn the earth.
ROMEO
This day’s black fate on more days doth depend.
This but begins the woe others must end.

Enter Tybalt.

BENVOLIO
Here comes the furious Tybalt back again.
ROMEO
Alive in triumph, and Mercutio slain!
Away to heaven, respective lenity,
And fire-eyed fury be my conduct now.—
Now, Tybalt, take the “villain” back again
That late thou gavest me, for Mercutio’s soul
Is but a little way above our heads,
Staying for thine to keep him company.
Either thou or I, or both, must go with him.
TYBALT
Thou wretched boy that didst consort him here
Shalt with him hence.
ROMEO  This shall determine that.
They fight. Tybalt falls.
BENVOLIO
Romeo, away, begone!
The citizens are up, and Tybalt slain.
Stand not amazed. The Prince will doom thee death
If thou art taken. Hence, be gone, away.
ROMEO
O, I am Fortune’s fool!
BENVOLIO  Why dost thou stay?
Romeo exits.

Enter Citizens.

CITIZEN
Which way ran he that killed Mercutio?
Tybalt, that murderer, which way ran he?
BENVOLIO
There lies that Tybalt.
CITIZEN, to Tybalt  Up, sir, go with me.
I charge thee in the Prince’s name, obey.

Enter Prince, old Montague, Capulet, their Wives and all.

PRINCE
Where are the vile beginners of this fray?
BENVOLIO
O noble prince, I can discover all
The unlucky manage of this fatal brawl.
There lies the man, slain by young Romeo,
That slew thy kinsman, brave Mercutio.
LADY CAPULET
Tybalt, my cousin, O my brother’s child!
O prince! O cousin! Husband! O, the blood is spilled
Of my dear kinsman! Prince, as thou art true,
For blood of ours, shed blood of Montague.
O cousin, cousin!
PRINCE
Benvolio, who began this bloody fray?
BENVOLIO
Tybalt, here slain, whom Romeo’s hand did slay—
Romeo, that spoke him fair, bid him bethink
How nice the quarrel was, and urged withal
Your high displeasure. All this utterèd
With gentle breath, calm look, knees humbly bowed
Could not take truce with the unruly spleen
Of Tybalt, deaf to peace, but that he tilts
With piercing steel at bold Mercutio’s breast,
Who, all as hot, turns deadly point to point
And, with a martial scorn, with one hand beats
Cold death aside and with the other sends
It back to Tybalt, whose dexterity
Retorts it. Romeo he cries aloud
“Hold, friends! Friends, part!” and swifter than his
tongue
His agile arm beats down their fatal points,
And ’twixt them rushes; underneath whose arm
An envious thrust from Tybalt hit the life
Of stout Mercutio, and then Tybalt fled.
But by and by comes back to Romeo,
Who had but newly entertained revenge,
And to ’t they go like lightning, for ere I
Could draw to part them was stout Tybalt slain,
And, as he fell, did Romeo turn and fly.
This is the truth, or let Benvolio die.
LADY CAPULET
He is a kinsman to the Montague.
Affection makes him false; he speaks not true.
Some twenty of them fought in this black strife,
And all those twenty could but kill one life.
I beg for justice, which thou, prince, must give.
Romeo slew Tybalt; Romeo must not live.
PRINCE
Romeo slew him; he slew Mercutio.
Who now the price of his dear blood doth owe?
MONTAGUE
Not Romeo, Prince; he was Mercutio’s friend.
His fault concludes but what the law should end,
The life of Tybalt.
PRINCE  And for that offense
Immediately we do exile him hence.
I have an interest in your hearts’ proceeding:
My blood for your rude brawls doth lie a-bleeding.
But I’ll amerce you with so strong a fine
That you shall all repent the loss of mine.
I will be deaf to pleading and excuses.
Nor tears nor prayers shall purchase out abuses.
Therefore use none. Let Romeo hence in haste,
Else, when he is found, that hour is his last.
Bear hence this body and attend our will.
Mercy but murders, pardoning those that kill.
They exit, the Capulet men
bearing off Tybalt’s body.


Scene 2
Enter Juliet alone.

JULIET
Gallop apace, you fiery-footed steeds,
Towards Phoebus’ lodging. Such a wagoner
As Phaëton would whip you to the west
And bring in cloudy night immediately.
Spread thy close curtain, love-performing night,
That runaways’ eyes may wink, and Romeo
Leap to these arms, untalked of and unseen.
Lovers can see to do their amorous rites
By their own beauties, or, if love be blind,
It best agrees with night. Come, civil night,
Thou sober-suited matron all in black,
And learn me how to lose a winning match
Played for a pair of stainless maidenhoods.
Hood my unmanned blood, bating in my cheeks,
With thy black mantle till strange love grow bold,
Think true love acted simple modesty.
Come, night. Come, Romeo. Come, thou day in
night,
For thou wilt lie upon the wings of night
Whiter than new snow upon a raven’s back.
Come, gentle night; come, loving black-browed
night,
Give me my Romeo, and when I shall die,
Take him and cut him out in little stars,
And he will make the face of heaven so fine
That all the world will be in love with night
And pay no worship to the garish sun.
O, I have bought the mansion of a love
But not possessed it, and, though I am sold,
Not yet enjoyed. So tedious is this day
As is the night before some festival
To an impatient child that hath new robes
And may not wear them.

Enter Nurse with cords.

O, here comes my nurse,
And she brings news, and every tongue that speaks
But Romeo’s name speaks heavenly eloquence.—
Now, nurse, what news? What hast thou there? The
cords
That Romeo bid thee fetch?
NURSE  Ay, ay, the cords.
Dropping the rope ladder.
JULIET
Ay me, what news? Why dost thou wring thy hands?
NURSE
Ah weraday, he’s dead, he’s dead, he’s dead!
We are undone, lady, we are undone.
Alack the day, he’s gone, he’s killed, he’s dead.
JULIET
Can heaven be so envious?
NURSE  Romeo can,
Though heaven cannot. O Romeo, Romeo,
Whoever would have thought it? Romeo!
JULIET
What devil art thou that dost torment me thus?
This torture should be roared in dismal hell.
Hath Romeo slain himself? Say thou but “Ay,”
And that bare vowel “I” shall poison more
Than the death-darting eye of cockatrice.
I am not I if there be such an “I,”
Or those eyes shut that makes thee answer “Ay.”
If he be slain, say “Ay,” or if not, “No.”
Brief sounds determine my weal or woe.
NURSE
I saw the wound. I saw it with mine eyes
(God save the mark!) here on his manly breast—
A piteous corse, a bloody piteous corse,
Pale, pale as ashes, all bedaubed in blood,
All in gore blood. I swoonèd at the sight.
JULIET
O break, my heart, poor bankrout, break at once!
To prison, eyes; ne’er look on liberty.
Vile earth to earth resign; end motion here,
And thou and Romeo press one heavy bier.
NURSE
O Tybalt, Tybalt, the best friend I had!
O courteous Tybalt, honest gentleman,
That ever I should live to see thee dead!
JULIET
What storm is this that blows so contrary?
Is Romeo slaughtered and is Tybalt dead?
My dearest cousin, and my dearer lord?
Then, dreadful trumpet, sound the general doom,
For who is living if those two are gone?
NURSE
Tybalt is gone and Romeo banishèd.
Romeo that killed him—he is banishèd.
JULIET
O God, did Romeo’s hand shed Tybalt’s blood?
NURSE
It did, it did, alas the day, it did.
JULIET
O serpent heart hid with a flow’ring face!
Did ever dragon keep so fair a cave?
Beautiful tyrant, fiend angelical!
Dove-feathered raven, wolvish-ravening lamb!
Despisèd substance of divinest show!
Just opposite to what thou justly seem’st,
A damnèd saint, an honorable villain.
O nature, what hadst thou to do in hell
When thou didst bower the spirit of a fiend
In mortal paradise of such sweet flesh?
Was ever book containing such vile matter
So fairly bound? O, that deceit should dwell
In such a gorgeous palace!
NURSE  There’s no trust,
No faith, no honesty in men. All perjured,
All forsworn, all naught, all dissemblers.
Ah, where’s my man? Give me some aqua vitae.
These griefs, these woes, these sorrows make me
old.
Shame come to Romeo!
JULIET  Blistered be thy tongue
For such a wish! He was not born to shame.
Upon his brow shame is ashamed to sit,
For ’tis a throne where honor may be crowned
Sole monarch of the universal Earth.
O, what a beast was I to chide at him!
NURSE
Will you speak well of him that killed your cousin?
JULIET
Shall I speak ill of him that is my husband?
Ah, poor my lord, what tongue shall smooth thy
name
When I, thy three-hours wife, have mangled it?
But wherefore, villain, didst thou kill my cousin?
That villain cousin would have killed my husband.
Back, foolish tears, back to your native spring;
Your tributary drops belong to woe,
Which you, mistaking, offer up to joy.
My husband lives, that Tybalt would have slain,
And Tybalt’s dead, that would have slain my
husband.
All this is comfort. Wherefore weep I then?
Some word there was, worser than Tybalt’s death,
That murdered me. I would forget it fain,
But, O, it presses to my memory
Like damnèd guilty deeds to sinners’ minds:
“Tybalt is dead and Romeo banishèd.”
That “banishèd,” that one word “banishèd,”
Hath slain ten thousand Tybalts. Tybalt’s death
Was woe enough if it had ended there;
Or, if sour woe delights in fellowship
And needly will be ranked with other griefs,
Why followed not, when she said “Tybalt’s dead,”
“Thy father” or “thy mother,” nay, or both,
Which modern lamentation might have moved?
But with a rearward following Tybalt’s death,
“Romeo is banishèd.” To speak that word
Is father, mother, Tybalt, Romeo, Juliet,
All slain, all dead. “Romeo is banishèd.”
There is no end, no limit, measure, bound,
In that word’s death. No words can that woe sound.
Where is my father and my mother, nurse?
NURSE
Weeping and wailing over Tybalt’s corse.
Will you go to them? I will bring you thither.
JULIET
Wash they his wounds with tears? Mine shall be
spent,
When theirs are dry, for Romeo’s banishment.—
Take up those cords.
The Nurse picks up the rope ladder.
Poor ropes, you are beguiled,
Both you and I, for Romeo is exiled.
He made you for a highway to my bed,
But I, a maid, die maiden-widowèd.
Come, cords—come, nurse. I’ll to my wedding bed,
And death, not Romeo, take my maidenhead!
NURSE
Hie to your chamber. I’ll find Romeo
To comfort you. I wot well where he is.
Hark you, your Romeo will be here at night.
I’ll to him. He is hid at Lawrence’ cell.
JULIET
O, find him!Giving the Nurse a ring.
Give this ring to my true knight
And bid him come to take his last farewell.
They exit.


Scene 3
Enter Friar Lawrence.

FRIAR LAWRENCE
Romeo, come forth; come forth, thou fearful man.
Affliction is enamored of thy parts,
And thou art wedded to calamity.
Enter Romeo.

ROMEO
Father, what news? What is the Prince’s doom?
What sorrow craves acquaintance at my hand
That I yet know not?
FRIAR LAWRENCE  Too familiar
Is my dear son with such sour company.
I bring thee tidings of the Prince’s doom.
ROMEO
What less than doomsday is the Prince’s doom?
FRIAR LAWRENCE
A gentler judgment vanished from his lips:
Not body’s death, but body’s banishment.
ROMEO
Ha, banishment? Be merciful, say “death,”
For exile hath more terror in his look,
Much more than death. Do not say “banishment.”
FRIAR LAWRENCE
Here from Verona art thou banishèd.
Be patient, for the world is broad and wide.
ROMEO
There is no world without Verona walls
But purgatory, torture, hell itself.
Hence “banishèd” is “banished from the world,”
And world’s exile is death. Then “banishèd”
Is death mistermed. Calling death “banishèd,”
Thou cutt’st my head off with a golden ax
And smilest upon the stroke that murders me.
FRIAR LAWRENCE
O deadly sin, O rude unthankfulness!
Thy fault our law calls death, but the kind prince,
Taking thy part, hath rushed aside the law
And turned that black word “death” to
“banishment.”
This is dear mercy, and thou seest it not.
ROMEO
’Tis torture and not mercy. Heaven is here
Where Juliet lives, and every cat and dog
And little mouse, every unworthy thing,
Live here in heaven and may look on her,
But Romeo may not. More validity,
More honorable state, more courtship lives
In carrion flies than Romeo. They may seize
On the white wonder of dear Juliet’s hand
And steal immortal blessing from her lips,
Who even in pure and vestal modesty
Still blush, as thinking their own kisses sin;
But Romeo may not; he is banishèd.
Flies may do this, but I from this must fly.
They are free men, but I am banishèd.
And sayest thou yet that exile is not death?
Hadst thou no poison mixed, no sharp-ground
knife,
No sudden mean of death, though ne’er so mean,
But “banishèd” to kill me? “Banishèd”?
O friar, the damnèd use that word in hell.
Howling attends it. How hast thou the heart,
Being a divine, a ghostly confessor,
A sin absolver, and my friend professed,
To mangle me with that word “banishèd”?
FRIAR LAWRENCE
Thou fond mad man, hear me a little speak.
ROMEO
O, thou wilt speak again of banishment.
FRIAR LAWRENCE
I’ll give thee armor to keep off that word,
Adversity’s sweet milk, philosophy,
To comfort thee, though thou art banishèd.
ROMEO
Yet “banishèd”? Hang up philosophy.
Unless philosophy can make a Juliet,
Displant a town, reverse a prince’s doom,
It helps not, it prevails not. Talk no more.
FRIAR LAWRENCE
O, then I see that madmen have no ears.
ROMEO
How should they when that wise men have no eyes?
FRIAR LAWRENCE
Let me dispute with thee of thy estate.
ROMEO
Thou canst not speak of that thou dost not feel.
Wert thou as young as I, Juliet thy love,
An hour but married, Tybalt murderèd,
Doting like me, and like me banishèd,
Then mightst thou speak, then mightst thou tear thy
hair
And fall upon the ground as I do now,
Romeo throws himself down.
Taking the measure of an unmade grave.
Knock within.
FRIAR LAWRENCE
Arise. One knocks. Good Romeo, hide thyself.
ROMEO
Not I, unless the breath of heartsick groans,
Mistlike, enfold me from the search of eyes.
Knock.
FRIAR LAWRENCE
Hark, how they knock!—Who’s there?—Romeo,
arise.
Thou wilt be taken.—Stay awhile.—Stand up.
Knock.
Run to my study.—By and by.—God’s will,
What simpleness is this?—I come, I come.
Knock.
Who knocks so hard? Whence come you? What’s
your will?
NURSE, within
Let me come in, and you shall know my errand.
I come from Lady Juliet.
FRIAR LAWRENCE, admitting the Nurse
Welcome, then.

Enter Nurse.

NURSE
O holy friar, O, tell me, holy friar,
Where’s my lady’s lord? Where’s Romeo?
FRIAR LAWRENCE
There on the ground, with his own tears made
drunk.
NURSE
O, he is even in my mistress’ case,
Just in her case. O woeful sympathy!
Piteous predicament! Even so lies she,
Blubb’ring and weeping, weeping and blubb’ring.—
Stand up, stand up. Stand an you be a man.
For Juliet’s sake, for her sake, rise and stand.
Why should you fall into so deep an O?
ROMEO  Nurse.
NURSE
Ah sir, ah sir, death’s the end of all.
ROMEO, rising up
Spakest thou of Juliet? How is it with her?
Doth not she think me an old murderer,
Now I have stained the childhood of our joy
With blood removed but little from her own?
Where is she? And how doth she? And what says
My concealed lady to our canceled love?
NURSE
O, she says nothing, sir, but weeps and weeps,
And now falls on her bed, and then starts up,
And “Tybalt” calls, and then on Romeo cries,
And then down falls again.
ROMEO  As if that name,
Shot from the deadly level of a gun,
Did murder her, as that name’s cursèd hand
Murdered her kinsman.—O, tell me, friar, tell me,
In what vile part of this anatomy
Doth my name lodge? Tell me, that I may sack
The hateful mansion.He draws his dagger.
FRIAR LAWRENCE  Hold thy desperate hand!
Art thou a man? Thy form cries out thou art.
Thy tears are womanish; thy wild acts denote
The unreasonable fury of a beast.
Unseemly woman in a seeming man,
And ill-beseeming beast in seeming both!
Thou hast amazed me. By my holy order,
I thought thy disposition better tempered.
Hast thou slain Tybalt? Wilt thou slay thyself,
And slay thy lady that in thy life lives,
By doing damnèd hate upon thyself?
Why railest thou on thy birth, the heaven, and earth,
Since birth and heaven and earth all three do meet
In thee at once, which thou at once wouldst lose?
Fie, fie, thou shamest thy shape, thy love, thy wit,
Which, like a usurer, abound’st in all
And usest none in that true use indeed
Which should bedeck thy shape, thy love, thy wit.
Thy noble shape is but a form of wax,
Digressing from the valor of a man;
Thy dear love sworn but hollow perjury,
Killing that love which thou hast vowed to cherish;
Thy wit, that ornament to shape and love,
Misshapen in the conduct of them both,
Like powder in a skilless soldier’s flask,
Is set afire by thine own ignorance,
And thou dismembered with thine own defense.
What, rouse thee, man! Thy Juliet is alive,
For whose dear sake thou wast but lately dead:
There art thou happy. Tybalt would kill thee,
But thou slewest Tybalt: there art thou happy.
The law that threatened death becomes thy friend
And turns it to exile: there art thou happy.
A pack of blessings light upon thy back;
Happiness courts thee in her best array;
But, like a misbehaved and sullen wench,
Thou pouts upon thy fortune and thy love.
Take heed, take heed, for such die miserable.
Go, get thee to thy love, as was decreed.
Ascend her chamber. Hence and comfort her.
But look thou stay not till the watch be set,
For then thou canst not pass to Mantua,
Where thou shalt live till we can find a time
To blaze your marriage, reconcile your friends,
Beg pardon of the Prince, and call thee back
With twenty hundred thousand times more joy
Than thou went’st forth in lamentation.—
Go before, nurse. Commend me to thy lady,
And bid her hasten all the house to bed,
Which heavy sorrow makes them apt unto.
Romeo is coming.
NURSE
O Lord, I could have stayed here all the night
To hear good counsel. O, what learning is!—
My lord, I’ll tell my lady you will come.
ROMEO
Do so, and bid my sweet prepare to chide.
NURSE
Here, sir, a ring she bid me give you, sir.
Nurse gives Romeo a ring.
Hie you, make haste, for it grows very late.
She exits.
ROMEO
How well my comfort is revived by this!
FRIAR LAWRENCE
Go hence, good night—and here stands all your
state:
Either be gone before the watch be set
Or by the break of day disguised from hence.
Sojourn in Mantua. I’ll find out your man,
And he shall signify from time to time
Every good hap to you that chances here.
Give me thy hand. ’Tis late. Farewell. Good night.
ROMEO
But that a joy past joy calls out on me,
It were a grief so brief to part with thee.
Farewell.
They exit.


Scene 4
Enter old Capulet, his Wife, and Paris.

CAPULET
Things have fallen out, sir, so unluckily
That we have had no time to move our daughter.
Look you, she loved her kinsman Tybalt dearly,
And so did I. Well, we were born to die.
’Tis very late. She’ll not come down tonight.
I promise you, but for your company,
I would have been abed an hour ago.
PARIS
These times of woe afford no times to woo.—
Madam, good night. Commend me to your
daughter.
LADY CAPULET
I will, and know her mind early tomorrow.
Tonight she’s mewed up to her heaviness.
CAPULET
Sir Paris, I will make a desperate tender
Of my child’s love. I think she will be ruled
In all respects by me. Nay, more, I doubt it not.—
Wife, go you to her ere you go to bed.
Acquaint her here of my son Paris’ love,
And bid her—mark you me?—on Wednesday
next—
But soft, what day is this?
PARIS  Monday, my lord.
CAPULET
Monday, ha ha! Well, Wednesday is too soon.
O’ Thursday let it be.—O’ Thursday, tell her,
She shall be married to this noble earl.—
Will you be ready? Do you like this haste?
We’ll keep no great ado: a friend or two.
For hark you, Tybalt being slain so late,
It may be thought we held him carelessly,
Being our kinsman, if we revel much.
Therefore we’ll have some half a dozen friends,
And there an end. But what say you to Thursday?
PARIS
My lord, I would that Thursday were tomorrow.
CAPULET
Well, get you gone. O’ Thursday be it, then.
To Lady Capulet. Go you to Juliet ere you go to bed.
Prepare her, wife, against this wedding day.—
Farewell, my lord.—Light to my chamber, ho!—
Afore me, it is so very late that we
May call it early by and by.—Good night.
They exit.


Scene 5
Enter Romeo and Juliet aloft.

JULIET
Wilt thou be gone? It is not yet near day.
It was the nightingale, and not the lark,
That pierced the fearful hollow of thine ear.
Nightly she sings on yond pomegranate tree.
Believe me, love, it was the nightingale.
ROMEO
It was the lark, the herald of the morn,
No nightingale. Look, love, what envious streaks
Do lace the severing clouds in yonder east.
Night’s candles are burnt out, and jocund day
Stands tiptoe on the misty mountain-tops.
I must be gone and live, or stay and die.
JULIET
Yond light is not daylight, I know it, I.
It is some meteor that the sun exhaled
To be to thee this night a torchbearer
And light thee on thy way to Mantua.
Therefore stay yet. Thou need’st not to be gone.
ROMEO
Let me be ta’en; let me be put to death.
I am content, so thou wilt have it so.
I’ll say yon gray is not the morning’s eye;
’Tis but the pale reflex of Cynthia’s brow.
Nor that is not the lark whose notes do beat
The vaulty heaven so high above our heads.
I have more care to stay than will to go.
Come death and welcome. Juliet wills it so.
How is ’t, my soul? Let’s talk. It is not day.
JULIET
It is, it is. Hie hence, begone, away!
It is the lark that sings so out of tune,
Straining harsh discords and unpleasing sharps.
Some say the lark makes sweet division.
This doth not so, for she divideth us.
Some say the lark and loathèd toad changed eyes.
O, now I would they had changed voices too,
Since arm from arm that voice doth us affray,
Hunting thee hence with hunt’s-up to the day.
O, now begone. More light and light it grows.
ROMEO
More light and light, more dark and dark our woes.

Enter Nurse.

NURSE  Madam.
JULIET  Nurse?
NURSE
Your lady mother is coming to your chamber.
The day is broke; be wary; look about.She exits.
JULIET
Then, window, let day in, and let life out.
ROMEO
Farewell, farewell. One kiss and I’ll descend.
They kiss, and Romeo descends.
JULIET
Art thou gone so? Love, lord, ay husband, friend!
I must hear from thee every day in the hour,
For in a minute there are many days.
O, by this count I shall be much in years
Ere I again behold my Romeo.
ROMEO  Farewell.
I will omit no opportunity
That may convey my greetings, love, to thee.
JULIET
O, think’st thou we shall ever meet again?
ROMEO
I doubt it not; and all these woes shall serve
For sweet discourses in our times to come.
JULIET
O God, I have an ill-divining soul!
Methinks I see thee, now thou art so low,
As one dead in the bottom of a tomb.
Either my eyesight fails or thou lookest pale.
ROMEO
And trust me, love, in my eye so do you.
Dry sorrow drinks our blood. Adieu, adieu.He exits.
JULIET
O Fortune, Fortune, all men call thee fickle.
If thou art fickle, what dost thou with him
That is renowned for faith? Be fickle, Fortune,
For then I hope thou wilt not keep him long,
But send him back.

Enter Lady Capulet.

LADY CAPULET  Ho, daughter, are you up?
JULIET
Who is ’t that calls? It is my lady mother.
Is she not down so late or up so early?
What unaccustomed cause procures her hither?
Juliet descends.
LADY CAPULET
Why, how now, Juliet?
JULIET  Madam, I am not well.
LADY CAPULET
Evermore weeping for your cousin’s death?
What, wilt thou wash him from his grave with tears?
An if thou couldst, thou couldst not make him live.
Therefore have done. Some grief shows much of
love,
But much of grief shows still some want of wit.
JULIET
Yet let me weep for such a feeling loss.
LADY CAPULET
So shall you feel the loss, but not the friend
Which you weep for.
JULIET  Feeling so the loss,
I cannot choose but ever weep the friend.
LADY CAPULET
Well, girl, thou weep’st not so much for his death
As that the villain lives which slaughtered him.
JULIET
What villain, madam?
LADY CAPULET  That same villain, Romeo.
JULIET, aside
Villain and he be many miles asunder.—
God pardon him. I do with all my heart,
And yet no man like he doth grieve my heart.
LADY CAPULET
That is because the traitor murderer lives.
JULIET
Ay, madam, from the reach of these my hands.
Would none but I might venge my cousin’s death!
LADY CAPULET
We will have vengeance for it, fear thou not.
Then weep no more. I’ll send to one in Mantua,
Where that same banished runagate doth live,
Shall give him such an unaccustomed dram
That he shall soon keep Tybalt company.
And then, I hope, thou wilt be satisfied.
JULIET
Indeed, I never shall be satisfied
With Romeo till I behold him—dead—
Is my poor heart, so for a kinsman vexed.
Madam, if you could find out but a man
To bear a poison, I would temper it,
That Romeo should, upon receipt thereof,
Soon sleep in quiet. O, how my heart abhors
To hear him named and cannot come to him
To wreak the love I bore my cousin
Upon his body that hath slaughtered him.
LADY CAPULET
Find thou the means, and I’ll find such a man.
But now I’ll tell thee joyful tidings, girl.
JULIET
And joy comes well in such a needy time.
What are they, beseech your Ladyship?
LADY CAPULET
Well, well, thou hast a careful father, child,
One who, to put thee from thy heaviness,
Hath sorted out a sudden day of joy
That thou expects not, nor I looked not for.
JULIET
Madam, in happy time! What day is that?
LADY CAPULET
Marry, my child, early next Thursday morn
The gallant, young, and noble gentleman,
The County Paris, at Saint Peter’s Church
Shall happily make thee there a joyful bride.
JULIET
Now, by Saint Peter’s Church, and Peter too,
He shall not make me there a joyful bride!
I wonder at this haste, that I must wed
Ere he that should be husband comes to woo.
I pray you, tell my lord and father, madam,
I will not marry yet, and when I do I swear
It shall be Romeo, whom you know I hate,
Rather than Paris. These are news indeed!
LADY CAPULET
Here comes your father. Tell him so yourself,
And see how he will take it at your hands.

Enter Capulet and Nurse.

CAPULET
When the sun sets, the earth doth drizzle dew,
But for the sunset of my brother’s son
It rains downright.
How now, a conduit, girl? What, still in tears?
Evermore show’ring? In one little body
Thou counterfeits a bark, a sea, a wind.
For still thy eyes, which I may call the sea,
Do ebb and flow with tears; the bark thy body is,
Sailing in this salt flood; the winds thy sighs,
Who, raging with thy tears and they with them,
Without a sudden calm, will overset
Thy tempest-tossèd body.—How now, wife?
Have you delivered to her our decree?
LADY CAPULET
Ay, sir, but she will none, she gives you thanks.
I would the fool were married to her grave.
CAPULET
Soft, take me with you, take me with you, wife.
How, will she none? Doth she not give us thanks?
Is she not proud? Doth she not count her blessed,
Unworthy as she is, that we have wrought
So worthy a gentleman to be her bride?
JULIET
Not proud you have, but thankful that you have.
Proud can I never be of what I hate,
But thankful even for hate that is meant love.
CAPULET
How, how, how, how? Chopped logic? What is this?
“Proud,” and “I thank you,” and “I thank you not,”
And yet “not proud”? Mistress minion you,
Thank me no thankings, nor proud me no prouds,
But fettle your fine joints ’gainst Thursday next
To go with Paris to Saint Peter’s Church,
Or I will drag thee on a hurdle thither.
Out, you green-sickness carrion! Out, you baggage!
You tallow face!
LADY CAPULET  Fie, fie, what, are you mad?
JULIET, kneeling
Good father, I beseech you on my knees,
Hear me with patience but to speak a word.
CAPULET
Hang thee, young baggage, disobedient wretch!
I tell thee what: get thee to church o’ Thursday,
Or never after look me in the face.
Speak not; reply not; do not answer me.
My fingers itch.—Wife, we scarce thought us
blessed
That God had lent us but this only child,
But now I see this one is one too much,
And that we have a curse in having her.
Out on her, hilding.
NURSE  God in heaven bless her!
You are to blame, my lord, to rate her so.
CAPULET
And why, my Lady Wisdom? Hold your tongue.
Good Prudence, smatter with your gossips, go.
NURSE
I speak no treason.
CAPULET  O, God ’i’ g’ eden!
NURSE
May not one speak?
CAPULET  Peace, you mumbling fool!
Utter your gravity o’er a gossip’s bowl,
For here we need it not.
LADY CAPULET  You are too hot.
CAPULET  God’s bread, it makes me mad.
Day, night, hour, tide, time, work, play,
Alone, in company, still my care hath been
To have her matched. And having now provided
A gentleman of noble parentage,
Of fair demesnes, youthful, and nobly ligned,
Stuffed, as they say, with honorable parts,
Proportioned as one’s thought would wish a man—
And then to have a wretched puling fool,
A whining mammet, in her fortune’s tender,
To answer “I’ll not wed. I cannot love.
I am too young. I pray you, pardon me.”
But, an you will not wed, I’ll pardon you!
Graze where you will, you shall not house with me.
Look to ’t; think on ’t. I do not use to jest.
Thursday is near. Lay hand on heart; advise.
An you be mine, I’ll give you to my friend.
An you be not, hang, beg, starve, die in the streets,
For, by my soul, I’ll ne’er acknowledge thee,
Nor what is mine shall never do thee good.
Trust to ’t; bethink you. I’ll not be forsworn.
He exits.
JULIET
Is there no pity sitting in the clouds
That sees into the bottom of my grief?—
O sweet my mother, cast me not away.
Delay this marriage for a month, a week,
Or, if you do not, make the bridal bed
In that dim monument where Tybalt lies.
LADY CAPULET
Talk not to me, for I’ll not speak a word.
Do as thou wilt, for I have done with thee.
She exits.
JULIET, rising
O God! O nurse, how shall this be prevented?
My husband is on Earth, my faith in heaven.
How shall that faith return again to Earth
Unless that husband send it me from heaven
By leaving Earth? Comfort me; counsel me.—
Alack, alack, that heaven should practice stratagems
Upon so soft a subject as myself.—
What sayst thou? Hast thou not a word of joy?
Some comfort, nurse.
NURSE  Faith, here it is.
Romeo is banished, and all the world to nothing
That he dares ne’er come back to challenge you,
Or, if he do, it needs must be by stealth.
Then, since the case so stands as now it doth,
I think it best you married with the County.
O, he’s a lovely gentleman!
Romeo’s a dishclout to him. An eagle, madam,
Hath not so green, so quick, so fair an eye
As Paris hath. Beshrew my very heart,
I think you are happy in this second match,
For it excels your first, or, if it did not,
Your first is dead, or ’twere as good he were
As living here and you no use of him.
JULIET
Speak’st thou from thy heart?
NURSE
And from my soul too, else beshrew them both.
JULIET  Amen.
NURSE  What?
JULIET
Well, thou hast comforted me marvelous much.
Go in and tell my lady I am gone,
Having displeased my father, to Lawrence’ cell
To make confession and to be absolved.
NURSE
Marry, I will; and this is wisely done.She exits.
JULIET
Ancient damnation, O most wicked fiend!
Is it more sin to wish me thus forsworn
Or to dispraise my lord with that same tongue
Which she hath praised him with above compare
So many thousand times? Go, counselor.
Thou and my bosom henceforth shall be twain.
I’ll to the Friar to know his remedy.
If all else fail, myself have power to die.
She exits.



ACT 4
Scene 1
Enter Friar Lawrence and County Paris.

FRIAR LAWRENCE
On Thursday, sir? The time is very short.
PARIS
My father Capulet will have it so,
And I am nothing slow to slack his haste.
FRIAR LAWRENCE
You say you do not know the lady’s mind?
Uneven is the course. I like it not.
PARIS
Immoderately she weeps for Tybalt’s death,
And therefore have I little talk of love,
For Venus smiles not in a house of tears.
Now, sir, her father counts it dangerous
That she do give her sorrow so much sway,
And in his wisdom hastes our marriage
To stop the inundation of her tears,
Which, too much minded by herself alone,
May be put from her by society.
Now do you know the reason of this haste.
FRIAR LAWRENCE, aside
I would I knew not why it should be slowed.—
Look, sir, here comes the lady toward my cell.

Enter Juliet.

PARIS
Happily met, my lady and my wife.
JULIET
That may be, sir, when I may be a wife.
PARIS
That “may be” must be, love, on Thursday next.
JULIET
What must be shall be.
FRIAR LAWRENCE  That’s a certain text.
PARIS
Come you to make confession to this father?
JULIET
To answer that, I should confess to you.
PARIS
Do not deny to him that you love me.
JULIET
I will confess to you that I love him.
PARIS
So will you, I am sure, that you love me.
JULIET
If I do so, it will be of more price
Being spoke behind your back than to your face.
PARIS
Poor soul, thy face is much abused with tears.
JULIET
The tears have got small victory by that,
For it was bad enough before their spite.
PARIS
Thou wrong’st it more than tears with that report.
JULIET
That is no slander, sir, which is a truth,
And what I spake, I spake it to my face.
PARIS
Thy face is mine, and thou hast slandered it.
JULIET
It may be so, for it is not mine own.—
Are you at leisure, holy father, now,
Or shall I come to you at evening Mass?
FRIAR LAWRENCE
My leisure serves me, pensive daughter, now.—
My lord, we must entreat the time alone.
PARIS
God shield I should disturb devotion!—
Juliet, on Thursday early will I rouse you.
Till then, adieu, and keep this holy kiss.He exits.
JULIET
O, shut the door, and when thou hast done so,
Come weep with me, past hope, past care, past help.
FRIAR LAWRENCE
O Juliet, I already know thy grief.
It strains me past the compass of my wits.
I hear thou must, and nothing may prorogue it,
On Thursday next be married to this County.
JULIET
Tell me not, friar, that thou hearest of this,
Unless thou tell me how I may prevent it.
If in thy wisdom thou canst give no help,
Do thou but call my resolution wise,
And with this knife I’ll help it presently.
She shows him her knife.
God joined my heart and Romeo’s, thou our hands;
And ere this hand, by thee to Romeo’s sealed,
Shall be the label to another deed,
Or my true heart with treacherous revolt
Turn to another, this shall slay them both.
Therefore out of thy long-experienced time
Give me some present counsel, or, behold,
’Twixt my extremes and me this bloody knife
Shall play the umpire, arbitrating that
Which the commission of thy years and art
Could to no issue of true honor bring.
Be not so long to speak. I long to die
If what thou speak’st speak not of remedy.
FRIAR LAWRENCE
Hold, daughter, I do spy a kind of hope,
Which craves as desperate an execution
As that is desperate which we would prevent.
If, rather than to marry County Paris,
Thou hast the strength of will to slay thyself,
Then is it likely thou wilt undertake
A thing like death to chide away this shame,
That cop’st with death himself to ’scape from it;
And if thou darest, I’ll give thee remedy.
JULIET
O, bid me leap, rather than marry Paris,
From off the battlements of any tower,
Or walk in thievish ways, or bid me lurk
Where serpents are. Chain me with roaring bears,
Or hide me nightly in a charnel house,
O’ercovered quite with dead men’s rattling bones,
With reeky shanks and yellow chapless skulls.
Or bid me go into a new-made grave
And hide me with a dead man in his shroud
(Things that to hear them told have made me
tremble),
And I will do it without fear or doubt,
To live an unstained wife to my sweet love.
FRIAR LAWRENCE
Hold, then. Go home; be merry; give consent
To marry Paris. Wednesday is tomorrow.
Tomorrow night look that thou lie alone;
Let not the Nurse lie with thee in thy chamber.
Holding out a vial.
Take thou this vial, being then in bed,
And this distilling liquor drink thou off;
When presently through all thy veins shall run
A cold and drowsy humor; for no pulse
Shall keep his native progress, but surcease.
No warmth, no breath shall testify thou livest.
The roses in thy lips and cheeks shall fade
To paly ashes, thy eyes’ windows fall
Like death when he shuts up the day of life.
Each part, deprived of supple government,
Shall, stiff and stark and cold, appear like death,
And in this borrowed likeness of shrunk death
Thou shalt continue two and forty hours
And then awake as from a pleasant sleep.
Now, when the bridegroom in the morning comes
To rouse thee from thy bed, there art thou dead.
Then, as the manner of our country is,
In thy best robes uncovered on the bier
Thou shalt be borne to that same ancient vault
Where all the kindred of the Capulets lie.
In the meantime, against thou shalt awake,
Shall Romeo by my letters know our drift,
And hither shall he come, and he and I
Will watch thy waking, and that very night
Shall Romeo bear thee hence to Mantua.
And this shall free thee from this present shame,
If no inconstant toy nor womanish fear
Abate thy valor in the acting it.
JULIET
Give me, give me! O, tell not me of fear!
FRIAR LAWRENCE, giving Juliet the vial
Hold, get you gone. Be strong and prosperous
In this resolve. I’ll send a friar with speed
To Mantua with my letters to thy lord.
JULIET
Love give me strength, and strength shall help
afford.
Farewell, dear father.
They exit in different directions.



Scene 2
Enter Father Capulet, Mother, Nurse, and Servingmen,
two or three.

CAPULET
So many guests invite as here are writ.
One or two of the Servingmen exit
with Capulet’s list.
Sirrah, go hire me twenty cunning cooks.
SERVINGMAN  You shall have none ill, sir, for I’ll try if
they can lick their fingers.
CAPULET  How canst thou try them so?
SERVINGMAN  Marry, sir, ’tis an ill cook that cannot lick
his own fingers. Therefore he that cannot lick his
fingers goes not with me.
CAPULET  Go, begone.Servingman exits.
We shall be much unfurnished for this time.—
What, is my daughter gone to Friar Lawrence?
NURSE  Ay, forsooth.
CAPULET
Well, he may chance to do some good on her.
A peevish self-willed harlotry it is.

Enter Juliet.

NURSE
See where she comes from shrift with merry look.
CAPULET
How now, my headstrong, where have you been
gadding?
JULIET
Where I have learned me to repent the sin
Of disobedient opposition
To you and your behests, and am enjoined
By holy Lawrence to fall prostrate hereKneeling.
To beg your pardon. Pardon, I beseech you.
Henceforward I am ever ruled by you.
CAPULET
Send for the County. Go tell him of this.
I’ll have this knot knit up tomorrow morning.
JULIET
I met the youthful lord at Lawrence’ cell
And gave him what becomèd love I might,
Not stepping o’er the bounds of modesty.
CAPULET
Why, I am glad on ’t. This is well. Stand up.
Juliet rises.
This is as ’t should be.—Let me see the County.
Ay, marry, go, I say, and fetch him hither.—
Now, afore God, this reverend holy friar,
All our whole city is much bound to him.
JULIET
Nurse, will you go with me into my closet
To help me sort such needful ornaments
As you think fit to furnish me tomorrow?
LADY CAPULET
No, not till Thursday. There is time enough.
CAPULET
Go, nurse. Go with her. We’ll to church tomorrow.
Juliet and the Nurse exit.
LADY CAPULET
We shall be short in our provision.
’Tis now near night.
CAPULET  Tush, I will stir about,
And all things shall be well, I warrant thee, wife.
Go thou to Juliet. Help to deck up her.
I’ll not to bed tonight. Let me alone.
I’ll play the housewife for this once.—What ho!—
They are all forth. Well, I will walk myself
To County Paris, to prepare up him
Against tomorrow. My heart is wondrous light
Since this same wayward girl is so reclaimed.
They exit.



Scene 3
Enter Juliet and Nurse.

JULIET
Ay, those attires are best. But, gentle nurse,
I pray thee leave me to myself tonight,
For I have need of many orisons
To move the heavens to smile upon my state,
Which, well thou knowest, is cross and full of sin.

Enter Lady Capulet.

LADY CAPULET
What, are you busy, ho? Need you my help?
JULIET
No, madam, we have culled such necessaries
As are behooveful for our state tomorrow.
So please you, let me now be left alone,
And let the Nurse this night sit up with you,
For I am sure you have your hands full all
In this so sudden business.
LADY CAPULET  Good night.
Get thee to bed and rest, for thou hast need.
Lady Capulet and the Nurse exit.
JULIET
Farewell.—God knows when we shall meet again.
I have a faint cold fear thrills through my veins
That almost freezes up the heat of life.
I’ll call them back again to comfort me.—
Nurse!—What should she do here?
My dismal scene I needs must act alone.
Come, vial.She takes out the vial.
What if this mixture do not work at all?
Shall I be married then tomorrow morning?
She takes out her knife
and puts it down beside her.
No, no, this shall forbid it. Lie thou there.
What if it be a poison which the Friar
Subtly hath ministered to have me dead,
Lest in this marriage he should be dishonored
Because he married me before to Romeo?
I fear it is. And yet methinks it should not,
For he hath still been tried a holy man.
How if, when I am laid into the tomb,
I wake before the time that Romeo
Come to redeem me? There’s a fearful point.
Shall I not then be stifled in the vault,
To whose foul mouth no healthsome air breathes in,
And there die strangled ere my Romeo comes?
Or, if I live, is it not very like
The horrible conceit of death and night,
Together with the terror of the place—
As in a vault, an ancient receptacle
Where for this many hundred years the bones
Of all my buried ancestors are packed;
Where bloody Tybalt, yet but green in earth,
Lies fest’ring in his shroud; where, as they say,
At some hours in the night spirits resort—
Alack, alack, is it not like that I,
So early waking, what with loathsome smells,
And shrieks like mandrakes torn out of the earth,
That living mortals, hearing them, run mad—
O, if I wake, shall I not be distraught,
Environèd with all these hideous fears,
And madly play with my forefathers’ joints,
And pluck the mangled Tybalt from his shroud,
And, in this rage, with some great kinsman’s bone,
As with a club, dash out my desp’rate brains?
O look, methinks I see my cousin’s ghost
Seeking out Romeo that did spit his body
Upon a rapier’s point! Stay, Tybalt, stay!
Romeo, Romeo, Romeo! Here’s drink. I drink to
thee.She drinks and falls upon her bed
within the curtains.



Scene 4
Enter Lady Capulet and Nurse.

LADY CAPULET
Hold, take these keys, and fetch more spices, nurse.
NURSE
They call for dates and quinces in the pastry.

Enter old Capulet.

CAPULET
Come, stir, stir, stir! The second cock hath crowed.
The curfew bell hath rung. ’Tis three o’clock.—
Look to the baked meats, good Angelica.
Spare not for cost.
NURSE  Go, you cot-quean, go,
Get you to bed. Faith, you’ll be sick tomorrow
For this night’s watching.
CAPULET
No, not a whit. What, I have watched ere now
All night for lesser cause, and ne’er been sick.
LADY CAPULET
Ay, you have been a mouse-hunt in your time,
But I will watch you from such watching now.
Lady Capulet and Nurse exit.
CAPULET
A jealous hood, a jealous hood!

Enter three or four Servingmen with spits and logs
and baskets.

Now fellow,
What is there?
FIRST SERVINGMAN
Things for the cook, sir, but I know not what.
CAPULET
Make haste, make haste.First Servingman exits.
Sirrah, fetch drier logs.
Call Peter. He will show thee where they are.
SECOND SERVINGMAN
I have a head, sir, that will find out logs
And never trouble Peter for the matter.
CAPULET
Mass, and well said. A merry whoreson, ha!
Thou shalt be loggerhead.
Second Servingman exits.
Good faith, ’tis day.
The County will be here with music straight,
Play music.
For so he said he would. I hear him near.—
Nurse!—Wife! What ho!—What, nurse, I say!

Enter Nurse.

Go waken Juliet. Go and trim her up.
I’ll go and chat with Paris. Hie, make haste,
Make haste. The bridegroom he is come already.
Make haste, I say.
He exits.


Scene 5

NURSE, approaching the bed
Mistress! What, mistress! Juliet!—Fast, I warrant
her, she—
Why, lamb, why, lady! Fie, you slugabed!
Why, love, I say! Madam! Sweetheart! Why, bride!—
What, not a word?—You take your pennyworths
now.
Sleep for a week, for the next night, I warrant,
The County Paris hath set up his rest
That you shall rest but little.—God forgive me,
Marry, and amen! How sound is she asleep!
I needs must wake her.—Madam, madam, madam!
Ay, let the County take you in your bed,
He’ll fright you up, i’ faith.—Will it not be?
She opens the bed’s curtains.
What, dressed, and in your clothes, and down
again?
I must needs wake you. Lady, lady, lady!—
Alas, alas! Help, help! My lady’s dead.—
O, weraday, that ever I was born!—
Some aqua vitae, ho!—My lord! My lady!

Enter Lady Capulet.

LADY CAPULET
What noise is here?
NURSE  O lamentable day!
LADY CAPULET
What is the matter?
NURSE  Look, look!—O heavy day!
LADY CAPULET
O me! O me! My child, my only life,
Revive, look up, or I will die with thee.
Help, help! Call help.

Enter Capulet.

CAPULET
For shame, bring Juliet forth. Her lord is come.
NURSE
She’s dead, deceased. She’s dead, alack the day!
LADY CAPULET
Alack the day, she’s dead, she’s dead, she’s dead.
CAPULET
Ha, let me see her! Out, alas, she’s cold.
Her blood is settled, and her joints are stiff.
Life and these lips have long been separated.
Death lies on her like an untimely frost
Upon the sweetest flower of all the field.
NURSE
O lamentable day!
LADY CAPULET  O woeful time!
CAPULET
Death, that hath ta’en her hence to make me wail,
Ties up my tongue and will not let me speak.

Enter Friar Lawrence and the County Paris, with
Musicians.

FRIAR LAWRENCE
Come, is the bride ready to go to church?
CAPULET
Ready to go, but never to return.—
O son, the night before thy wedding day
Hath Death lain with thy wife. There she lies,
Flower as she was, deflowerèd by him.
Death is my son-in-law; Death is my heir.
My daughter he hath wedded. I will die
And leave him all. Life, living, all is Death’s.
PARIS
Have I thought long to see this morning’s face,
And doth it give me such a sight as this?
LADY CAPULET
Accursed, unhappy, wretched, hateful day!
Most miserable hour that e’er time saw
In lasting labor of his pilgrimage!
But one, poor one, one poor and loving child,
But one thing to rejoice and solace in,
And cruel death hath catched it from my sight!
NURSE
O woe, O woeful, woeful, woeful day!
Most lamentable day, most woeful day
That ever, ever I did yet behold!
O day, O day, O day, O hateful day!
Never was seen so black a day as this!
O woeful day, O woeful day!
PARIS
Beguiled, divorcèd, wrongèd, spited, slain!
Most detestable death, by thee beguiled,
By cruel, cruel thee quite overthrown!
O love! O life! Not life, but love in death!
CAPULET
Despised, distressèd, hated, martyred, killed!
Uncomfortable time, why cam’st thou now
To murder, murder our solemnity?
O child! O child! My soul and not my child!
Dead art thou! Alack, my child is dead,
And with my child my joys are burièd.
FRIAR LAWRENCE
Peace, ho, for shame! Confusion’s cure lives not
In these confusions. Heaven and yourself
Had part in this fair maid. Now heaven hath all,
And all the better is it for the maid.
Your part in her you could not keep from death,
But heaven keeps his part in eternal life.
The most you sought was her promotion,
For ’twas your heaven she should be advanced;
And weep you now, seeing she is advanced
Above the clouds, as high as heaven itself?
O, in this love you love your child so ill
That you run mad, seeing that she is well.
She’s not well married that lives married long,
But she’s best married that dies married young.
Dry up your tears, and stick your rosemary
On this fair corse, and, as the custom is,
And in her best array, bear her to church,
For though fond nature bids us all lament,
Yet nature’s tears are reason’s merriment.
CAPULET
All things that we ordainèd festival
Turn from their office to black funeral:
Our instruments to melancholy bells,
Our wedding cheer to a sad burial feast,
Our solemn hymns to sullen dirges change,
Our bridal flowers serve for a buried corse,
And all things change them to the contrary.
FRIAR LAWRENCE
Sir, go you in, and, madam, go with him,
And go, Sir Paris. Everyone prepare
To follow this fair corse unto her grave.
The heavens do lour upon you for some ill.
Move them no more by crossing their high will.
All but the Nurse and the Musicians exit.
FIRST MUSICIAN
Faith, we may put up our pipes and be gone.
NURSE
Honest good fellows, ah, put up, put up,
For, well you know, this is a pitiful case.
FIRST MUSICIAN
Ay, by my troth, the case may be amended.
Nurse exits.

Enter Peter.

PETER  Musicians, O musicians, “Heart’s ease,”
“Heart’s ease.” O, an you will have me live, play
“Heart’s ease.”
FIRST MUSICIAN  Why “Heart’s ease?”
PETER  O musicians, because my heart itself plays “My
heart is full.” O, play me some merry dump to
comfort me.
FIRST MUSICIAN  Not a dump, we. ’Tis no time to play
now.
PETER  You will not then?
FIRST MUSICIAN  No.
PETER  I will then give it you soundly.
FIRST MUSICIAN  What will you give us?
PETER  No money, on my faith, but the gleek. I will give
you the minstrel.
FIRST MUSICIAN  Then will I give you the
serving-creature.
PETER  Then will I lay the serving-creature’s dagger on
your pate. I will carry no crochets. I’ll re you, I’ll fa
you. Do you note me?
FIRST MUSICIAN  An you re us and fa us, you note us.
SECOND MUSICIAN  Pray you, put up your dagger and
put out your wit.
PETER  Then have at you with my wit. I will dry-beat
you with an iron wit, and put up my iron dagger.
Answer me like men.
  When griping griefs the heart doth wound
 And doleful dumps the mind oppress,
 Then music with her silver sound—
Why “silver sound”? Why “music with her silver
sound”? What say you, Simon Catling?
FIRST MUSICIAN  Marry, sir, because silver hath a
sweet sound.
PETER  Prates.—What say you, Hugh Rebeck?
SECOND MUSICIAN  I say “silver sound” because musicians
sound for silver.
PETER  Prates too.—What say you, James Soundpost?
THIRD MUSICIAN  Faith, I know not what to say.
PETER  O, I cry you mercy. You are the singer. I will say
for you. It is “music with her silver sound” because
musicians have no gold for sounding:
  Then music with her silver sound
 With speedy help doth lend redress.
He exits.
FIRST MUSICIAN  What a pestilent knave is this same!
SECOND MUSICIAN  Hang him, Jack. Come, we’ll in
here, tarry for the mourners, and stay dinner.
They exit.



ACT 5
Scene 1
Enter Romeo.

ROMEO
If I may trust the flattering truth of sleep,
My dreams presage some joyful news at hand.
My bosom’s lord sits lightly in his throne,
And all this day an unaccustomed spirit
Lifts me above the ground with cheerful thoughts.
I dreamt my lady came and found me dead
(Strange dream that gives a dead man leave to
think!)
And breathed such life with kisses in my lips
That I revived and was an emperor.
Ah me, how sweet is love itself possessed
When but love’s shadows are so rich in joy!

Enter Romeo’s man Balthasar, in riding boots.

News from Verona!—How now, Balthasar?
Dost thou not bring me letters from the Friar?
How doth my lady? Is my father well?
How doth my Juliet? That I ask again,
For nothing can be ill if she be well.
BALTHASAR
Then she is well and nothing can be ill.
Her body sleeps in Capels’ monument,
And her immortal part with angels lives.
I saw her laid low in her kindred’s vault
And presently took post to tell it you.
O, pardon me for bringing these ill news,
Since you did leave it for my office, sir.
ROMEO
Is it e’en so?—Then I deny you, stars!—
Thou knowest my lodging. Get me ink and paper,
And hire post-horses. I will hence tonight.
BALTHASAR
I do beseech you, sir, have patience.
Your looks are pale and wild and do import
Some misadventure.
ROMEO  Tush, thou art deceived.
Leave me, and do the thing I bid thee do.
Hast thou no letters to me from the Friar?
BALTHASAR
No, my good lord.
ROMEO  No matter. Get thee gone,
And hire those horses. I’ll be with thee straight.
Balthasar exits.
Well, Juliet, I will lie with thee tonight.
Let’s see for means. O mischief, thou art swift
To enter in the thoughts of desperate men.
I do remember an apothecary
(And hereabouts he dwells) which late I noted
In tattered weeds, with overwhelming brows,
Culling of simples. Meager were his looks.
Sharp misery had worn him to the bones.
And in his needy shop a tortoise hung,
An alligator stuffed, and other skins
Of ill-shaped fishes; and about his shelves,
A beggarly account of empty boxes,
Green earthen pots, bladders, and musty seeds,
Remnants of packthread, and old cakes of roses
Were thinly scattered to make up a show.
Noting this penury, to myself I said
“An if a man did need a poison now,
Whose sale is present death in Mantua,
Here lives a caitiff wretch would sell it him.”
O, this same thought did but forerun my need,
And this same needy man must sell it me.
As I remember, this should be the house.
Being holiday, the beggar’s shop is shut.—
What ho, Apothecary!

Enter Apothecary.

APOTHECARY  Who calls so loud?
ROMEO
Come hither, man. I see that thou art poor.
He offers money.
Hold, there is forty ducats. Let me have
A dram of poison, such soon-speeding gear
As will disperse itself through all the veins,
That the life-weary taker may fall dead,
And that the trunk may be discharged of breath
As violently as hasty powder fired
Doth hurry from the fatal cannon’s womb.
APOTHECARY
Such mortal drugs I have, but Mantua’s law
Is death to any he that utters them.
ROMEO
Art thou so bare and full of wretchedness,
And fearest to die? Famine is in thy cheeks,
Need and oppression starveth in thy eyes,
Contempt and beggary hangs upon thy back.
The world is not thy friend, nor the world’s law.
The world affords no law to make thee rich.
Then be not poor, but break it, and take this.
APOTHECARY
My poverty, but not my will, consents.
ROMEO
I pay thy poverty and not thy will.
APOTHECARY, giving him the poison
Put this in any liquid thing you will
And drink it off, and if you had the strength
Of twenty men, it would dispatch you straight.
ROMEO, handing him the money
There is thy gold, worse poison to men’s souls,
Doing more murder in this loathsome world
Than these poor compounds that thou mayst not
sell.
I sell thee poison; thou hast sold me none.
Farewell, buy food, and get thyself in flesh.
Apothecary exits.
Come, cordial and not poison, go with me
To Juliet’s grave, for there must I use thee.
He exits.


Scene 2
Enter Friar John.

FRIAR JOHN
Holy Franciscan friar, brother, ho!

Enter Friar Lawrence.

FRIAR LAWRENCE
This same should be the voice of Friar John.—
Welcome from Mantua. What says Romeo?
Or, if his mind be writ, give me his letter.
FRIAR JOHN
Going to find a barefoot brother out,
One of our order, to associate me,
Here in this city visiting the sick,
And finding him, the searchers of the town,
Suspecting that we both were in a house
Where the infectious pestilence did reign,
Sealed up the doors and would not let us forth,
So that my speed to Mantua there was stayed.
FRIAR LAWRENCE
Who bare my letter, then, to Romeo?
FRIAR JOHN
I could not send it—here it is again—
Returning the letter.
Nor get a messenger to bring it thee,
So fearful were they of infection.
FRIAR LAWRENCE
Unhappy fortune! By my brotherhood,
The letter was not nice but full of charge,
Of dear import, and the neglecting it
May do much danger. Friar John, go hence.
Get me an iron crow and bring it straight
Unto my cell.
FRIAR JOHN
Brother, I’ll go and bring it thee.He exits.
FRIAR LAWRENCE
Now must I to the monument alone.
Within this three hours will fair Juliet wake.
She will beshrew me much that Romeo
Hath had no notice of these accidents.
But I will write again to Mantua,
And keep her at my cell till Romeo come.
Poor living corse, closed in a dead man’s tomb!
He exits.


Scene 3
Enter Paris and his Page.

PARIS
Give me thy torch, boy. Hence and stand aloof.
Yet put it out, for I would not be seen.
Under yond yew trees lay thee all along,
Holding thy ear close to the hollow ground.
So shall no foot upon the churchyard tread
(Being loose, unfirm, with digging up of graves)
But thou shalt hear it. Whistle then to me
As signal that thou hearest something approach.
Give me those flowers. Do as I bid thee. Go.
PAGE, aside
I am almost afraid to stand alone
Here in the churchyard. Yet I will adventure.
He moves away from Paris.
PARIS, scattering flowers
Sweet flower, with flowers thy bridal bed I strew
(O woe, thy canopy is dust and stones!)
Which with sweet water nightly I will dew,
Or, wanting that, with tears distilled by moans.
The obsequies that I for thee will keep
Nightly shall be to strew thy grave and weep.
Page whistles.
The boy gives warning something doth approach.
What cursèd foot wanders this way tonight,
To cross my obsequies and true love’s rite?
What, with a torch? Muffle me, night, awhile.
He steps aside.

Enter Romeo and Balthasar.

ROMEO
Give me that mattock and the wrenching iron.
Hold, take this letter. Early in the morning
See thou deliver it to my lord and father.
Give me the light. Upon thy life I charge thee,
Whate’er thou hearest or seest, stand all aloof
And do not interrupt me in my course.
Why I descend into this bed of death
Is partly to behold my lady’s face,
But chiefly to take thence from her dead finger
A precious ring, a ring that I must use
In dear employment. Therefore hence, begone.
But, if thou, jealous, dost return to pry
In what I farther shall intend to do,
By heaven, I will tear thee joint by joint
And strew this hungry churchyard with thy limbs.
The time and my intents are savage-wild,
More fierce and more inexorable far
Than empty tigers or the roaring sea.
BALTHASAR
I will be gone, sir, and not trouble you.
ROMEO
So shalt thou show me friendship. Take thou that.
Giving money.
Live and be prosperous, and farewell, good fellow.
BALTHASAR, aside
For all this same, I’ll hide me hereabout.
His looks I fear, and his intents I doubt.
He steps aside.
ROMEO, beginning to force open the tomb
Thou detestable maw, thou womb of death,
Gorged with the dearest morsel of the earth,
Thus I enforce thy rotten jaws to open,
And in despite I’ll cram thee with more food.
PARIS
This is that banished haughty Montague
That murdered my love’s cousin, with which grief
It is supposèd the fair creature died,
And here is come to do some villainous shame
To the dead bodies. I will apprehend him.
Stepping forward.
Stop thy unhallowed toil, vile Montague.
Can vengeance be pursued further than death?
Condemnèd villain, I do apprehend thee.
Obey and go with me, for thou must die.
ROMEO
I must indeed, and therefore came I hither.
Good gentle youth, tempt not a desp’rate man.
Fly hence and leave me. Think upon these gone.
Let them affright thee. I beseech thee, youth,
Put not another sin upon my head
By urging me to fury. O, begone!
By heaven, I love thee better than myself,
For I come hither armed against myself.
Stay not, begone, live, and hereafter say
A madman’s mercy bid thee run away.
PARIS
I do defy thy commination
And apprehend thee for a felon here.
ROMEO
Wilt thou provoke me? Then have at thee, boy!
They draw and fight.
PAGE
O Lord, they fight! I will go call the watch.
He exits.
PARIS
O, I am slain! If thou be merciful,
Open the tomb; lay me with Juliet.He dies.
ROMEO
In faith, I will.—Let me peruse this face.
Mercutio’s kinsman, noble County Paris!
What said my man when my betossèd soul
Did not attend him as we rode? I think
He told me Paris should have married Juliet.
Said he not so? Or did I dream it so?
Or am I mad, hearing him talk of Juliet,
To think it was so?—O, give me thy hand,
One writ with me in sour misfortune’s book!
I’ll bury thee in a triumphant grave.—
He opens the tomb.
A grave? O, no. A lantern, slaughtered youth,
For here lies Juliet, and her beauty makes
This vault a feasting presence full of light.—
Death, lie thou there, by a dead man interred.
Laying Paris in the tomb.
How oft when men are at the point of death
Have they been merry, which their keepers call
A light’ning before death! O, how may I
Call this a light’ning?—O my love, my wife,
Death, that hath sucked the honey of thy breath,
Hath had no power yet upon thy beauty.
Thou art not conquered. Beauty’s ensign yet
Is crimson in thy lips and in thy cheeks,
And death’s pale flag is not advancèd there.—
Tybalt, liest thou there in thy bloody sheet?
O, what more favor can I do to thee
Than with that hand that cut thy youth in twain
To sunder his that was thine enemy?
Forgive me, cousin.—Ah, dear Juliet,
Why art thou yet so fair? Shall I believe
That unsubstantial death is amorous,
And that the lean abhorrèd monster keeps
Thee here in dark to be his paramour?
For fear of that I still will stay with thee
And never from this palace of dim night
Depart again. Here, here will I remain
With worms that are thy chambermaids. O, here
Will I set up my everlasting rest
And shake the yoke of inauspicious stars
From this world-wearied flesh! Eyes, look your last.
Arms, take your last embrace. And, lips, O, you
The doors of breath, seal with a righteous kiss
A dateless bargain to engrossing death.
Kissing Juliet.
Come, bitter conduct, come, unsavory guide!
Thou desperate pilot, now at once run on
The dashing rocks thy seasick weary bark!
Here’s to my love. Drinking. O true apothecary,
Thy drugs are quick. Thus with a kiss I die.
He dies.

Enter Friar Lawrence with lantern, crow, and spade.
FRIAR LAWRENCE
Saint Francis be my speed! How oft tonight
Have my old feet stumbled at graves!—Who’s there?
BALTHASAR
Here’s one, a friend, and one that knows you well.
FRIAR LAWRENCE
Bliss be upon you. Tell me, good my friend,
What torch is yond that vainly lends his light
To grubs and eyeless skulls? As I discern,
It burneth in the Capels’ monument.
BALTHASAR
It doth so, holy sir, and there’s my master,
One that you love.
FRIAR LAWRENCE  Who is it?
BALTHASAR  Romeo.
FRIAR LAWRENCE
How long hath he been there?
BALTHASAR  Full half an hour.
FRIAR LAWRENCE
Go with me to the vault.
BALTHASAR  I dare not, sir.
My master knows not but I am gone hence,
And fearfully did menace me with death
If I did stay to look on his intents.
FRIAR LAWRENCE
Stay, then. I’ll go alone. Fear comes upon me.
O, much I fear some ill unthrifty thing.
BALTHASAR
As I did sleep under this yew tree here,
I dreamt my master and another fought,
And that my master slew him.
FRIAR LAWRENCE, moving toward the tomb
Romeo!—
Alack, alack, what blood is this which stains
The stony entrance of this sepulcher?
What mean these masterless and gory swords
To lie discolored by this place of peace?
Romeo! O, pale! Who else? What, Paris too?
And steeped in blood? Ah, what an unkind hour
Is guilty of this lamentable chance!
The lady stirs.
JULIET
O comfortable friar, where is my lord?
I do remember well where I should be,
And there I am. Where is my Romeo?
FRIAR LAWRENCE
I hear some noise.—Lady, come from that nest
Of death, contagion, and unnatural sleep.
A greater power than we can contradict
Hath thwarted our intents. Come, come away.
Thy husband in thy bosom there lies dead,
And Paris, too. Come, I’ll dispose of thee
Among a sisterhood of holy nuns.
Stay not to question, for the watch is coming.
Come, go, good Juliet. I dare no longer stay.
JULIET
Go, get thee hence, for I will not away.
He exits.
What’s here? A cup closed in my true love’s hand?
Poison, I see, hath been his timeless end.—
O churl, drunk all, and left no friendly drop
To help me after! I will kiss thy lips.
Haply some poison yet doth hang on them,
To make me die with a restorative.She kisses him.
Thy lips are warm!

Enter Paris’s Page and Watch.

FIRST WATCH  Lead, boy. Which way?
JULIET
Yea, noise? Then I’ll be brief. O, happy dagger,
This is thy sheath. There rust, and let me die.
She takes Romeo’s dagger, stabs herself, and dies.
PAGE
This is the place, there where the torch doth burn.
FIRST WATCH
The ground is bloody.—Search about the
churchyard.
Go, some of you; whoe’er you find, attach.
Some watchmen exit.
Pitiful sight! Here lies the County slain,
And Juliet bleeding, warm, and newly dead,
Who here hath lain this two days burièd.—
Go, tell the Prince. Run to the Capulets.
Raise up the Montagues. Some others search.
Others exit.
We see the ground whereon these woes do lie,
But the true ground of all these piteous woes
We cannot without circumstance descry.

Enter Watchmen with Romeo’s man Balthasar.

SECOND WATCH
Here’s Romeo’s man. We found him in the
churchyard.
FIRST WATCH
Hold him in safety till the Prince come hither.

Enter Friar Lawrence and another Watchman.

THIRD WATCH
Here is a friar that trembles, sighs, and weeps.
We took this mattock and this spade from him
As he was coming from this churchyard’s side.
FIRST WATCH
A great suspicion. Stay the Friar too.

Enter the Prince with Attendants.

PRINCE
What misadventure is so early up
That calls our person from our morning rest?
Enter Capulet and Lady Capulet.

CAPULET
What should it be that is so shrieked abroad?
LADY CAPULET
O, the people in the street cry “Romeo,”
Some “Juliet,” and some “Paris,” and all run
With open outcry toward our monument.
PRINCE
What fear is this which startles in our ears?
FIRST WATCH
Sovereign, here lies the County Paris slain,
And Romeo dead, and Juliet, dead before,
Warm and new killed.
PRINCE
Search, seek, and know how this foul murder
comes.
FIRST WATCH
Here is a friar, and slaughtered Romeo’s man,
With instruments upon them fit to open
These dead men’s tombs.
CAPULET
O heavens! O wife, look how our daughter bleeds!
This dagger hath mista’en, for, lo, his house
Is empty on the back of Montague,
And it mis-sheathèd in my daughter’s bosom.
LADY CAPULET
O me, this sight of death is as a bell
That warns my old age to a sepulcher.

Enter Montague.

PRINCE
Come, Montague, for thou art early up
To see thy son and heir now early down.
MONTAGUE
Alas, my liege, my wife is dead tonight.
Grief of my son’s exile hath stopped her breath.
What further woe conspires against mine age?
PRINCE  Look, and thou shalt see.
MONTAGUE, seeing Romeo dead
O thou untaught! What manners is in this,
To press before thy father to a grave?
PRINCE
Seal up the mouth of outrage for awhile,
Till we can clear these ambiguities
And know their spring, their head, their true
descent,
And then will I be general of your woes
And lead you even to death. Meantime forbear,
And let mischance be slave to patience.—
Bring forth the parties of suspicion.
FRIAR LAWRENCE
I am the greatest, able to do least,
Yet most suspected, as the time and place
Doth make against me, of this direful murder.
And here I stand, both to impeach and purge
Myself condemnèd and myself excused.
PRINCE
Then say at once what thou dost know in this.
FRIAR LAWRENCE
I will be brief, for my short date of breath
Is not so long as is a tedious tale.
Romeo, there dead, was husband to that Juliet,
And she, there dead, that Romeo’s faithful wife.
I married them, and their stol’n marriage day
Was Tybalt’s doomsday, whose untimely death
Banished the new-made bridegroom from this city,
For whom, and not for Tybalt, Juliet pined.
You, to remove that siege of grief from her,
Betrothed and would have married her perforce
To County Paris. Then comes she to me,
And with wild looks bid me devise some mean
To rid her from this second marriage,
Or in my cell there would she kill herself.
Then gave I her (so tutored by my art)
A sleeping potion, which so took effect
As I intended, for it wrought on her
The form of death. Meantime I writ to Romeo
That he should hither come as this dire night
To help to take her from her borrowed grave,
Being the time the potion’s force should cease.
But he which bore my letter, Friar John,
Was stayed by accident, and yesternight
Returned my letter back. Then all alone
At the prefixèd hour of her waking
Came I to take her from her kindred’s vault,
Meaning to keep her closely at my cell
Till I conveniently could send to Romeo.
But when I came, some minute ere the time
Of her awakening, here untimely lay
The noble Paris and true Romeo dead.
She wakes, and I entreated her come forth
And bear this work of heaven with patience.
But then a noise did scare me from the tomb,
And she, too desperate, would not go with me
But, as it seems, did violence on herself.
All this I know, and to the marriage
Her nurse is privy. And if aught in this
Miscarried by my fault, let my old life
Be sacrificed some hour before his time
Unto the rigor of severest law.
PRINCE
We still have known thee for a holy man.—
Where’s Romeo’s man? What can he say to this?
BALTHASAR
I brought my master news of Juliet’s death,
And then in post he came from Mantua
To this same place, to this same monument.
This letter he early bid me give his father
And threatened me with death, going in the vault,
If I departed not and left him there.
PRINCE
Give me the letter. I will look on it.—
He takes Romeo’s letter.
Where is the County’s page, that raised the
watch?—
Sirrah, what made your master in this place?
PAGE
He came with flowers to strew his lady’s grave
And bid me stand aloof, and so I did.
Anon comes one with light to ope the tomb,
And by and by my master drew on him,
And then I ran away to call the watch.
PRINCE
This letter doth make good the Friar’s words,
Their course of love, the tidings of her death;
And here he writes that he did buy a poison
Of a poor ’pothecary, and therewithal
Came to this vault to die and lie with Juliet.
Where be these enemies?—Capulet, Montague,
See what a scourge is laid upon your hate,
That heaven finds means to kill your joys with love,
And I, for winking at your discords too,
Have lost a brace of kinsmen. All are punished.
CAPULET
O brother Montague, give me thy hand.
This is my daughter’s jointure, for no more
Can I demand.
MONTAGUE  But I can give thee more,
For I will ray her statue in pure gold,
That whiles Verona by that name is known,
There shall no figure at such rate be set
As that of true and faithful Juliet.
CAPULET
As rich shall Romeo’s by his lady’s lie,
Poor sacrifices of our enmity.
PRINCE
A glooming peace this morning with it brings.
The sun for sorrow will not show his head.
Go hence to have more talk of these sad things.
Some shall be pardoned, and some punishèd.
For never was a story of more woe
Than this of Juliet and her Romeo.
All exit.
)", {R"(Synopsis:

In Venice, at the start of Othello, the soldier Iago announces his hatred for his commander, Othello, a Moor. Othello has promoted Cassio, not Iago, to be his lieutenant.

Iago crudely informs Brabantio, Desdemona’s father, that Othello and Desdemona have eloped. Before the Venetian Senate, Brabantio accuses Othello of bewitching Desdemona. The Senators wish to send Othello to Cyprus, which is under threat from Turkey. They bring Desdemona before them. She tells of her love for Othello, and the marriage stands. The Senate agrees to let her join Othello in Cyprus.

In Cyprus, Iago continues to plot against Othello and Cassio. He lures Cassio into a drunken fight, for which Cassio loses his new rank; Cassio, at Iago’s urging, then begs Desdemona to intervene. Iago uses this and other ploys—misinterpreted conversations, insinuations, and a lost handkerchief—to convince Othello that Desdemona and Cassio are lovers. Othello goes mad with jealousy and later smothers Desdemona on their marriage bed, only to learn of Iago’s treachery. He then kills himself.

ACT 1
Scene 1
Enter Roderigo and Iago.

RODERIGO
Tush, never tell me! I take it much unkindly
That thou, Iago, who hast had my purse
As if the strings were thine, shouldst know of this.
IAGO  ’Sblood, but you’ll not hear me!
If ever I did dream of such a matter,
Abhor me.
RODERIGO
Thou toldst me thou didst hold him in thy hate.
IAGO  Despise me
If I do not. Three great ones of the city,
In personal suit to make me his lieutenant,
Off-capped to him; and, by the faith of man,
I know my price, I am worth no worse a place.
But he, as loving his own pride and purposes,
Evades them with a bombast circumstance,
Horribly stuffed with epithets of war,
And in conclusion,
Nonsuits my mediators. For “Certes,” says he,
“I have already chose my officer.”
And what was he?
Forsooth, a great arithmetician,
One Michael Cassio, a Florentine,
A fellow almost damned in a fair wife,
That never set a squadron in the field,
Nor the division of a battle knows
More than a spinster—unless the bookish theoric,
Wherein the togèd consuls can propose
As masterly as he. Mere prattle without practice
Is all his soldiership. But he, sir, had th’ election;
And I, of whom his eyes had seen the proof
At Rhodes, at Cyprus, and on other grounds
Christened and heathen, must be beleed and
calmed
By debitor and creditor. This countercaster,
He, in good time, must his lieutenant be,
And I, God bless the mark, his Moorship’s ancient.
RODERIGO
By heaven, I rather would have been his hangman.
IAGO
Why, there’s no remedy. ’Tis the curse of service.
Preferment goes by letter and affection,
And not by old gradation, where each second
Stood heir to th’ first. Now, sir, be judge yourself
Whether I in any just term am affined
To love the Moor.
RODERIGO
I would not follow him, then.
IAGO  O, sir, content you.
I follow him to serve my turn upon him.
We cannot all be masters, nor all masters
Cannot be truly followed. You shall mark
Many a duteous and knee-crooking knave
That, doting on his own obsequious bondage,
Wears out his time, much like his master’s ass,
For naught but provender, and when he’s old,
cashiered.
Whip me such honest knaves! Others there are
Who, trimmed in forms and visages of duty,
Keep yet their hearts attending on themselves,
And, throwing but shows of service on their lords,
Do well thrive by them; and when they have lined
their coats,
Do themselves homage. These fellows have some
soul,
And such a one do I profess myself. For, sir,
It is as sure as you are Roderigo,
Were I the Moor I would not be Iago.
In following him, I follow but myself.
Heaven is my judge, not I for love and duty,
But seeming so for my peculiar end.
For when my outward action doth demonstrate
The native act and figure of my heart
In complement extern, ’tis not long after
But I will wear my heart upon my sleeve
For daws to peck at. I am not what I am.
RODERIGO
What a full fortune does the thick-lips owe
If he can carry ’t thus!
IAGO  Call up her father.
Rouse him. Make after him, poison his delight,
Proclaim him in the streets; incense her kinsmen,
And, though he in a fertile climate dwell,
Plague him with flies. Though that his joy be joy,
Yet throw such chances of vexation on ’t
As it may lose some color.
RODERIGO
Here is her father’s house. I’ll call aloud.
IAGO
Do, with like timorous accent and dire yell
As when, by night and negligence, the fire
Is spied in populous cities.
RODERIGO
What ho, Brabantio! Signior Brabantio, ho!
IAGO
Awake! What ho, Brabantio! Thieves, thieves!
Look to your house, your daughter, and your bags!
Thieves, thieves!

Enter Brabantio, above.

BRABANTIO
What is the reason of this terrible summons?
What is the matter there?
RODERIGO
Signior, is all your family within?
IAGO
Are your doors locked?
BRABANTIO  Why, wherefore ask you this?
IAGO
Zounds, sir, you’re robbed. For shame, put on your
gown!
Your heart is burst. You have lost half your soul.
Even now, now, very now, an old black ram
Is tupping your white ewe. Arise, arise!
Awake the snorting citizens with the bell,
Or else the devil will make a grandsire of you.
Arise, I say!
BRABANTIO  What, have you lost your wits?
RODERIGO
Most reverend signior, do you know my voice?
BRABANTIO  Not I. What are you?
RODERIGO
My name is Roderigo.
BRABANTIO  The worser welcome.
I have charged thee not to haunt about my doors.
In honest plainness thou hast heard me say
My daughter is not for thee. And now in madness,
Being full of supper and distemp’ring draughts,
Upon malicious bravery dost thou come
To start my quiet.
RODERIGO  Sir, sir, sir—
BRABANTIO  But thou must needs be sure
My spirit and my place have in them power
To make this bitter to thee.
RODERIGO
Patience, good sir.
BRABANTIO  What tell’st thou me of robbing?
This is Venice. My house is not a grange.
RODERIGO  Most grave Brabantio,
In simple and pure soul I come to you—
IAGO  Zounds, sir, you are one of those that will not
serve God if the devil bid you. Because we come to
do you service and you think we are ruffians, you’ll
have your daughter covered with a Barbary horse,
you’ll have your nephews neigh to you, you’ll have
coursers for cousins and jennets for germans.
BRABANTIO  What profane wretch art thou?
IAGO  I am one, sir, that comes to tell you your daughter
and the Moor are now making the beast with
two backs.
BRABANTIO  Thou art a villain.
IAGO  You are a senator.
BRABANTIO
This thou shalt answer. I know thee, Roderigo.
RODERIGO
Sir, I will answer anything. But I beseech you,
If ’t be your pleasure and most wise consent—
As partly I find it is—that your fair daughter,
At this odd-even and dull watch o’ th’ night,
Transported with no worse nor better guard
But with a knave of common hire, a gondolier,
To the gross clasps of a lascivious Moor:
If this be known to you, and your allowance,
We then have done you bold and saucy wrongs.
But if you know not this, my manners tell me
We have your wrong rebuke. Do not believe
That from the sense of all civility
I thus would play and trifle with your Reverence.
Your daughter, if you have not given her leave,
I say again, hath made a gross revolt,
Tying her duty, beauty, wit, and fortunes
In an extravagant and wheeling stranger
Of here and everywhere. Straight satisfy yourself.
If she be in her chamber or your house,
Let loose on me the justice of the state
For thus deluding you.
BRABANTIO  Strike on the tinder, ho!
Give me a taper. Call up all my people.
This accident is not unlike my dream.
Belief of it oppresses me already.
Light, I say, light!He exits.
IAGO, to Roderigo  Farewell, for I must leave you.
It seems not meet nor wholesome to my place
To be producted, as if I stay I shall,
Against the Moor. For I do know the state,
However this may gall him with some check,
Cannot with safety cast him, for he’s embarked
With such loud reason to the Cyprus wars,
Which even now stands in act, that, for their souls,
Another of his fathom they have none
To lead their business. In which regard,
Though I do hate him as I do hell pains,
Yet, for necessity of present life,
I must show out a flag and sign of love—
Which is indeed but sign. That you shall surely find
him,
Lead to the Sagittary the raisèd search,
And there will I be with him. So, farewell.He exits.

Enter Brabantio in his nightgown, with Servants and
Torches.

BRABANTIO
It is too true an evil. Gone she is,
And what’s to come of my despisèd time
Is naught but bitterness.—Now, Roderigo,
Where didst thou see her?—O, unhappy girl!—
With the Moor, sayst thou?—Who would be a
father?—
How didst thou know ’twas she?—O, she deceives
me
Past thought!—What said she to you?—Get more
tapers.
Raise all my kindred.—Are they married, think
you?
RODERIGO  Truly, I think they are.
BRABANTIO
O heaven! How got she out? O treason of the blood!
Fathers, from hence trust not your daughters’ minds
By what you see them act.—Is there not charms
By which the property of youth and maidhood
May be abused? Have you not read, Roderigo,
Of some such thing?
RODERIGO  Yes, sir, I have indeed.
BRABANTIO
Call up my brother.—O, would you had had her!—
Some one way, some another.—Do you know
Where we may apprehend her and the Moor?
RODERIGO
I think I can discover him, if you please
To get good guard and go along with me.
BRABANTIO
Pray you lead on. At every house I’ll call.
I may command at most.—Get weapons, ho!
And raise some special officers of night.—
On, good Roderigo. I will deserve your pains.
They exit.



Scene 2
Enter Othello, Iago, Attendants, with Torches.

IAGO
Though in the trade of war I have slain men,
Yet do I hold it very stuff o’ th’ conscience
To do no contrived murder. I lack iniquity
Sometimes to do me service. Nine or ten times
I had thought t’ have yerked him here under the
ribs.
OTHELLO
’Tis better as it is.
IAGO  Nay, but he prated
And spoke such scurvy and provoking terms
Against your Honor,
That with the little godliness I have
I did full hard forbear him. But I pray you, sir,
Are you fast married? Be assured of this,
That the magnifico is much beloved,
And hath in his effect a voice potential
As double as the Duke’s. He will divorce you
Or put upon you what restraint or grievance
The law (with all his might to enforce it on)
Will give him cable.
OTHELLO  Let him do his spite.
My services which I have done the signiory
Shall out-tongue his complaints. ’Tis yet to know
(Which, when I know that boasting is an honor,
I shall promulgate) I fetch my life and being
From men of royal siege, and my demerits
May speak unbonneted to as proud a fortune
As this that I have reached. For know, Iago,
But that I love the gentle Desdemona,
I would not my unhousèd free condition
Put into circumscription and confine
For the sea’s worth. But look, what lights come
yond?
IAGO
Those are the raisèd father and his friends.
You were best go in.
OTHELLO  Not I. I must be found.
My parts, my title, and my perfect soul
Shall manifest me rightly. Is it they?
IAGO  By Janus, I think no.

Enter Cassio, with Officers, and Torches.

OTHELLO
The servants of the Duke and my lieutenant!
The goodness of the night upon you, friends.
What is the news?
CASSIO  The Duke does greet you, general,
And he requires your haste-post-haste appearance,
Even on the instant.
OTHELLO  What is the matter, think you?
CASSIO
Something from Cyprus, as I may divine.
It is a business of some heat. The galleys
Have sent a dozen sequent messengers
This very night at one another’s heels,
And many of the Consuls, raised and met,
Are at the Duke’s already. You have been hotly
called for.
When, being not at your lodging to be found,
The Senate hath sent about three several quests
To search you out.
OTHELLO  ’Tis well I am found by you.
I will but spend a word here in the house
And go with you.He exits.
CASSIO  Ancient, what makes he here?
IAGO
Faith, he tonight hath boarded a land carrack.
If it prove lawful prize, he’s made forever.
CASSIO
I do not understand.
IAGO  He’s married.
CASSIO  To who?
IAGO
Marry, to—

Reenter Othello.

Come, captain, will you go?
OTHELLO  Have with you.
CASSIO
Here comes another troop to seek for you.

Enter Brabantio, Roderigo, with Officers, and Torches.

IAGO
It is Brabantio. General, be advised,
He comes to bad intent.
OTHELLO  Holla, stand there!
RODERIGO
Signior, it is the Moor.
BRABANTIO  Down with him,
thief!
They draw their swords.
IAGO
You, Roderigo! Come, sir, I am for you.
OTHELLO
Keep up your bright swords, for the dew will rust
them.
Good signior, you shall more command with years
Than with your weapons.
BRABANTIO
O, thou foul thief, where hast thou stowed my
daughter?
Damned as thou art, thou hast enchanted her!
For I’ll refer me to all things of sense,
If she in chains of magic were not bound,
Whether a maid so tender, fair, and happy,
So opposite to marriage that she shunned
The wealthy curlèd darlings of our nation,
Would ever have, t’ incur a general mock,
Run from her guardage to the sooty bosom
Of such a thing as thou—to fear, not to delight!
Judge me the world, if ’tis not gross in sense
That thou hast practiced on her with foul charms,
Abused her delicate youth with drugs or minerals
That weakens motion. I’ll have ’t disputed on.
’Tis probable, and palpable to thinking.
I therefore apprehend and do attach thee
For an abuser of the world, a practicer
Of arts inhibited and out of warrant.—
Lay hold upon him. If he do resist,
Subdue him at his peril.
OTHELLO  Hold your hands,
Both you of my inclining and the rest.
Were it my cue to fight, I should have known it
Without a prompter.—Whither will you that I go
To answer this your charge?
BRABANTIO  To prison, till fit time
Of law and course of direct session
Call thee to answer.
OTHELLO  What if I do obey?
How may the Duke be therewith satisfied,
Whose messengers are here about my side,
Upon some present business of the state,
To bring me to him?
OFFICER  ’Tis true, most worthy signior.
The Duke’s in council, and your noble self
I am sure is sent for.
BRABANTIO  How? The Duke in council?
In this time of the night? Bring him away;
Mine’s not an idle cause. The Duke himself,
Or any of my brothers of the state,
Cannot but feel this wrong as ’twere their own.
For if such actions may have passage free,
Bondslaves and pagans shall our statesmen be.
They exit.



Scene 3
Enter Duke, Senators, and Officers.

DUKE, reading a paper
There’s no composition in these news
That gives them credit.
FIRST SENATOR, reading a paper
Indeed, they are disproportioned.
My letters say a hundred and seven galleys.
DUKE
And mine, a hundred forty.
SECOND SENATOR, reading a paper
And mine, two hundred.
But though they jump not on a just account
(As in these cases, where the aim reports
’Tis oft with difference), yet do they all confirm
A Turkish fleet, and bearing up to Cyprus.
DUKE
Nay, it is possible enough to judgment.
I do not so secure me in the error,
But the main article I do approve
In fearful sense.
SAILOR, within  What ho, what ho, what ho!

Enter Sailor.

OFFICER  A messenger from the galleys.
DUKE  Now, what’s the business?
SAILOR
The Turkish preparation makes for Rhodes.
So was I bid report here to the state
By Signior Angelo.He exits.
DUKE
How say you by this change?
FIRST SENATOR  This cannot be,
By no assay of reason. ’Tis a pageant
To keep us in false gaze. When we consider
Th’ importancy of Cyprus to the Turk,
And let ourselves again but understand
That, as it more concerns the Turk than Rhodes,
So may he with more facile question bear it,
For that it stands not in such warlike brace,
But altogether lacks th’ abilities
That Rhodes is dressed in—if we make thought of
this,
We must not think the Turk is so unskillful
To leave that latest which concerns him first,
Neglecting an attempt of ease and gain
To wake and wage a danger profitless.
DUKE
Nay, in all confidence, he’s not for Rhodes.
OFFICER  Here is more news.

Enter a Messenger.

MESSENGER
The Ottomites, Reverend and Gracious,
Steering with due course toward the isle of Rhodes,
Have there injointed them with an after fleet.
FIRST SENATOR
Ay, so I thought. How many, as you guess?
MESSENGER
Of thirty sail; and now they do restem
Their backward course, bearing with frank
appearance
Their purposes toward Cyprus. Signior Montano,
Your trusty and most valiant servitor,
With his free duty recommends you thus,
And prays you to believe him.He exits.
DUKE  ’Tis certain, then, for Cyprus.
Marcus Luccicos, is not he in town?
FIRST SENATOR
He’s now in Florence.
DUKE  Write from us to him.
Post-post-haste. Dispatch.
FIRST SENATOR
Here comes Brabantio and the valiant Moor.

Enter Brabantio, Othello, Cassio, Iago, Roderigo, and
Officers.

DUKE
Valiant Othello, we must straight employ you
Against the general enemy Ottoman.
To Brabantio. I did not see you. Welcome, gentle
signior.
We lacked your counsel and your help tonight.
BRABANTIO
So did I yours. Good your Grace, pardon me.
Neither my place nor aught I heard of business
Hath raised me from my bed, nor doth the general
care
Take hold on me, for my particular grief
Is of so floodgate and o’erbearing nature
That it engluts and swallows other sorrows
And it is still itself.
DUKE  Why, what’s the matter?
BRABANTIO
My daughter! O, my daughter!
FIRST SENATOR  Dead?
BRABANTIO  Ay, to me.
She is abused, stol’n from me, and corrupted
By spells and medicines bought of mountebanks;
For nature so prepost’rously to err—
Being not deficient, blind, or lame of sense—
Sans witchcraft could not.
DUKE
Whoe’er he be that in this foul proceeding
Hath thus beguiled your daughter of herself
And you of her, the bloody book of law
You shall yourself read in the bitter letter,
After your own sense, yea, though our proper son
Stood in your action.
BRABANTIO  Humbly I thank your Grace.
Here is the man—this Moor, whom now it seems
Your special mandate for the state affairs
Hath hither brought.
ALL  We are very sorry for ’t.
DUKE, to Othello
What, in your own part, can you say to this?
BRABANTIO  Nothing, but this is so.
OTHELLO
Most potent, grave, and reverend signiors,
My very noble and approved good masters:
That I have ta’en away this old man’s daughter,
It is most true; true I have married her.
The very head and front of my offending
Hath this extent, no more. Rude am I in my speech,
And little blessed with the soft phrase of peace;
For since these arms of mine had seven years’ pith,
Till now some nine moons wasted, they have used
Their dearest action in the tented field,
And little of this great world can I speak
More than pertains to feats of broil and battle.
And therefore little shall I grace my cause
In speaking for myself. Yet, by your gracious
patience,
I will a round unvarnished tale deliver
Of my whole course of love—what drugs, what
charms,
What conjuration, and what mighty magic
(For such proceeding I am charged withal)
I won his daughter.
BRABANTIO  A maiden never bold,
Of spirit so still and quiet that her motion
Blushed at herself. And she, in spite of nature,
Of years, of country, credit, everything,
To fall in love with what she feared to look on!
It is a judgment maimed and most imperfect
That will confess perfection so could err
Against all rules of nature, and must be driven
To find out practices of cunning hell
Why this should be. I therefore vouch again
That with some mixtures powerful o’er the blood,
Or with some dram conjured to this effect,
He wrought upon her.
DUKE  To vouch this is no proof
Without more wider and more overt test
Than these thin habits and poor likelihoods
Of modern seeming do prefer against him.
FIRST SENATOR  But, Othello, speak:
Did you by indirect and forcèd courses
Subdue and poison this young maid’s affections?
Or came it by request, and such fair question
As soul to soul affordeth?
OTHELLO  I do beseech you,
Send for the lady to the Sagittary
And let her speak of me before her father.
If you do find me foul in her report,
The trust, the office I do hold of you,
Not only take away, but let your sentence
Even fall upon my life.
DUKE  Fetch Desdemona hither.
OTHELLO
Ancient, conduct them. You best know the place.
Iago and Attendants exit.
And till she come, as truly as to heaven
I do confess the vices of my blood,
So justly to your grave ears I’ll present
How I did thrive in this fair lady’s love,
And she in mine.
DUKE  Say it, Othello.
OTHELLO
Her father loved me, oft invited me,
Still questioned me the story of my life
From year to year—the battles, sieges, fortunes
That I have passed.
I ran it through, even from my boyish days
To th’ very moment that he bade me tell it,
Wherein I spoke of most disastrous chances:
Of moving accidents by flood and field,
Of hairbreadth ’scapes i’ th’ imminent deadly
breach,
Of being taken by the insolent foe
And sold to slavery, of my redemption thence,
And portance in my traveler’s history,
Wherein of antres vast and deserts idle,
Rough quarries, rocks, and hills whose heads
touch heaven,
It was my hint to speak—such was my process—
And of the cannibals that each other eat,
The Anthropophagi, and men whose heads
Do grow beneath their shoulders. These things to
hear
Would Desdemona seriously incline.
But still the house affairs would draw her thence,
Which ever as she could with haste dispatch
She’d come again, and with a greedy ear
Devour up my discourse. Which I, observing,
Took once a pliant hour, and found good means
To draw from her a prayer of earnest heart
That I would all my pilgrimage dilate,
Whereof by parcels she had something heard,
But not intentively. I did consent,
And often did beguile her of her tears
When I did speak of some distressful stroke
That my youth suffered. My story being done,
She gave me for my pains a world of sighs.
She swore, in faith, ’twas strange, ’twas passing
strange,
’Twas pitiful, ’twas wondrous pitiful.
She wished she had not heard it, yet she wished
That heaven had made her such a man. She thanked
me,
And bade me, if I had a friend that loved her,
I should but teach him how to tell my story,
And that would woo her. Upon this hint I spake.
She loved me for the dangers I had passed,
And I loved her that she did pity them.
This only is the witchcraft I have used.
Here comes the lady. Let her witness it.

Enter Desdemona, Iago, Attendants.

DUKE
I think this tale would win my daughter, too.
Good Brabantio,
Take up this mangled matter at the best.
Men do their broken weapons rather use
Than their bare hands.
BRABANTIO  I pray you hear her speak.
If she confess that she was half the wooer,
Destruction on my head if my bad blame
Light on the man.—Come hither, gentle mistress.
Do you perceive in all this noble company
Where most you owe obedience?
DESDEMONA  My noble father,
I do perceive here a divided duty.
To you I am bound for life and education.
My life and education both do learn me
How to respect you. You are the lord of duty.
I am hitherto your daughter. But here’s my
husband.
And so much duty as my mother showed
To you, preferring you before her father,
So much I challenge that I may profess
Due to the Moor my lord.
BRABANTIO  God be with you! I have done.
Please it your Grace, on to the state affairs.
I had rather to adopt a child than get it.—
Come hither, Moor.
I here do give thee that with all my heart
Which, but thou hast already, with all my heart
I would keep from thee.—For your sake, jewel,
I am glad at soul I have no other child,
For thy escape would teach me tyranny,
To hang clogs on them.—I have done, my lord.
DUKE
Let me speak like yourself and lay a sentence,
Which as a grise or step may help these lovers
Into your favor.
When remedies are past, the griefs are ended
By seeing the worst, which late on hopes depended.
To mourn a mischief that is past and gone
Is the next way to draw new mischief on.
What cannot be preserved when fortune takes,
Patience her injury a mock’ry makes.
The robbed that smiles steals something from the
thief;
He robs himself that spends a bootless grief.
BRABANTIO
So let the Turk of Cyprus us beguile,
We lose it not so long as we can smile.
He bears the sentence well that nothing bears
But the free comfort which from thence he hears;
But he bears both the sentence and the sorrow
That, to pay grief, must of poor patience borrow.
These sentences to sugar or to gall,
Being strong on both sides, are equivocal.
But words are words. I never yet did hear
That the bruised heart was piercèd through the
ear.
I humbly beseech you, proceed to th’ affairs of
state.
DUKE  The Turk with a most mighty preparation makes
for Cyprus. Othello, the fortitude of the place is
best known to you. And though we have there a
substitute of most allowed sufficiency, yet opinion, a
sovereign mistress of effects, throws a more safer
voice on you. You must therefore be content to
slubber the gloss of your new fortunes with this
more stubborn and boist’rous expedition.
OTHELLO
The tyrant custom, most grave senators,
Hath made the flinty and steel couch of war
My thrice-driven bed of down. I do agnize
A natural and prompt alacrity
I find in hardness, and do undertake
This present wars against the Ottomites.
Most humbly, therefore, bending to your state,
I crave fit disposition for my wife,
Due reference of place and exhibition,
With such accommodation and besort
As levels with her breeding.
DUKE
Why, at her father’s.
BRABANTIO  I will not have it so.
OTHELLO  Nor I.
DESDEMONA  Nor would I there reside
To put my father in impatient thoughts
By being in his eye. Most gracious duke,
To my unfolding lend your prosperous ear
And let me find a charter in your voice
T’ assist my simpleness.
DUKE  What would you, Desdemona?
DESDEMONA
That I love the Moor to live with him
My downright violence and storm of fortunes
May trumpet to the world. My heart’s subdued
Even to the very quality of my lord.
I saw Othello’s visage in his mind,
And to his honors and his valiant parts
Did I my soul and fortunes consecrate.
So that, dear lords, if I be left behind,
A moth of peace, and he go to the war,
The rites for why I love him are bereft me
And I a heavy interim shall support
By his dear absence. Let me go with him.
OTHELLO  Let her have your voice.
Vouch with me, heaven, I therefore beg it not
To please the palate of my appetite,
Nor to comply with heat (the young affects
In me defunct) and proper satisfaction,
But to be free and bounteous to her mind.
And heaven defend your good souls that you think
I will your serious and great business scant
For she is with me. No, when light-winged toys
Of feathered Cupid seel with wanton dullness
My speculative and officed instruments,
That my disports corrupt and taint my business,
Let housewives make a skillet of my helm,
And all indign and base adversities
Make head against my estimation.
DUKE
Be it as you shall privately determine,
Either for her stay or going. Th’ affair cries haste,
And speed must answer it.
FIRST SENATOR
You must away tonight.
OTHELLO  With all my
heart.
DUKE
At nine i’ th’ morning here we’ll meet again.
Othello, leave some officer behind
And he shall our commission bring to you,
With such things else of quality and respect
As doth import you.
OTHELLO  So please your Grace, my
ancient.
A man he is of honesty and trust.
To his conveyance I assign my wife,
With what else needful your good Grace shall think
To be sent after me.
DUKE  Let it be so.
Good night to everyone. To Brabantio. And, noble
signior,
If virtue no delighted beauty lack,
Your son-in-law is far more fair than black.
FIRST SENATOR
Adieu, brave Moor, use Desdemona well.
BRABANTIO
Look to her, Moor, if thou hast eyes to see.
She has deceived her father, and may thee.He exits.
OTHELLO
My life upon her faith!
The Duke, the Senators, Cassio, and Officers exit.
Honest Iago,
My Desdemona must I leave to thee.
I prithee let thy wife attend on her,
And bring them after in the best advantage.—
Come, Desdemona, I have but an hour
Of love, of worldly matters, and direction
To spend with thee. We must obey the time.
Othello and Desdemona exit.
RODERIGO  Iago—
IAGO  What sayst thou, noble heart?
RODERIGO  What will I do, think’st thou?
IAGO  Why, go to bed and sleep.
RODERIGO  I will incontinently drown myself.
IAGO  If thou dost, I shall never love thee after. Why,
thou silly gentleman!
RODERIGO  It is silliness to live, when to live is torment,
and then have we a prescription to die when death is
our physician.
IAGO  O, villainous! I have looked upon the world for
four times seven years, and since I could distinguish
betwixt a benefit and an injury, I never found
man that knew how to love himself. Ere I would say
I would drown myself for the love of a guinea hen, I
would change my humanity with a baboon.
RODERIGO  What should I do? I confess it is my shame
to be so fond, but it is not in my virtue to amend it.
IAGO  Virtue? A fig! ’Tis in ourselves that we are thus or
thus. Our bodies are our gardens, to the which our
wills are gardeners. So that if we will plant nettles
or sow lettuce, set hyssop and weed up thyme,
supply it with one gender of herbs or distract it
with many, either to have it sterile with idleness or
manured with industry, why the power and corrigible
authority of this lies in our wills. If the balance
of our lives had not one scale of reason to poise
another of sensuality, the blood and baseness of our
natures would conduct us to most prepost’rous
conclusions. But we have reason to cool our raging
motions, our carnal stings, our unbitted lusts—
whereof I take this that you call love to be a sect, or
scion.
RODERIGO  It cannot be.
IAGO  It is merely a lust of the blood and a permission
of the will. Come, be a man! Drown thyself? Drown
cats and blind puppies. I have professed me thy
friend, and I confess me knit to thy deserving
with cables of perdurable toughness. I could never
better stead thee than now. Put money in thy purse.
Follow thou the wars; defeat thy favor with an
usurped beard. I say, put money in thy purse. It
cannot be that Desdemona should long continue
her love to the Moor—put money in thy purse—
nor he his to her. It was a violent commencement in
her, and thou shalt see an answerable sequestration
—put but money in thy purse. These Moors are
changeable in their wills. Fill thy purse with money.
The food that to him now is as luscious as locusts
shall be to him shortly as bitter as coloquintida.
She must change for youth. When she is sated
with his body she will find the error of her choice.
Therefore, put money in thy purse. If thou wilt
needs damn thyself, do it a more delicate way than
drowning. Make all the money thou canst. If sanctimony
and a frail vow betwixt an erring barbarian
and a supersubtle Venetian be not too hard for my
wits and all the tribe of hell, thou shalt enjoy her.
Therefore make money. A pox of drowning thyself!
It is clean out of the way. Seek thou rather to be
hanged in compassing thy joy than to be drowned
and go without her.
RODERIGO  Wilt thou be fast to my hopes if I depend on
the issue?
IAGO  Thou art sure of me. Go, make money. I have
told thee often, and I retell thee again and again, I
hate the Moor. My cause is hearted; thine hath no
less reason. Let us be conjunctive in our revenge
against him. If thou canst cuckold him, thou dost
thyself a pleasure, me a sport. There are many
events in the womb of time which will be delivered.
Traverse, go, provide thy money. We will have more
of this tomorrow. Adieu.
RODERIGO  Where shall we meet i’ th’ morning?
IAGO  At my lodging.
RODERIGO  I’ll be with thee betimes.
IAGO  Go to, farewell. Do you hear, Roderigo?
RODERIGO  What say you?
IAGO  No more of drowning, do you hear?
RODERIGO  I am changed.
IAGO  Go to, farewell. Put money enough in your
purse.
RODERIGO  I’ll sell all my land.He exits.
IAGO
Thus do I ever make my fool my purse.
For I mine own gained knowledge should profane
If I would time expend with such a snipe
But for my sport and profit. I hate the Moor,
And it is thought abroad that ’twixt my sheets
’Has done my office. I know not if ’t be true,
But I, for mere suspicion in that kind,
Will do as if for surety. He holds me well.
The better shall my purpose work on him.
Cassio’s a proper man. Let me see now:
To get his place and to plume up my will
In double knavery—How? how?—Let’s see.
After some time, to abuse Othello’s ear
That he is too familiar with his wife.
He hath a person and a smooth dispose
To be suspected, framed to make women false.
The Moor is of a free and open nature
That thinks men honest that but seem to be so,
And will as tenderly be led by th’ nose
As asses are.
I have ’t. It is engendered. Hell and night
Must bring this monstrous birth to the world’s light.
He exits.



ACT 2
Scene 1
Enter Montano and two Gentlemen.

MONTANO
What from the cape can you discern at sea?
FIRST GENTLEMAN
Nothing at all. It is a high-wrought flood.
I cannot ’twixt the heaven and the main
Descry a sail.
MONTANO
Methinks the wind hath spoke aloud at land.
A fuller blast ne’er shook our battlements.
If it hath ruffianed so upon the sea,
What ribs of oak, when mountains melt on them,
Can hold the mortise? What shall we hear of this?
SECOND GENTLEMAN
A segregation of the Turkish fleet.
For do but stand upon the foaming shore,
The chidden billow seems to pelt the clouds,
The wind-shaked surge, with high and monstrous
mane,
Seems to cast water on the burning Bear
And quench the guards of th’ ever-fixèd pole.
I never did like molestation view
On the enchafèd flood.
MONTANO  If that the Turkish fleet
Be not ensheltered and embayed, they are drowned.
It is impossible to bear it out.
Enter a third Gentleman.

THIRD GENTLEMAN  News, lads! Our wars are done.
The desperate tempest hath so banged the Turks
That their designment halts. A noble ship of Venice
Hath seen a grievous wrack and sufferance
On most part of their fleet.
MONTANO
How? Is this true?
THIRD GENTLEMAN  The ship is here put in,
A Veronesa. Michael Cassio,
Lieutenant to the warlike Moor Othello,
Is come on shore; the Moor himself at sea,
And is in full commission here for Cyprus.
MONTANO
I am glad on ’t. ’Tis a worthy governor.
THIRD GENTLEMAN
But this same Cassio, though he speak of comfort
Touching the Turkish loss, yet he looks sadly
And prays the Moor be safe, for they were parted
With foul and violent tempest.
MONTANO  Pray heaven he be;
For I have served him, and the man commands
Like a full soldier. Let’s to the seaside, ho!
As well to see the vessel that’s come in
As to throw out our eyes for brave Othello,
Even till we make the main and th’ aerial blue
An indistinct regard.
THIRD GENTLEMAN  Come, let’s do so;
For every minute is expectancy
Of more arrivance.

Enter Cassio.

CASSIO
Thanks, you the valiant of this warlike isle,
That so approve the Moor! O, let the heavens
Give him defense against the elements,
For I have lost him on a dangerous sea.
MONTANO  Is he well shipped?
CASSIO
His bark is stoutly timbered, and his pilot
Of very expert and approved allowance;
Therefore my hopes, not surfeited to death,
Stand in bold cure.
Voices cry within. “A sail, a sail, a sail!”

Enter a Messenger.

CASSIO  What noise?
MESSENGER
The town is empty; on the brow o’ th’ sea
Stand ranks of people, and they cry “A sail!”
CASSIO
My hopes do shape him for the Governor.
A shot.
SECOND GENTLEMAN
They do discharge their shot of courtesy.
Our friends, at least.
CASSIO  I pray you, sir, go forth,
And give us truth who ’tis that is arrived.
SECOND GENTLEMAN  I shall.He exits.
MONTANO
But, good lieutenant, is your general wived?
CASSIO
Most fortunately. He hath achieved a maid
That paragons description and wild fame,
One that excels the quirks of blazoning pens,
And in th’ essential vesture of creation
Does tire the ingener.

Enter Second Gentleman.

How now? Who has put in?
SECOND GENTLEMAN
’Tis one Iago, ancient to the General.
CASSIO
’Has had most favorable and happy speed!
Tempests themselves, high seas, and howling winds,
The guttered rocks and congregated sands
(Traitors ensteeped to clog the guiltless keel),
As having sense of beauty, do omit
Their mortal natures, letting go safely by
The divine Desdemona.
MONTANO  What is she?
CASSIO
She that I spake of, our great captain’s captain,
Left in the conduct of the bold Iago,
Whose footing here anticipates our thoughts
A sennight’s speed. Great Jove, Othello guard,
And swell his sail with thine own powerful breath,
That he may bless this bay with his tall ship,
Make love’s quick pants in Desdemona’s arms,
Give renewed fire to our extincted spirits,
And bring all Cyprus comfort!

Enter Desdemona, Iago, Roderigo, and Emilia.

O, behold,
The riches of the ship is come on shore!
You men of Cyprus, let her have your knees.
He kneels.
Hail to thee, lady, and the grace of heaven,
Before, behind thee, and on every hand
Enwheel thee round.He rises.
DESDEMONA  I thank you, valiant Cassio.
What tidings can you tell of my lord?
CASSIO
He is not yet arrived, nor know I aught
But that he’s well and will be shortly here.
DESDEMONA
O, but I fear—How lost you company?
CASSIO
The great contention of sea and skies
Parted our fellowship.
Within “A sail, a sail!” A shot.
But hark, a sail!
SECOND GENTLEMAN
They give their greeting to the citadel.
This likewise is a friend.
CASSIO  See for the news.
Second Gentleman exits.
Good ancient, you are welcome. Welcome, mistress.
He kisses Emilia.
Let it not gall your patience, good Iago,
That I extend my manners. ’Tis my breeding
That gives me this bold show of courtesy.
IAGO
Sir, would she give you so much of her lips
As of her tongue she oft bestows on me,
You would have enough.
DESDEMONA
Alas, she has no speech!
IAGO  In faith, too much.
I find it still when I have list to sleep.
Marry, before your Ladyship, I grant,
She puts her tongue a little in her heart
And chides with thinking.
EMILIA  You have little cause to say so.
IAGO  Come on, come on! You are pictures out of door,
bells in your parlors, wildcats in your kitchens,
saints in your injuries, devils being offended, players
in your huswifery, and huswives in your beds.
DESDEMONA  Oh, fie upon thee, slanderer.
IAGO
Nay, it is true, or else I am a Turk.
You rise to play, and go to bed to work.
EMILIA
You shall not write my praise.
IAGO  No, let me not.
DESDEMONA
What wouldst write of me if thou shouldst praise
me?
IAGO
O, gentle lady, do not put me to ’t,
For I am nothing if not critical.
DESDEMONA
Come on, assay.—There’s one gone to the harbor?
IAGO  Ay, madam.
DESDEMONA, aside
I am not merry, but I do beguile
The thing I am by seeming otherwise.—
Come, how wouldst thou praise me?
IAGO  I am about it, but indeed my invention comes
from my pate as birdlime does from frieze: it
plucks out brains and all. But my muse labors, and
thus she is delivered:
If she be fair and wise, fairness and wit,
The one’s for use, the other useth it.
DESDEMONA
Well praised! How if she be black and witty?
IAGO
If she be black, and thereto have a wit,
She’ll find a white that shall her blackness hit.
DESDEMONA
Worse and worse.
EMILIA  How if fair and foolish?
IAGO
She never yet was foolish that was fair,
For even her folly helped her to an heir.
DESDEMONA  These are old fond paradoxes to make
fools laugh i’ th’ alehouse. What miserable praise
hast thou for her that’s foul and foolish?
IAGO
There’s none so foul and foolish thereunto,
But does foul pranks which fair and wise ones do.
DESDEMONA  O heavy ignorance! Thou praisest the
worst best. But what praise couldst thou bestow on
a deserving woman indeed, one that in the authority
of her merit did justly put on the vouch of very
malice itself?
IAGO
She that was ever fair and never proud,
Had tongue at will and yet was never loud,
Never lacked gold and yet went never gay,
Fled from her wish, and yet said “Now I may,”
She that being angered, her revenge being nigh,
Bade her wrong stay and her displeasure fly,
She that in wisdom never was so frail
To change the cod’s head for the salmon’s tail,
She that could think and ne’er disclose her mind,
See suitors following and not look behind,
She was a wight, if ever such wight were—
DESDEMONA  To do what?
IAGO
To suckle fools and chronicle small beer.
DESDEMONA  O, most lame and impotent conclusion!
—Do not learn of him, Emilia, though he be thy
husband.—How say you, Cassio? Is he not a most
profane and liberal counselor?
CASSIO  He speaks home, madam. You may relish him
more in the soldier than in the scholar.
Cassio takes Desdemona’s hand.
IAGO, aside  He takes her by the palm. Ay, well said,
whisper. With as little a web as this will I ensnare as
great a fly as Cassio. Ay, smile upon her, do. I will
gyve thee in thine own courtship. You say true, ’tis
so indeed. If such tricks as these strip you out of
your lieutenantry, it had been better you had not
kissed your three fingers so oft, which now again
you are most apt to play the sir in. Very good; well
kissed; an excellent courtesy! ’Tis so, indeed. Yet
again your fingers to your lips? Would they were
clyster pipes for your sake!Trumpets within.
The Moor. I know his trumpet.
CASSIO  ’Tis truly so.
DESDEMONA  Let’s meet him and receive him.
CASSIO  Lo, where he comes!

Enter Othello and Attendants.

OTHELLO
O, my fair warrior!
DESDEMONA  My dear Othello!
OTHELLO
It gives me wonder great as my content
To see you here before me. O my soul’s joy!
If after every tempest come such calms,
May the winds blow till they have wakened death,
And let the laboring bark climb hills of seas
Olympus high, and duck again as low
As hell’s from heaven! If it were now to die,
’Twere now to be most happy, for I fear
My soul hath her content so absolute
That not another comfort like to this
Succeeds in unknown fate.
DESDEMONA  The heavens forbid
But that our loves and comforts should increase
Even as our days do grow!
OTHELLO  Amen to that, sweet powers!
I cannot speak enough of this content.
It stops me here; it is too much of joy.They kiss.
And this, and this, the greatest discords be
That e’er our hearts shall make!
IAGO, aside  O, you are well tuned now,
But I’ll set down the pegs that make this music,
As honest as I am.
OTHELLO  Come. Let us to the castle.—
News, friends! Our wars are done. The Turks are
drowned.
How does my old acquaintance of this isle?—
Honey, you shall be well desired in Cyprus.
I have found great love amongst them. O, my sweet,
I prattle out of fashion, and I dote
In mine own comforts.—I prithee, good Iago,
Go to the bay and disembark my coffers.
Bring thou the master to the citadel.
He is a good one, and his worthiness
Does challenge much respect.—Come, Desdemona.
Once more, well met at Cyprus.
All but Iago and Roderigo exit.
IAGO, to a departing Attendant  Do thou meet me presently
at the harbor. To Roderigo. Come hither. If
thou be’st valiant—as they say base men being in
love have then a nobility in their natures more than
is native to them—list me. The Lieutenant tonight
watches on the court of guard. First, I must tell thee
this: Desdemona is directly in love with him.
RODERIGO  With him? Why, ’tis not possible.
IAGO  Lay thy finger thus, and let thy soul be instructed.
Mark me with what violence she first loved the
Moor but for bragging and telling her fantastical
lies. And will she love him still for prating? Let not
thy discreet heart think it. Her eye must be fed. And
what delight shall she have to look on the devil?
When the blood is made dull with the act of sport,
there should be, again to inflame it and to give
satiety a fresh appetite, loveliness in favor, sympathy
in years, manners, and beauties, all which the Moor
is defective in. Now, for want of these required
conveniences, her delicate tenderness will find itself
abused, begin to heave the gorge, disrelish and
abhor the Moor. Very nature will instruct her in it
and compel her to some second choice. Now, sir,
this granted—as it is a most pregnant and unforced
position—who stands so eminent in the degree of
this fortune as Cassio does? A knave very voluble, no
further conscionable than in putting on the mere
form of civil and humane seeming for the better
compassing of his salt and most hidden loose
affection. Why, none, why, none! A slipper and
subtle knave, a finder-out of occasions, that has an
eye can stamp and counterfeit advantages, though
true advantage never present itself; a devilish knave!
Besides, the knave is handsome, young, and hath all
those requisites in him that folly and green minds
look after. A pestilent complete knave, and the
woman hath found him already.
RODERIGO  I cannot believe that in her. She’s full of
most blessed condition.
IAGO  Blessed fig’s end! The wine she drinks is made of
grapes. If she had been blessed, she would never
have loved the Moor. Blessed pudding! Didst thou
not see her paddle with the palm of his hand? Didst
not mark that?
RODERIGO  Yes, that I did. But that was but courtesy.
IAGO  Lechery, by this hand! An index and obscure
prologue to the history of lust and foul thoughts.
They met so near with their lips that their breaths
embraced together. Villainous thoughts, Roderigo!
When these mutualities so marshal the way, hard
at hand comes the master and main exercise, th’
incorporate conclusion. Pish! But, sir, be you ruled
by me. I have brought you from Venice. Watch you
tonight. For the command, I’ll lay ’t upon you.
Cassio knows you not. I’ll not be far from you. Do
you find some occasion to anger Cassio, either by
speaking too loud, or tainting his discipline, or from
what other course you please, which the time shall
more favorably minister.
RODERIGO  Well.
IAGO  Sir, he’s rash and very sudden in choler, and
haply may strike at you. Provoke him that he may,
for even out of that will I cause these of Cyprus to
mutiny, whose qualification shall come into no
true taste again but by the displanting of Cassio. So
shall you have a shorter journey to your desires by
the means I shall then have to prefer them, and the
impediment most profitably removed, without the
which there were no expectation of our prosperity.
RODERIGO  I will do this, if you can bring it to any
opportunity.
IAGO  I warrant thee. Meet me by and by at the citadel. I
must fetch his necessaries ashore. Farewell.
RODERIGO  Adieu.He exits.
IAGO
That Cassio loves her, I do well believe ’t.
That she loves him, ’tis apt and of great credit.
The Moor, howbeit that I endure him not,
Is of a constant, loving, noble nature,
And I dare think he’ll prove to Desdemona
A most dear husband. Now, I do love her too,
Not out of absolute lust (though peradventure
I stand accountant for as great a sin)
But partly led to diet my revenge
For that I do suspect the lusty Moor
Hath leaped into my seat—the thought whereof
Doth, like a poisonous mineral, gnaw my inwards,
And nothing can or shall content my soul
Till I am evened with him, wife for wife,
Or, failing so, yet that I put the Moor
At least into a jealousy so strong
That judgment cannot cure. Which thing to do,
If this poor trash of Venice, whom I trace
For his quick hunting, stand the putting on,
I’ll have our Michael Cassio on the hip,
Abuse him to the Moor in the rank garb
(For I fear Cassio with my nightcap too),
Make the Moor thank me, love me, and reward me
For making him egregiously an ass
And practicing upon his peace and quiet
Even to madness. ’Tis here, but yet confused.
Knavery’s plain face is never seen till used.
He exits.



Scene 2
Enter Othello’s Herald with a proclamation.

HERALD  It is Othello’s pleasure, our noble and valiant
general, that upon certain tidings now arrived,
importing the mere perdition of the Turkish fleet,
every man put himself into triumph: some to
dance, some to make bonfires, each man to what
sport and revels his addition leads him. For besides
these beneficial news, it is the celebration of his
nuptial. So much was his pleasure should be proclaimed
All offices are open, and there is full
liberty of feasting from this present hour of five till
the bell have told eleven. Heaven bless the isle of
Cyprus and our noble general, Othello!
He exits.



Scene 3
Enter Othello, Desdemona, Cassio, and Attendants.

OTHELLO
Good Michael, look you to the guard tonight.
Let’s teach ourselves that honorable stop
Not to outsport discretion.
CASSIO
Iago hath direction what to do,
But notwithstanding, with my personal eye
Will I look to ’t.
OTHELLO  Iago is most honest.
Michael, goodnight. Tomorrow with your earliest
Let me have speech with you. To Desdemona. Come,
my dear love,
The purchase made, the fruits are to ensue;
That profit’s yet to come ’tween me and you.—
Goodnight.
Othello and Desdemona exit, with Attendants.

Enter Iago.

CASSIO
Welcome, Iago. We must to the watch.
IAGO  Not this hour, lieutenant. ’Tis not yet ten o’ th’
clock. Our general cast us thus early for the love of
his Desdemona—who let us not therefore blame;
he hath not yet made wanton the night with her, and
she is sport for Jove.
CASSIO  She’s a most exquisite lady.
IAGO  And, I’ll warrant her, full of game.
CASSIO  Indeed, she’s a most fresh and delicate
creature.
IAGO  What an eye she has! Methinks it sounds a parley
to provocation.
CASSIO  An inviting eye, and yet methinks right
modest.
IAGO  And when she speaks, is it not an alarum to love?
CASSIO  She is indeed perfection.
IAGO  Well, happiness to their sheets! Come, lieutenant,
I have a stoup of wine; and here without are a
brace of Cyprus gallants that would fain have a
measure to the health of black Othello.
CASSIO  Not tonight, good Iago. I have very poor and
unhappy brains for drinking. I could well wish
courtesy would invent some other custom of
entertainment.
IAGO  O, they are our friends! But one cup; I’ll drink
for you.
CASSIO  I have drunk but one cup tonight, and that was
craftily qualified too, and behold what innovation it
makes here. I am unfortunate in the infirmity and
dare not task my weakness with any more.
IAGO  What, man! ’Tis a night of revels. The gallants
desire it.
CASSIO  Where are they?
IAGO  Here at the door. I pray you, call them in.
CASSIO  I’ll do ’t, but it dislikes me.He exits.
IAGO
If I can fasten but one cup upon him
With that which he hath drunk tonight already,
He’ll be as full of quarrel and offense
As my young mistress’ dog. Now my sick fool
Roderigo,
Whom love hath turned almost the wrong side out,
To Desdemona hath tonight caroused
Potations pottle-deep; and he’s to watch.
Three else of Cyprus, noble swelling spirits
That hold their honors in a wary distance,
The very elements of this warlike isle,
Have I tonight flustered with flowing cups;
And they watch too. Now, ’mongst this flock of
drunkards
Am I to put our Cassio in some action
That may offend the isle. But here they come.
If consequence do but approve my dream,
My boat sails freely both with wind and stream.

Enter Cassio, Montano, and Gentlemen, followed by
Servants with wine.

CASSIO  ’Fore God, they have given me a rouse
already.
MONTANO  Good faith, a little one; not past a pint, as I
am a soldier.
IAGO  Some wine, ho!
  And let me the cannikin clink, clink,
 And let me the cannikin clink.
  A soldier’s a man,
  O, man’s life’s but a span,
 Why, then, let a soldier drink.
Some wine, boys!
CASSIO  ’Fore God, an excellent song.
IAGO  I learned it in England, where indeed they are
most potent in potting. Your Dane, your German,
and your swag-bellied Hollander—drink, ho!—are
nothing to your English.
CASSIO  Is your Englishman so exquisite in his
drinking?
IAGO  Why, he drinks you, with facility, your Dane
dead drunk. He sweats not to overthrow your Almain.
He gives your Hollander a vomit ere the next
pottle can be filled.
CASSIO  To the health of our general!
MONTANO  I am for it, lieutenant, and I’ll do you
justice.
IAGO  O sweet England!
  King Stephen was and-a worthy peer,
  His breeches cost him but a crown;
 He held them sixpence all too dear;
  With that he called the tailor lown.
 He was a wight of high renown,
  And thou art but of low degree;
 ’Tis pride that pulls the country down,
  Then take thy auld cloak about thee.
Some wine, ho!
CASSIO  ’Fore God, this is a more exquisite song than
the other!
IAGO  Will you hear ’t again?
CASSIO  No, for I hold him to be unworthy of his place
that does those things. Well, God’s above all; and
there be souls must be saved, and there be souls
must not be saved.
IAGO  It’s true, good lieutenant.
CASSIO  For mine own part—no offense to the General,
nor any man of quality—I hope to be saved.
IAGO  And so do I too, lieutenant.
CASSIO  Ay, but, by your leave, not before me. The
Lieutenant is to be saved before the Ancient. Let’s
have no more of this. Let’s to our affairs. God
forgive us our sins! Gentlemen, let’s look to our
business. Do not think, gentlemen, I am drunk. This
is my ancient, this is my right hand, and this is my
left. I am not drunk now. I can stand well enough,
and I speak well enough.
GENTLEMEN  Excellent well.
CASSIO  Why, very well then. You must not think then
that I am drunk.He exits.
MONTANO
To th’ platform, masters. Come, let’s set the watch.
Gentlemen exit.
IAGO, to Montano
You see this fellow that is gone before?
He’s a soldier fit to stand by Caesar
And give direction; and do but see his vice.
’Tis to his virtue a just equinox,
The one as long as th’ other. ’Tis pity of him.
I fear the trust Othello puts him in,
On some odd time of his infirmity,
Will shake this island.
MONTANO  But is he often thus?
IAGO
’Tis evermore the prologue to his sleep.
He’ll watch the horologe a double set
If drink rock not his cradle.
MONTANO  It were well
The General were put in mind of it.
Perhaps he sees it not, or his good nature
Prizes the virtue that appears in Cassio
And looks not on his evils. Is not this true?
Enter Roderigo.

IAGO, aside to Roderigo  How now, Roderigo?
I pray you, after the Lieutenant, go.
Roderigo exits.
MONTANO
And ’tis great pity that the noble Moor
Should hazard such a place as his own second
With one of an engraffed infirmity.
It were an honest action to say so
To the Moor.
IAGO  Not I, for this fair island.
I do love Cassio well and would do much
To cure him of this evil—“Help, help!” within.
But hark! What noise?

Enter Cassio, pursuing Roderigo.

CASSIO  Zounds, you rogue, you rascal!
MONTANO  What’s the matter, lieutenant?
CASSIO  A knave teach me my duty? I’ll beat the knave
into a twiggen bottle.
RODERIGO  Beat me?
CASSIO  Dost thou prate, rogue?He hits Roderigo.
MONTANO  Nay, good lieutenant. I pray you, sir, hold
your hand.
CASSIO  Let me go, sir, or I’ll knock you o’er the
mazard.
MONTANO  Come, come, you’re drunk.
CASSIO  Drunk?
They fight.
IAGO, aside to Roderigo
Away, I say! Go out and cry a mutiny.
Roderigo exits.
Nay, good lieutenant.—God’s will, gentlemen!—
Help, ho! Lieutenant—sir—Montano—sir—
Help, masters!—Here’s a goodly watch indeed!
A bell is rung.
Who’s that which rings the bell? Diablo, ho!
The town will rise. God’s will, lieutenant, hold!
You will be shamed forever.

Enter Othello and Attendants.

OTHELLO
What is the matter here?
MONTANO  Zounds, I bleed
still.
I am hurt to th’ death. He dies!He attacks Cassio.
OTHELLO  Hold, for your lives!
IAGO
Hold, ho! Lieutenant—sir—Montano—
gentlemen—
Have you forgot all sense of place and duty?
Hold! The General speaks to you. Hold, for shame!
OTHELLO
Why, how now, ho! From whence ariseth this?
Are we turned Turks, and to ourselves do that
Which heaven hath forbid the Ottomites?
For Christian shame, put by this barbarous brawl!
He that stirs next to carve for his own rage
Holds his soul light; he dies upon his motion.
Silence that dreadful bell. It frights the isle
From her propriety. What is the matter, masters?
Honest Iago, that looks dead with grieving,
Speak. Who began this? On thy love, I charge thee.
IAGO
I do not know. Friends all but now, even now,
In quarter and in terms like bride and groom
Divesting them for bed; and then but now,
As if some planet had unwitted men,
Swords out, and tilting one at other’s breast,
In opposition bloody. I cannot speak
Any beginning to this peevish odds,
And would in action glorious I had lost
Those legs that brought me to a part of it!
OTHELLO
How comes it, Michael, you are thus forgot?
CASSIO
I pray you pardon me; I cannot speak.
OTHELLO
Worthy Montano, you were wont be civil.
The gravity and stillness of your youth
The world hath noted. And your name is great
In mouths of wisest censure. What’s the matter
That you unlace your reputation thus,
And spend your rich opinion for the name
Of a night-brawler? Give me answer to it.
MONTANO
Worthy Othello, I am hurt to danger.
Your officer Iago can inform you,
While I spare speech, which something now offends
me,
Of all that I do know; nor know I aught
By me that’s said or done amiss this night,
Unless self-charity be sometimes a vice,
And to defend ourselves it be a sin
When violence assails us.
OTHELLO  Now, by heaven,
My blood begins my safer guides to rule,
And passion, having my best judgment collied,
Assays to lead the way. Zounds, if I stir,
Or do but lift this arm, the best of you
Shall sink in my rebuke. Give me to know
How this foul rout began, who set it on;
And he that is approved in this offense,
Though he had twinned with me, both at a birth,
Shall lose me. What, in a town of war
Yet wild, the people’s hearts brimful of fear,
To manage private and domestic quarrel,
In night, and on the court and guard of safety?
’Tis monstrous. Iago, who began ’t?
MONTANO
If partially affined, or leagued in office,
Thou dost deliver more or less than truth,
Thou art no soldier.
IAGO  Touch me not so near.
I had rather have this tongue cut from my mouth
Than it should do offense to Michael Cassio.
Yet I persuade myself, to speak the truth
Shall nothing wrong him. Thus it is, general:
Montano and myself being in speech,
There comes a fellow crying out for help,
And Cassio following him with determined sword
To execute upon him. Sir, this gentleman

Steps in to Cassio and entreats his pause.
Myself the crying fellow did pursue,
Lest by his clamor—as it so fell out—
The town might fall in fright. He, swift of foot,
Outran my purpose, and I returned the rather
For that I heard the clink and fall of swords
And Cassio high in oath, which till tonight
I ne’er might say before. When I came back—
For this was brief—I found them close together
At blow and thrust, even as again they were
When you yourself did part them.
More of this matter cannot I report.
But men are men; the best sometimes forget.
Though Cassio did some little wrong to him,
As men in rage strike those that wish them best,
Yet surely Cassio, I believe, received
From him that fled some strange indignity
Which patience could not pass.
OTHELLO  I know, Iago,
Thy honesty and love doth mince this matter,
Making it light to Cassio.—Cassio, I love thee,
But nevermore be officer of mine.
Enter Desdemona attended.

Look if my gentle love be not raised up!
I’ll make thee an example.
DESDEMONA
What is the matter, dear?
OTHELLO  All’s well now,
sweeting.
Come away to bed. To Montano. Sir, for your hurts,
Myself will be your surgeon.—Lead him off.
Montano is led off.
Iago, look with care about the town
And silence those whom this vile brawl
distracted.—
Come, Desdemona. ’Tis the soldier’s life
To have their balmy slumbers waked with strife.
All but Iago and Cassio exit.
IAGO  What, are you hurt, lieutenant?
CASSIO  Ay, past all surgery.
IAGO  Marry, God forbid!
CASSIO  Reputation, reputation, reputation! O, I have
lost my reputation! I have lost the immortal part of
myself, and what remains is bestial. My reputation,
Iago, my reputation!
IAGO  As I am an honest man, I thought you had
received some bodily wound. There is more sense
in that than in reputation. Reputation is an idle and
most false imposition, oft got without merit and lost
without deserving. You have lost no reputation at
all, unless you repute yourself such a loser. What,
man, there are ways to recover the General again!
You are but now cast in his mood—a punishment
more in policy than in malice, even so as one would
beat his offenseless dog to affright an imperious
lion. Sue to him again and he’s yours.
CASSIO  I will rather sue to be despised than to deceive
so good a commander with so slight, so drunken,
and so indiscreet an officer. Drunk? And speak
parrot? And squabble? Swagger? Swear? And discourse
fustian with one’s own shadow? O thou
invisible spirit of wine, if thou hast no name to be
known by, let us call thee devil!
IAGO  What was he that you followed with your sword?
What had he done to you?
CASSIO  I know not.
IAGO  Is ’t possible?
CASSIO  I remember a mass of things, but nothing
distinctly; a quarrel, but nothing wherefore. O
God, that men should put an enemy in their
mouths to steal away their brains! That we should
with joy, pleasance, revel, and applause transform
ourselves into beasts!
IAGO  Why, but you are now well enough. How came
you thus recovered?
CASSIO  It hath pleased the devil drunkenness to give
place to the devil wrath. One unperfectness shows
me another, to make me frankly despise myself.
IAGO  Come, you are too severe a moraler. As the time,
the place, and the condition of this country stands,
I could heartily wish this had not so befallen. But
since it is as it is, mend it for your own good.
CASSIO  I will ask him for my place again; he shall tell
me I am a drunkard! Had I as many mouths as
Hydra, such an answer would stop them all. To be
now a sensible man, by and by a fool, and presently
a beast! O, strange! Every inordinate cup is unblessed,
and the ingredient is a devil.
IAGO  Come, come, good wine is a good familiar creature,
if it be well used. Exclaim no more against it.
And, good lieutenant, I think you think I love you.
CASSIO  I have well approved it, sir.—I drunk!
IAGO  You or any man living may be drunk at a time,
man. I’ll tell you what you shall do. Our general’s
wife is now the general: I may say so in this
respect, for that he hath devoted and given up
himself to the contemplation, mark, and denotement
of her parts and graces. Confess yourself
freely to her. Importune her help to put you in your
place again. She is of so free, so kind, so apt, so
blessed a disposition she holds it a vice in her
goodness not to do more than she is requested. This
broken joint between you and her husband entreat
her to splinter, and, my fortunes against any lay
worth naming, this crack of your love shall grow
stronger than it was before.
CASSIO  You advise me well.
IAGO  I protest, in the sincerity of love and honest
kindness.
CASSIO  I think it freely; and betimes in the morning I
will beseech the virtuous Desdemona to undertake
for me. I am desperate of my fortunes if they check
me here.
IAGO  You are in the right. Good night, lieutenant. I
must to the watch.
CASSIO  Good night, honest Iago.Cassio exits.
IAGO
And what’s he, then, that says I play the villain,
When this advice is free I give and honest,
Probal to thinking, and indeed the course
To win the Moor again? For ’tis most easy
Th’ inclining Desdemona to subdue
In any honest suit. She’s framed as fruitful
As the free elements. And then for her
To win the Moor—were ’t to renounce his baptism,
All seals and symbols of redeemèd sin—
His soul is so enfettered to her love
That she may make, unmake, do what she list,
Even as her appetite shall play the god
With his weak function. How am I then a villain
To counsel Cassio to this parallel course
Directly to his good? Divinity of hell!
When devils will the blackest sins put on,
They do suggest at first with heavenly shows,
As I do now. For whiles this honest fool
Plies Desdemona to repair his fortune,
And she for him pleads strongly to the Moor,
I’ll pour this pestilence into his ear:
That she repeals him for her body’s lust;
And by how much she strives to do him good,
She shall undo her credit with the Moor.
So will I turn her virtue into pitch,
And out of her own goodness make the net
That shall enmesh them all.

Enter Roderigo.

How now, Roderigo?
RODERIGO  I do follow here in the chase, not like a
hound that hunts, but one that fills up the cry. My
money is almost spent, I have been tonight exceedingly
well cudgeled, and I think the issue will be I
shall have so much experience for my pains, and so,
with no money at all and a little more wit, return
again to Venice.
IAGO
How poor are they that have not patience!
What wound did ever heal but by degrees?
Thou know’st we work by wit and not by witchcraft,
And wit depends on dilatory time.
Does ’t not go well? Cassio hath beaten thee,
And thou, by that small hurt, hast cashiered Cassio.
Though other things grow fair against the sun,
Yet fruits that blossom first will first be ripe.
Content thyself awhile. By th’ Mass, ’tis morning!
Pleasure and action make the hours seem short.
Retire thee; go where thou art billeted.
Away, I say! Thou shalt know more hereafter.
Nay, get thee gone.Roderigo exits.
Two things are to be done.
My wife must move for Cassio to her mistress.
I’ll set her on.
Myself the while to draw the Moor apart
And bring him jump when he may Cassio find
Soliciting his wife. Ay, that’s the way.
Dull not device by coldness and delay.
He exits.



ACT 3
Scene 1
Enter Cassio with Musicians.

CASSIO
Masters, play here (I will content your pains)
Something that’s brief; and bid “Good morrow,
general.”They play.

Enter the Clown.

CLOWN  Why masters, have your instruments been in
Naples, that they speak i’ th’ nose thus?
MUSICIAN  How, sir, how?
CLOWN  Are these, I pray you, wind instruments?
MUSICIAN  Ay, marry, are they, sir.
CLOWN  O, thereby hangs a tail.
MUSICIAN  Whereby hangs a tale, sir?
CLOWN  Marry, sir, by many a wind instrument that I
know. But, masters, here’s money for you; and the
General so likes your music that he desires you, for
love’s sake, to make no more noise with it.
MUSICIAN  Well, sir, we will not.
CLOWN  If you have any music that may not be heard, to
’t again. But, as they say, to hear music the General
does not greatly care.
MUSICIAN  We have none such, sir.
CLOWN  Then put up your pipes in your bag, for I’ll
away. Go, vanish into air, away!
Musicians exit.
CASSIO  Dost thou hear, mine honest friend?
CLOWN  No, I hear not your honest friend. I hear you.
CASSIO  Prithee, keep up thy quillets.Giving money.
There’s a poor piece of gold for thee. If the gentlewoman
that attends the General’s wife be stirring,
tell her there’s one Cassio entreats her a little favor
of speech. Wilt thou do this?
CLOWN  She is stirring, sir. If she will stir hither, I shall
seem to notify unto her.
CASSIO
Do, good my friend.Clown exits.

Enter Iago.

In happy time, Iago.
IAGO  You have not been abed, then?
CASSIO  Why, no. The day had broke
Before we parted. I have made bold, Iago,
To send in to your wife. My suit to her
Is that she will to virtuous Desdemona
Procure me some access.
IAGO  I’ll send her to you presently,
And I’ll devise a mean to draw the Moor
Out of the way, that your converse and business
May be more free.
CASSIO
I humbly thank you for ’t. Iago exits. I never
knew
A Florentine more kind and honest.

Enter Emilia.

EMILIA
Good morrow, good lieutenant. I am sorry
For your displeasure, but all will sure be well.
The General and his wife are talking of it,
And she speaks for you stoutly. The Moor replies
That he you hurt is of great fame in Cyprus
And great affinity, and that in wholesome wisdom
He might not but refuse you. But he protests he
loves you
And needs no other suitor but his likings
To take the safest occasion by the front
To bring you in again.
CASSIO  Yet I beseech you,
If you think fit, or that it may be done,
Give me advantage of some brief discourse
With Desdemon alone.
EMILIA  Pray you come in.
I will bestow you where you shall have time
To speak your bosom freely.
CASSIO  I am much bound to you.
They exit.



Scene 2
Enter Othello, Iago, and Gentlemen.

OTHELLO
These letters give, Iago, to the pilot
And by him do my duties to the Senate.
He gives Iago some papers.
That done, I will be walking on the works.
Repair there to me.
IAGO  Well, my good lord, I’ll do ’t.
OTHELLO
This fortification, gentlemen, shall we see ’t?
GENTLEMEN
We wait upon your Lordship.
They exit.



Scene 3
Enter Desdemona, Cassio, and Emilia.

DESDEMONA
Be thou assured, good Cassio, I will do
All my abilities in thy behalf.
EMILIA
Good madam, do. I warrant it grieves my husband
As if the cause were his.
DESDEMONA
O, that’s an honest fellow! Do not doubt, Cassio,
But I will have my lord and you again
As friendly as you were.
CASSIO  Bounteous madam,
Whatever shall become of Michael Cassio,
He’s never anything but your true servant.
DESDEMONA
I know ’t. I thank you. You do love my lord;
You have known him long; and be you well assured
He shall in strangeness stand no farther off
Than in a politic distance.
CASSIO  Ay, but, lady,
That policy may either last so long,
Or feed upon such nice and waterish diet,
Or breed itself so out of circumstance,
That, I being absent and my place supplied,
My general will forget my love and service.
DESDEMONA
Do not doubt that. Before Emilia here,
I give thee warrant of thy place. Assure thee,
If I do vow a friendship, I’ll perform it
To the last article. My lord shall never rest:
I’ll watch him tame and talk him out of patience;
His bed shall seem a school, his board a shrift;
I’ll intermingle everything he does
With Cassio’s suit. Therefore be merry, Cassio,
For thy solicitor shall rather die
Than give thy cause away.

Enter Othello and Iago.

EMILIA  Madam, here comes my lord.
CASSIO  Madam, I’ll take my leave.
DESDEMONA  Why, stay, and hear me speak.
CASSIO
Madam, not now. I am very ill at ease,
Unfit for mine own purposes.
DESDEMONA  Well, do your discretion.Cassio exits.
IAGO
Ha, I like not that.
OTHELLO  What dost thou say?
IAGO
Nothing, my lord; or if—I know not what.
OTHELLO
Was not that Cassio parted from my wife?
IAGO
Cassio, my lord? No, sure, I cannot think it
That he would steal away so guiltylike,
Seeing your coming.
OTHELLO  I do believe ’twas he.
DESDEMONA  How now, my lord?
I have been talking with a suitor here,
A man that languishes in your displeasure.
OTHELLO  Who is ’t you mean?
DESDEMONA
Why, your lieutenant, Cassio. Good my lord,
If I have any grace or power to move you,
His present reconciliation take;
For if he be not one that truly loves you,
That errs in ignorance and not in cunning,
I have no judgment in an honest face.
I prithee call him back.
OTHELLO  Went he hence now?
DESDEMONA  Yes, faith, so humbled
That he hath left part of his grief with me
To suffer with him. Good love, call him back.
OTHELLO
Not now, sweet Desdemon. Some other time.
DESDEMONA
But shall ’t be shortly?
OTHELLO  The sooner, sweet, for you.
DESDEMONA
Shall ’t be tonight at supper?
OTHELLO  No, not tonight.
DESDEMONA  Tomorrow dinner, then?
OTHELLO  I shall not dine at home;
I meet the captains at the citadel.
DESDEMONA
Why then tomorrow night, or Tuesday morn,
On Tuesday noon or night; on Wednesday morn.
I prithee name the time, but let it not
Exceed three days. In faith, he’s penitent;
And yet his trespass, in our common reason—
Save that, they say, the wars must make example
Out of her best—is not almost a fault
T’ incur a private check. When shall he come?
Tell me, Othello. I wonder in my soul
What you would ask me that I should deny,
Or stand so mamm’ring on? What? Michael Cassio,
That came a-wooing with you, and so many a time,
When I have spoke of you dispraisingly,
Hath ta’en your part—to have so much to do
To bring him in! By ’r Lady, I could do much—
OTHELLO
Prithee, no more. Let him come when he will;
I will deny thee nothing.
DESDEMONA  Why, this is not a boon!
’Tis as I should entreat you wear your gloves,
Or feed on nourishing dishes, or keep you warm,
Or sue to you to do a peculiar profit
To your own person. Nay, when I have a suit
Wherein I mean to touch your love indeed,
It shall be full of poise and difficult weight,
And fearful to be granted.
OTHELLO  I will deny thee nothing!
Whereon, I do beseech thee, grant me this,
To leave me but a little to myself.
DESDEMONA
Shall I deny you? No. Farewell, my lord.
OTHELLO
Farewell, my Desdemona. I’ll come to thee straight.
DESDEMONA
Emilia, come.—Be as your fancies teach you.
Whate’er you be, I am obedient.
Desdemona and Emilia exit.
OTHELLO
Excellent wretch! Perdition catch my soul
But I do love thee! And when I love thee not,
Chaos is come again.
IAGO  My noble lord—
OTHELLO
What dost thou say, Iago?
IAGO  Did Michael Cassio,
When you wooed my lady, know of your love?
OTHELLO
He did, from first to last. Why dost thou ask?
IAGO
But for a satisfaction of my thought,
No further harm.
OTHELLO  Why of thy thought, Iago?
IAGO
I did not think he had been acquainted with her.
OTHELLO
O yes, and went between us very oft.
IAGO  Indeed?
OTHELLO
Indeed? Ay, indeed! Discern’st thou aught in that?
Is he not honest?
IAGO  Honest, my lord?
OTHELLO  Honest—ay, honest.
IAGO
My lord, for aught I know.
OTHELLO  What dost thou think?
IAGO  Think, my lord?
OTHELLO
“Think, my lord?” By heaven, thou echo’st me
As if there were some monster in thy thought
Too hideous to be shown. Thou dost mean
something.
I heard thee say even now, thou lik’st not that,
When Cassio left my wife. What didst not like?
And when I told thee he was of my counsel
In my whole course of wooing, thou cried’st
“Indeed?”
And didst contract and purse thy brow together
As if thou then hadst shut up in thy brain
Some horrible conceit. If thou dost love me,
Show me thy thought.
IAGO  My lord, you know I love you.
OTHELLO  I think thou dost;
And for I know thou ’rt full of love and honesty
And weigh’st thy words before thou giv’st them
breath,
Therefore these stops of thine fright me the more.
For such things in a false, disloyal knave
Are tricks of custom; but in a man that’s just,
They’re close dilations working from the heart
That passion cannot rule.
IAGO  For Michael Cassio,
I dare be sworn I think that he is honest.
OTHELLO
I think so too.
IAGO  Men should be what they seem;
Or those that be not, would they might seem none!
OTHELLO  Certain, men should be what they seem.
IAGO
Why then, I think Cassio’s an honest man.
OTHELLO  Nay, yet there’s more in this.
I prithee speak to me as to thy thinkings,
As thou dost ruminate, and give thy worst of
thoughts
The worst of words.
IAGO  Good my lord, pardon me.
Though I am bound to every act of duty,
I am not bound to that all slaves are free to.
Utter my thoughts? Why, say they are vile and
false—
As where’s that palace whereinto foul things
Sometimes intrude not? Who has that breast so
pure
But some uncleanly apprehensions
Keep leets and law days and in sessions sit
With meditations lawful?
OTHELLO
Thou dost conspire against thy friend, Iago,
If thou but think’st him wronged and mak’st his ear
A stranger to thy thoughts.
IAGO  I do beseech you,
Though I perchance am vicious in my guess—
As, I confess, it is my nature’s plague
To spy into abuses, and oft my jealousy
Shapes faults that are not—that your wisdom
From one that so imperfectly conceits
Would take no notice, nor build yourself a trouble
Out of his scattering and unsure observance.
It were not for your quiet nor your good,
Nor for my manhood, honesty, and wisdom,
To let you know my thoughts.
OTHELLO  What dost thou mean?
IAGO
Good name in man and woman, dear my lord,
Is the immediate jewel of their souls.
Who steals my purse steals trash. ’Tis something,
nothing;
’Twas mine, ’tis his, and has been slave to
thousands.
But he that filches from me my good name
Robs me of that which not enriches him
And makes me poor indeed.
OTHELLO  By heaven, I’ll know thy thoughts.
IAGO
You cannot, if my heart were in your hand,
Nor shall not, whilst ’tis in my custody.
OTHELLO
Ha?
IAGO  O, beware, my lord, of jealousy!
It is the green-eyed monster which doth mock
The meat it feeds on. That cuckold lives in bliss
Who, certain of his fate, loves not his wronger;
But O, what damnèd minutes tells he o’er
Who dotes, yet doubts; suspects, yet strongly loves!
OTHELLO  O misery!
IAGO
Poor and content is rich, and rich enough;
But riches fineless is as poor as winter
To him that ever fears he shall be poor.
Good God, the souls of all my tribe defend
From jealousy!
OTHELLO  Why, why is this?
Think’st thou I’d make a life of jealousy,
To follow still the changes of the moon
With fresh suspicions? No. To be once in doubt
Is once to be resolved. Exchange me for a goat
When I shall turn the business of my soul
To such exsufflicate and blown surmises,
Matching thy inference. ’Tis not to make me jealous
To say my wife is fair, feeds well, loves company,
Is free of speech, sings, plays, and dances well.
Where virtue is, these are more virtuous.
Nor from mine own weak merits will I draw
The smallest fear or doubt of her revolt,
For she had eyes, and chose me. No, Iago,
I’ll see before I doubt; when I doubt, prove;
And on the proof, there is no more but this:
Away at once with love or jealousy.
IAGO
I am glad of this, for now I shall have reason
To show the love and duty that I bear you
With franker spirit. Therefore, as I am bound,
Receive it from me. I speak not yet of proof.
Look to your wife; observe her well with Cassio;
Wear your eyes thus, not jealous nor secure.
I would not have your free and noble nature,
Out of self-bounty, be abused. Look to ’t.
I know our country disposition well.
In Venice they do let God see the pranks
They dare not show their husbands. Their best
conscience
Is not to leave ’t undone, but keep ’t unknown.
OTHELLO  Dost thou say so?
IAGO
She did deceive her father, marrying you,
And when she seemed to shake and fear your looks,
She loved them most.
OTHELLO  And so she did.
IAGO  Why, go to, then!
She that, so young, could give out such a seeming,
To seel her father’s eyes up close as oak,
He thought ’twas witchcraft! But I am much to
blame.
I humbly do beseech you of your pardon
For too much loving you.
OTHELLO  I am bound to thee forever.
IAGO
I see this hath a little dashed your spirits.
OTHELLO
Not a jot, not a jot.
IAGO  I’ faith, I fear it has.
I hope you will consider what is spoke
Comes from my love. But I do see you’re moved.
I am to pray you not to strain my speech
To grosser issues nor to larger reach
Than to suspicion.
OTHELLO  I will not.
IAGO  Should you do so, my lord,
My speech should fall into such vile success
As my thoughts aim not at. Cassio’s my worthy
friend.
My lord, I see you’re moved.
OTHELLO  No, not much moved.
I do not think but Desdemona’s honest.
IAGO
Long live she so! And long live you to think so!
OTHELLO
And yet, how nature erring from itself—
IAGO
Ay, there’s the point. As, to be bold with you,
Not to affect many proposèd matches
Of her own clime, complexion, and degree,
Whereto we see in all things nature tends—
Foh! One may smell in such a will most rank,
Foul disproportion, thoughts unnatural—
But pardon me—I do not in position
Distinctly speak of her, though I may fear
Her will, recoiling to her better judgment,
May fall to match you with her country forms
And happily repent.
OTHELLO  Farewell, farewell!
If more thou dost perceive, let me know more.
Set on thy wife to observe. Leave me, Iago.
IAGO, beginning to exit  My lord, I take my leave.
OTHELLO
Why did I marry? This honest creature doubtless
Sees and knows more, much more, than he unfolds.
IAGO, returning
My lord, I would I might entreat your Honor
To scan this thing no farther. Leave it to time.
Although ’tis fit that Cassio have his place—
For sure he fills it up with great ability—
Yet, if you please to hold him off awhile,
You shall by that perceive him and his means.
Note if your lady strain his entertainment
With any strong or vehement importunity.
Much will be seen in that. In the meantime,
Let me be thought too busy in my fears—
As worthy cause I have to fear I am—
And hold her free, I do beseech your Honor.
OTHELLO  Fear not my government.
IAGO  I once more take my leave.He exits.
OTHELLO
This fellow’s of exceeding honesty,
And knows all qualities with a learnèd spirit
Of human dealings. If I do prove her haggard,
Though that her jesses were my dear heartstrings,
I’d whistle her off and let her down the wind
To prey at fortune. Haply, for I am black
And have not those soft parts of conversation
That chamberers have, or for I am declined
Into the vale of years—yet that’s not much—
She’s gone, I am abused, and my relief
Must be to loathe her. O curse of marriage,
That we can call these delicate creatures ours
And not their appetites! I had rather be a toad
And live upon the vapor of a dungeon
Than keep a corner in the thing I love
For others’ uses. Yet ’tis the plague of great ones;
Prerogatived are they less than the base.
’Tis destiny unshunnable, like death.
Even then this forkèd plague is fated to us
When we do quicken. Look where she comes.

Enter Desdemona and Emilia.

If she be false, heaven mocks itself!
I’ll not believe ’t.
DESDEMONA  How now, my dear Othello?
Your dinner, and the generous islanders
By you invited, do attend your presence.
OTHELLO  I am to blame.
DESDEMONA
Why do you speak so faintly? Are you not well?
OTHELLO
I have a pain upon my forehead, here.
DESDEMONA
Faith, that’s with watching. ’Twill away again.
Let me but bind it hard; within this hour
It will be well.
OTHELLO  Your napkin is too little.
Let it alone.The handkerchief falls, unnoticed.
Come, I’ll go in with you.
DESDEMONA
I am very sorry that you are not well.
Othello and Desdemona exit.
EMILIA, picking up the handkerchief
I am glad I have found this napkin.
This was her first remembrance from the Moor.
My wayward husband hath a hundred times
Wooed me to steal it. But she so loves the token
(For he conjured her she should ever keep it)
That she reserves it evermore about her
To kiss and talk to. I’ll have the work ta’en out
And give ’t Iago. What he will do with it
Heaven knows, not I.
I nothing but to please his fantasy.

Enter Iago.

IAGO  How now? What do you here alone?
EMILIA
Do not you chide. I have a thing for you.
IAGO
You have a thing for me? It is a common thing—
EMILIA  Ha?
IAGO  To have a foolish wife.
EMILIA
O, is that all? What will you give me now
For that same handkerchief?
IAGO  What handkerchief?
EMILIA  What handkerchief?
Why, that the Moor first gave to Desdemona,
That which so often you did bid me steal.
IAGO  Hast stol’n it from her?
EMILIA
No, faith, she let it drop by negligence,
And to th’ advantage I, being here, took ’t up.
Look, here ’tis.
IAGO  A good wench! Give it me.
EMILIA
What will you do with ’t, that you have been so
earnest
To have me filch it?
IAGO, snatching it  Why, what is that to you?
EMILIA
If it be not for some purpose of import,
Give ’t me again. Poor lady, she’ll run mad
When she shall lack it.
IAGO  Be not acknown on ’t.
I have use for it. Go, leave me.Emilia exits.
I will in Cassio’s lodging lose this napkin
And let him find it. Trifles light as air
Are to the jealous confirmations strong
As proofs of holy writ. This may do something.
The Moor already changes with my poison;
Dangerous conceits are in their natures poisons,
Which at the first are scarce found to distaste,
But with a little act upon the blood
Burn like the mines of sulfur.

Enter Othello.

I did say so.
Look where he comes. Not poppy nor mandragora
Nor all the drowsy syrups of the world
Shall ever medicine thee to that sweet sleep
Which thou owedst yesterday.
OTHELLO  Ha, ha, false to me?
IAGO
Why, how now, general? No more of that!
OTHELLO
Avaunt! Begone! Thou hast set me on the rack.
I swear ’tis better to be much abused
Than but to know ’t a little.
IAGO  How now, my lord?
OTHELLO
What sense had I of her stol’n hours of lust?
I saw ’t not, thought it not; it harmed not me.
I slept the next night well, fed well, was free and
merry.
I found not Cassio’s kisses on her lips.
He that is robbed, not wanting what is stol’n,
Let him not know ’t, and he’s not robbed at all.
IAGO  I am sorry to hear this.
OTHELLO
I had been happy if the general camp,
Pioners and all, had tasted her sweet body,
So I had nothing known. O, now, forever
Farewell the tranquil mind! Farewell content!
Farewell the plumèd troops and the big wars
That makes ambition virtue! O, farewell!
Farewell the neighing steed and the shrill trump,
The spirit-stirring drum, th’ ear-piercing fife,
The royal banner, and all quality,
Pride, pomp, and circumstance of glorious war!
And O you mortal engines, whose rude throats
Th’ immortal Jove’s dread clamors counterfeit,
Farewell! Othello’s occupation’s gone!
IAGO  Is ’t possible, my lord?
OTHELLO
Villain, be sure thou prove my love a whore!
Be sure of it. Give me the ocular proof,
Or, by the worth of mine eternal soul,
Thou hadst been better have been born a dog
Than answer my waked wrath.
IAGO  Is ’t come to this?
OTHELLO
Make me to see ’t, or at the least so prove it
That the probation bear no hinge nor loop
To hang a doubt on, or woe upon thy life!
IAGO  My noble lord—
OTHELLO
If thou dost slander her and torture me,
Never pray more. Abandon all remorse;
On horror’s head horrors accumulate;
Do deeds to make heaven weep, all Earth amazed;
For nothing canst thou to damnation add
Greater than that.
IAGO  O grace! O heaven forgive me!
Are you a man? Have you a soul or sense?
God b’ wi’ you. Take mine office.—O wretched fool,
That liv’st to make thine honesty a vice!—
O monstrous world! Take note, take note, O world:
To be direct and honest is not safe.—
I thank you for this profit, and from hence
I’ll love no friend, sith love breeds such offense.
OTHELLO  Nay, stay. Thou shouldst be honest.
IAGO
I should be wise; for honesty’s a fool
And loses that it works for.
OTHELLO  By the world,
I think my wife be honest and think she is not.
I think that thou art just and think thou art not.
I’ll have some proof! Her name, that was as fresh
As Dian’s visage, is now begrimed and black
As mine own face. If there be cords, or knives,
Poison, or fire, or suffocating streams,
I’ll not endure it. Would I were satisfied!
IAGO
I see you are eaten up with passion.
I do repent me that I put it to you.
You would be satisfied?
OTHELLO  Would? Nay, and I will.
IAGO
And may; but how? How satisfied, my lord?
Would you, the supervisor, grossly gape on,
Behold her topped?
OTHELLO  Death and damnation! O!
IAGO
It were a tedious difficulty, I think,
To bring them to that prospect. Damn them then
If ever mortal eyes do see them bolster
More than their own! What then? How then?
What shall I say? Where’s satisfaction?
It is impossible you should see this,
Were they as prime as goats, as hot as monkeys,
As salt as wolves in pride, and fools as gross
As ignorance made drunk. But yet I say,
If imputation and strong circumstances
Which lead directly to the door of truth
Will give you satisfaction, you might have ’t.
OTHELLO
Give me a living reason she’s disloyal.
IAGO  I do not like the office,
But sith I am entered in this cause so far,
Pricked to ’t by foolish honesty and love,
I will go on. I lay with Cassio lately,
And being troubled with a raging tooth
I could not sleep. There are a kind of men
So loose of soul that in their sleeps will mutter
Their affairs. One of this kind is Cassio.
In sleep I heard him say “Sweet Desdemona,
Let us be wary, let us hide our loves.”
And then, sir, would he gripe and wring my hand,
Cry “O sweet creature!” then kiss me hard,
As if he plucked up kisses by the roots
That grew upon my lips; then laid his leg
O’er my thigh, and sighed, and kissed, and then
Cried “Cursèd fate that gave thee to the Moor!”
OTHELLO
O monstrous! Monstrous!
IAGO  Nay, this was but his
dream.
OTHELLO
But this denoted a foregone conclusion.
’Tis a shrewd doubt, though it be but a dream.
IAGO
And this may help to thicken other proofs
That do demonstrate thinly.
OTHELLO  I’ll tear her all to pieces.
IAGO
Nay, but be wise. Yet we see nothing done.
She may be honest yet. Tell me but this:
Have you not sometimes seen a handkerchief
Spotted with strawberries in your wife’s hand?
OTHELLO
I gave her such a one. ’Twas my first gift.
IAGO
I know not that; but such a handkerchief—
I am sure it was your wife’s—did I today
See Cassio wipe his beard with.
OTHELLO  If it be that—
IAGO
If it be that, or any that was hers,
It speaks against her with the other proofs.
OTHELLO
O, that the slave had forty thousand lives!
One is too poor, too weak for my revenge.
Now do I see ’tis true. Look here, Iago,
All my fond love thus do I blow to heaven.
’Tis gone.
Arise, black vengeance, from the hollow hell!
Yield up, O love, thy crown and hearted throne
To tyrannous hate! Swell, bosom, with thy fraught,
For ’tis of aspics’ tongues!
IAGO  Yet be content.
OTHELLO  O, blood, blood, blood!
IAGO
Patience, I say. Your mind perhaps may change.
OTHELLO
Never, Iago. Like to the Pontic Sea,
Whose icy current and compulsive course
Ne’er feels retiring ebb, but keeps due on
To the Propontic and the Hellespont,
Even so my bloody thoughts, with violent pace
Shall ne’er look back, ne’er ebb to humble love,
Till that a capable and wide revenge
Swallow them up. He kneels. Now by yond marble
heaven,
In the due reverence of a sacred vow,
I here engage my words.
IAGO  Do not rise yet.Iago kneels.
Witness, you ever-burning lights above,
You elements that clip us round about,
Witness that here Iago doth give up
The execution of his wit, hands, heart
To wronged Othello’s service! Let him command,
And to obey shall be in me remorse,
What bloody business ever.They rise.
OTHELLO  I greet thy love
Not with vain thanks but with acceptance
bounteous,
And will upon the instant put thee to ’t.
Within these three days let me hear thee say
That Cassio’s not alive.
IAGO  My friend is dead.
’Tis done at your request. But let her live.
OTHELLO  Damn her, lewd minx! O, damn her, damn
her!
Come, go with me apart. I will withdraw
To furnish me with some swift means of death
For the fair devil. Now art thou my lieutenant.
IAGO  I am your own forever.
They exit.



Scene 4
Enter Desdemona, Emilia, and Clown.

DESDEMONA  Do you know, sirrah, where Lieutenant
Cassio lies?
CLOWN  I dare not say he lies anywhere.
DESDEMONA  Why, man?
CLOWN  He’s a soldier, and for me to say a soldier lies,
’tis stabbing.
DESDEMONA  Go to! Where lodges he?
CLOWN  To tell you where he lodges is to tell you
where I lie.
DESDEMONA  Can anything be made of this?
CLOWN  I know not where he lodges; and for me to
devise a lodging and say he lies here, or he lies
there, were to lie in mine own throat.
DESDEMONA  Can you inquire him out, and be edified
by report?
CLOWN  I will catechize the world for him—that is,
make questions, and by them answer.
DESDEMONA  Seek him, bid him come hither. Tell him I
have moved my lord on his behalf and hope all will
be well.
CLOWN  To do this is within the compass of man’s wit,
and therefore I will attempt the doing it.
Clown exits.
DESDEMONA
Where should I lose that handkerchief, Emilia?
EMILIA  I know not, madam.
DESDEMONA
Believe me, I had rather have lost my purse
Full of crusadoes. And but my noble Moor
Is true of mind and made of no such baseness
As jealous creatures are, it were enough
To put him to ill thinking.
EMILIA  Is he not jealous?
DESDEMONA
Who, he? I think the sun where he was born
Drew all such humors from him.
EMILIA  Look where he
comes.

Enter Othello.

DESDEMONA
I will not leave him now till Cassio
Be called to him.—How is ’t with you, my lord?
OTHELLO
Well, my good lady. Aside. O, hardness to
dissemble!—
How do you, Desdemona?
DESDEMONA  Well, my good lord.
OTHELLO
Give me your hand. He takes her hand. This hand
is moist, my lady.
DESDEMONA
It yet has felt no age nor known no sorrow.
OTHELLO
This argues fruitfulness and liberal heart.
Hot, hot, and moist. This hand of yours requires
A sequester from liberty, fasting and prayer,
Much castigation, exercise devout;
For here’s a young and sweating devil here
That commonly rebels. ’Tis a good hand,
A frank one.
DESDEMONA  You may indeed say so,
For ’twas that hand that gave away my heart.
OTHELLO
A liberal hand! The hearts of old gave hands,
But our new heraldry is hands, not hearts.
DESDEMONA
I cannot speak of this. Come now, your promise.
OTHELLO  What promise, chuck?
DESDEMONA
I have sent to bid Cassio come speak with you.
OTHELLO
I have a salt and sorry rheum offends me.
Lend me thy handkerchief.
DESDEMONA  Here, my lord.
OTHELLO
That which I gave you.
DESDEMONA  I have it not about me.
OTHELLO  Not?
DESDEMONA  No, faith, my lord.
OTHELLO  That’s a fault. That handkerchief
Did an Egyptian to my mother give.
She was a charmer, and could almost read
The thoughts of people. She told her, while she kept
it,
’Twould make her amiable and subdue my father
Entirely to her love. But if she lost it,
Or made a gift of it, my father’s eye
Should hold her loathèd, and his spirits should hunt
After new fancies. She, dying, gave it me,
And bid me, when my fate would have me wived,
To give it her. I did so; and take heed on ’t,
Make it a darling like your precious eye.
To lose ’t or give ’t away were such perdition
As nothing else could match.
DESDEMONA  Is ’t possible?
OTHELLO
’Tis true. There’s magic in the web of it.
A sybil that had numbered in the world
The sun to course two hundred compasses,
In her prophetic fury sewed the work.
The worms were hallowed that did breed the silk,
And it was dyed in mummy, which the skillful
Conserved of maidens’ hearts.
DESDEMONA  I’ faith, is ’t true?
OTHELLO
Most veritable. Therefore, look to ’t well.
DESDEMONA
Then would to God that I had never seen ’t!
OTHELLO  Ha? Wherefore?
DESDEMONA
Why do you speak so startingly and rash?
OTHELLO
Is ’t lost? Is ’t gone? Speak, is ’t out o’ th’ way?
DESDEMONA  Heaven bless us!
OTHELLO  Say you?
DESDEMONA
It is not lost, but what an if it were?
OTHELLO  How?
DESDEMONA  I say it is not lost.
OTHELLO  Fetch ’t. Let me see ’t!
DESDEMONA
Why, so I can. But I will not now.
This is a trick to put me from my suit.
Pray you, let Cassio be received again.
OTHELLO
Fetch me the handkerchief! Aside. My mind
misgives.
DESDEMONA  Come, come.
You’ll never meet a more sufficient man.
OTHELLO
The handkerchief!
DESDEMONA  I pray, talk me of Cassio.
OTHELLO  The handkerchief!
DESDEMONA  A man that all his time
Hath founded his good fortunes on your love;
Shared dangers with you—
OTHELLO
The handkerchief!
DESDEMONA  I’ faith, you are to blame.
OTHELLO  Zounds!Othello exits.
EMILIA  Is not this man jealous?
DESDEMONA  I ne’er saw this before.
Sure, there’s some wonder in this handkerchief!
I am most unhappy in the loss of it.
EMILIA
’Tis not a year or two shows us a man.
They are all but stomachs, and we all but food;
They eat us hungerly, and when they are full
They belch us.

Enter Iago and Cassio.

Look you—Cassio and my husband.
IAGO, to Cassio
There is no other way; ’tis she must do ’t,
And, lo, the happiness! Go and importune her.
DESDEMONA
How now, good Cassio, what’s the news with you?
CASSIO
Madam, my former suit. I do beseech you
That by your virtuous means I may again
Exist, and be a member of his love
Whom I with all the office of my heart
Entirely honor. I would not be delayed.
If my offense be of such mortal kind
That nor my service past nor present sorrows
Nor purposed merit in futurity
Can ransom me into his love again,
But to know so must be my benefit.
So shall I clothe me in a forced content,
And shut myself up in some other course
To fortune’s alms.
DESDEMONA  Alas, thrice-gentle Cassio,
My advocation is not now in tune.
My lord is not my lord; nor should I know him
Were he in favor as in humor altered.
So help me every spirit sanctified
As I have spoken for you all my best,
And stood within the blank of his displeasure
For my free speech! You must awhile be patient.
What I can do I will; and more I will
Than for myself I dare. Let that suffice you.
IAGO
Is my lord angry?
EMILIA  He went hence but now,
And certainly in strange unquietness.
IAGO
Can he be angry? I have seen the cannon
When it hath blown his ranks into the air
And, like the devil, from his very arm
Puffed his own brother—and is he angry?
Something of moment then. I will go meet him.
There’s matter in ’t indeed if he be angry.
DESDEMONA
I prithee do so.He exits.
Something, sure, of state,
Either from Venice, or some unhatched practice
Made demonstrable here in Cyprus to him,
Hath puddled his clear spirit; and in such cases
Men’s natures wrangle with inferior things,
Though great ones are their object. ’Tis even so.
For let our finger ache, and it endues
Our other healthful members even to a sense
Of pain. Nay, we must think men are not gods,
Nor of them look for such observancy
As fits the bridal. Beshrew me much, Emilia,
I was—unhandsome warrior as I am!—
Arraigning his unkindness with my soul.
But now I find I had suborned the witness,
And he’s indicted falsely.
EMILIA  Pray heaven it be
State matters, as you think, and no conception
Nor no jealous toy concerning you.
DESDEMONA
Alas the day, I never gave him cause!
EMILIA
But jealous souls will not be answered so.
They are not ever jealous for the cause,
But jealous for they’re jealous. It is a monster
Begot upon itself, born on itself.
DESDEMONA
Heaven keep that monster from Othello’s mind!
EMILIA  Lady, amen.
DESDEMONA
I will go seek him.—Cassio, walk hereabout.
If I do find him fit, I’ll move your suit
And seek to effect it to my uttermost.
CASSIO  I humbly thank your Ladyship.
Desdemona and Emilia exit.

Enter Bianca.

BIANCA
’Save you, friend Cassio!
CASSIO  What make you from
home?
How is ’t with you, my most fair Bianca?
I’ faith, sweet love, I was coming to your house.
BIANCA
And I was going to your lodging, Cassio.
What, keep a week away? Seven days and nights,
Eightscore eight hours, and lovers’ absent hours
More tedious than the dial eightscore times?
O weary reck’ning!
CASSIO  Pardon me, Bianca.
I have this while with leaden thoughts been pressed,
But I shall in a more continuate time
Strike off this score of absence. Sweet Bianca,
Giving her Desdemona’s handkerchief.
Take me this work out.
BIANCA  O, Cassio, whence came this?
This is some token from a newer friend.
To the felt absence now I feel a cause.
Is ’t come to this? Well, well.
CASSIO  Go to, woman!
Throw your vile guesses in the devil’s teeth,
From whence you have them. You are jealous now
That this is from some mistress, some
remembrance.
No, by my faith, Bianca.
BIANCA  Why, whose is it?
CASSIO
I know not neither. I found it in my chamber.
I like the work well. Ere it be demanded,
As like enough it will, I would have it copied.
Take it, and do ’t, and leave me for this time.
BIANCA  Leave you? Wherefore?
CASSIO
I do attend here on the General,
And think it no addition, nor my wish,
To have him see me womaned.
BIANCA  Why, I pray you?
CASSIO  Not that I love you not.
BIANCA  But that you do not love me!
I pray you bring me on the way a little,
And say if I shall see you soon at night.
CASSIO
’Tis but a little way that I can bring you,
For I attend here. But I’ll see you soon.
BIANCA
’Tis very good. I must be circumstanced.
They exit.



ACT 4
Scene 1
Enter Othello and Iago.

IAGO
Will you think so?
OTHELLO  Think so, Iago?
IAGO  What,
To kiss in private?
OTHELLO  An unauthorized kiss!
IAGO
Or to be naked with her friend in bed
An hour or more, not meaning any harm?
OTHELLO
Naked in bed, Iago, and not mean harm?
It is hypocrisy against the devil!
They that mean virtuously, and yet do so,
The devil their virtue tempts, and they tempt
heaven.
IAGO
If they do nothing, ’tis a venial slip.
But if I give my wife a handkerchief—
OTHELLO  What then?
IAGO
Why then, ’tis hers, my lord, and being hers,
She may, I think, bestow ’t on any man.
OTHELLO
She is protectress of her honor, too.
May she give that?
IAGO
Her honor is an essence that’s not seen;
They have it very oft that have it not.
But for the handkerchief—
OTHELLO
By heaven, I would most gladly have forgot it.
Thou saidst—O, it comes o’er my memory
As doth the raven o’er the infectious house,
Boding to all—he had my handkerchief.
IAGO
Ay, what of that?
OTHELLO  That’s not so good now.
IAGO  What
If I had said I had seen him do you wrong?
Or heard him say (as knaves be such abroad,
Who having, by their own importunate suit
Or voluntary dotage of some mistress,
Convincèd or supplied them, cannot choose
But they must blab)—
OTHELLO  Hath he said anything?
IAGO
He hath, my lord, but be you well assured,
No more than he’ll unswear.
OTHELLO  What hath he said?
IAGO
Faith, that he did—I know not what he did.
OTHELLO  What? What?
IAGO
Lie—
OTHELLO  With her?
IAGO  With her—on her—what you will.
OTHELLO  Lie with her? Lie on her? We say “lie on her”
when they belie her. Lie with her—Zounds, that’s
fulsome! Handkerchief—confessions—handkerchief.
To confess and be hanged for his labor.
First to be hanged and then to confess—I tremble
at it. Nature would not invest herself in such shadowing
passion without some instruction. It is not
words that shakes me thus. Pish! Noses, ears, and
lips—is ’t possible? Confess—handkerchief—O,
devil!He falls in a trance.
IAGO  Work on,
My medicine, work! Thus credulous fools are
caught,
And many worthy and chaste dames even thus,
All guiltless, meet reproach.—What ho! My lord!
My lord, I say. Othello!

Enter Cassio.

How now, Cassio?
CASSIO  What’s the matter?
IAGO
My lord is fall’n into an epilepsy.
This is his second fit. He had one yesterday.
CASSIO
Rub him about the temples.
IAGO  No, forbear.
The lethargy must have his quiet course.
If not, he foams at mouth, and by and by
Breaks out to savage madness. Look, he stirs.
Do you withdraw yourself a little while.
He will recover straight. When he is gone,
I would on great occasion speak with you.
Cassio exits.
How is it, general? Have you not hurt your head?
OTHELLO
Dost thou mock me?
IAGO  I mock you not, by heaven!
Would you would bear your fortune like a man!
OTHELLO
A hornèd man’s a monster and a beast.
IAGO
There’s many a beast, then, in a populous city,
And many a civil monster.
OTHELLO
Did he confess it?
IAGO  Good sir, be a man!
Think every bearded fellow that’s but yoked
May draw with you. There’s millions now alive
That nightly lie in those unproper beds
Which they dare swear peculiar. Your case is better.
O, ’tis the spite of hell, the fiend’s arch-mock,
To lip a wanton in a secure couch
And to suppose her chaste! No, let me know,
And knowing what I am, I know what she shall be.
OTHELLO  O, thou art wise, ’tis certain.
IAGO  Stand you awhile apart.
Confine yourself but in a patient list.
Whilst you were here, o’erwhelmèd with your grief—
A passion most unsuiting such a man—
Cassio came hither. I shifted him away
And laid good ’scuses upon your ecstasy,
Bade him anon return and here speak with me,
The which he promised. Do but encave yourself,
And mark the fleers, the gibes, and notable scorns
That dwell in every region of his face.
For I will make him tell the tale anew—
Where, how, how oft, how long ago, and when
He hath and is again to cope your wife.
I say but mark his gesture. Marry, patience,
Or I shall say you’re all in all in spleen,
And nothing of a man.
OTHELLO  Dost thou hear, Iago,
I will be found most cunning in my patience,
But (dost thou hear?) most bloody.
IAGO  That’s not amiss.
But yet keep time in all. Will you withdraw?
Othello withdraws.
Now will I question Cassio of Bianca,
A huswife that by selling her desires
Buys herself bread and clothes. It is a creature
That dotes on Cassio—as ’tis the strumpet’s plague
To beguile many and be beguiled by one.
He, when he hears of her, cannot restrain
From the excess of laughter. Here he comes.

Enter Cassio.

As he shall smile, Othello shall go mad,
And his unbookish jealousy must construe
Poor Cassio’s smiles, gestures, and light behaviors
Quite in the wrong.—How do you, lieutenant?
CASSIO
The worser that you give me the addition
Whose want even kills me.
IAGO
Ply Desdemona well, and you are sure on ’t.
Now, if this suit lay in Bianca’s power,
How quickly should you speed!
CASSIO, laughing  Alas, poor caitiff!
OTHELLO  Look how he laughs already!
IAGO  I never knew woman love man so.
CASSIO
Alas, poor rogue, I think i’ faith she loves me.
OTHELLO
Now he denies it faintly and laughs it out.
IAGO
Do you hear, Cassio?
OTHELLO  Now he importunes him
To tell it o’er. Go to, well said, well said.
IAGO
She gives it out that you shall marry her.
Do you intend it?
CASSIO  Ha, ha, ha!
OTHELLO
Do you triumph, Roman? Do you triumph?
CASSIO  I marry her? What, a customer? Prithee bear
some charity to my wit! Do not think it so unwholesome.
Ha, ha, ha!
OTHELLO  So, so, so, so. They laugh that wins.
IAGO
Faith, the cry goes that you marry her.
CASSIO  Prithee say true!
IAGO  I am a very villain else.
OTHELLO  Have you scored me? Well.
CASSIO  This is the monkey’s own giving out. She is
persuaded I will marry her out of her own love and
flattery, not out of my promise.
OTHELLO
Iago beckons me. Now he begins the story.
CASSIO  She was here even now. She haunts me in
every place. I was the other day talking on the
sea-bank with certain Venetians, and thither comes
the bauble. By this hand, she falls thus about my
neck!
OTHELLO  Crying, “O dear Cassio,” as it were; his
gesture imports it.
CASSIO  So hangs and lolls and weeps upon me, so
shakes and pulls me. Ha, ha, ha!
OTHELLO  Now he tells how she plucked him to my
chamber.—O, I see that nose of yours, but not that
dog I shall throw it to.
CASSIO  Well, I must leave her company.
IAGO  Before me, look where she comes.

Enter Bianca.

CASSIO  ’Tis such another fitchew—marry, a perfumed
one!—What do you mean by this haunting
of me?
BIANCA  Let the devil and his dam haunt you! What did
you mean by that same handkerchief you gave me
even now? I was a fine fool to take it! I must take
out the work? A likely piece of work, that you
should find it in your chamber and know not who
left it there! This is some minx’s token, and I must
take out the work! There, give it your hobbyhorse.
Wheresoever you had it, I’ll take out no work on ’t.
CASSIO
How now, my sweet Bianca? How now? How now?
OTHELLO
By heaven, that should be my handkerchief!
BIANCA  If you’ll come to supper tonight you may. If
you will not, come when you are next prepared
for.She exits.
IAGO  After her, after her!
CASSIO  Faith, I must. She’ll rail in the streets else.
IAGO  Will you sup there?
CASSIO  Faith, I intend so.
IAGO  Well, I may chance to see you, for I would very
fain speak with you.
CASSIO  Prithee come. Will you?
IAGO  Go to; say no more.Cassio exits.
OTHELLO, coming forward  How shall I murder him,
Iago?
IAGO  Did you perceive how he laughed at his vice?
OTHELLO  O Iago!
IAGO  And did you see the handkerchief?
OTHELLO  Was that mine?
IAGO  Yours, by this hand! And to see how he prizes
the foolish woman your wife! She gave it him, and
he hath giv’n it his whore.
OTHELLO  I would have him nine years a-killing! A fine
woman, a fair woman, a sweet woman!
IAGO  Nay, you must forget that.
OTHELLO  Ay, let her rot and perish and be damned
tonight, for she shall not live. No, my heart is turned
to stone. I strike it, and it hurts my hand. O, the
world hath not a sweeter creature! She might lie by
an emperor’s side and command him tasks.
IAGO  Nay, that’s not your way.
OTHELLO  Hang her, I do but say what she is! So
delicate with her needle, an admirable musician—
O, she will sing the savageness out of a bear!
Of so high and plenteous wit and invention!
IAGO  She’s the worse for all this.
OTHELLO  O, a thousand, a thousand times!—And then
of so gentle a condition!
IAGO  Ay, too gentle.
OTHELLO  Nay, that’s certain. But yet the pity of it,
Iago! O, Iago, the pity of it, Iago!
IAGO  If you are so fond over her iniquity, give her
patent to offend, for if it touch not you, it comes
near nobody.
OTHELLO  I will chop her into messes! Cuckold me?
IAGO  O, ’tis foul in her.
OTHELLO  With mine officer!
IAGO  That’s fouler.
OTHELLO  Get me some poison, Iago, this night. I’ll not
expostulate with her lest her body and beauty
unprovide my mind again. This night, Iago.
IAGO  Do it not with poison. Strangle her in her bed,
even the bed she hath contaminated.
OTHELLO  Good, good. The justice of it pleases. Very
good.
IAGO  And for Cassio, let me be his undertaker. You
shall hear more by midnight.
OTHELLO
Excellent good.A trumpet sounds.
What trumpet is that same?
IAGO  I warrant something from Venice.

Enter Lodovico, Desdemona, and Attendants.

’Tis Lodovico. This comes from the Duke.
See, your wife’s with him.
LODOVICO  God save you, worthy general.
OTHELLO  With all my heart, sir.
LODOVICO
The Duke and the Senators of Venice greet you.
He hands Othello a paper.
OTHELLO
I kiss the instrument of their pleasures.
DESDEMONA
And what’s the news, good cousin Lodovico?
IAGO
I am very glad to see you, signior.
Welcome to Cyprus.
LODOVICO
I thank you. How does Lieutenant Cassio?
IAGO  Lives, sir.
DESDEMONA
Cousin, there’s fall’n between him and my lord
An unkind breach, but you shall make all well.
OTHELLO  Are you sure of that?
DESDEMONA  My lord?
OTHELLO, reading  “This fail you not to do, as you
will”—
LODOVICO
He did not call; he’s busy in the paper.
Is there division ’twixt my lord and Cassio?
DESDEMONA
A most unhappy one. I would do much
T’ atone them, for the love I bear to Cassio.
OTHELLO  Fire and brimstone!
DESDEMONA  My lord?
OTHELLO  Are you wise?
DESDEMONA
What, is he angry?
LODOVICO  May be the letter moved him.
For, as I think, they do command him home,
Deputing Cassio in his government.
DESDEMONA  By my troth, I am glad on ’t.
OTHELLO  Indeed?
DESDEMONA  My lord?
OTHELLO  I am glad to see you mad.
DESDEMONA  Why, sweet Othello!
OTHELLO, striking her  Devil!
DESDEMONA  I have not deserved this.
LODOVICO
My lord, this would not be believed in Venice,
Though I should swear I saw ’t. ’Tis very much.
Make her amends. She weeps.
OTHELLO  O, devil, devil!
If that the Earth could teem with woman’s tears,
Each drop she falls would prove a crocodile.
Out of my sight!
DESDEMONA  I will not stay to offend you.
She begins to leave.
LODOVICO  Truly an obedient lady.
I do beseech your Lordship call her back.
OTHELLO  Mistress.
DESDEMONA, turning back  My lord?
OTHELLO  What would you with her, sir?
LODOVICO  Who, I, my lord?
OTHELLO
Ay, you did wish that I would make her turn.
Sir, she can turn, and turn, and yet go on,
And turn again. And she can weep, sir, weep.
And she’s obedient, as you say, obedient.
Very obedient.—Proceed you in your tears.—
Concerning this, sir—O, well-painted passion!—
I am commanded home.—Get you away.
I’ll send for you anon.—Sir, I obey the mandate
And will return to Venice.—Hence, avaunt!
Desdemona exits.
Cassio shall have my place. And, sir, tonight
I do entreat that we may sup together.
You are welcome, sir, to Cyprus. Goats and
monkeys!He exits.
LODOVICO
Is this the noble Moor, whom our full senate
Call all in all sufficient? Is this the nature
Whom passion could not shake, whose solid virtue
The shot of accident nor dart of chance
Could neither graze nor pierce?
IAGO  He is much
changed.
LODOVICO
Are his wits safe? Is he not light of brain?
IAGO
He’s that he is. I may not breathe my censure
What he might be. If what he might he is not,
I would to heaven he were.
LODOVICO  What? Strike his wife?
IAGO
’Faith, that was not so well. Yet would I knew
That stroke would prove the worst.
LODOVICO  Is it his use?
Or did the letters work upon his blood
And new-create this fault?
IAGO  Alas, alas!
It is not honesty in me to speak
What I have seen and known. You shall observe
him,
And his own courses will denote him so
That I may save my speech. Do but go after
And mark how he continues.
LODOVICO
I am sorry that I am deceived in him.
They exit.



Scene 2
Enter Othello and Emilia.

OTHELLO  You have seen nothing then?
EMILIA
Nor ever heard, nor ever did suspect.
OTHELLO
Yes, you have seen Cassio and she together.
EMILIA
But then I saw no harm, and then I heard
Each syllable that breath made up between them.
OTHELLO
What, did they never whisper?
EMILIA  Never, my lord.
OTHELLO  Nor send you out o’ th’ way?
EMILIA  Never.
OTHELLO
To fetch her fan, her gloves, her mask, nor nothing?
EMILIA  Never, my lord.
OTHELLO  That’s strange.
EMILIA
I durst, my lord, to wager she is honest,
Lay down my soul at stake. If you think other,
Remove your thought. It doth abuse your bosom.
If any wretch have put this in your head,
Let heaven requite it with the serpent’s curse,
For if she be not honest, chaste, and true,
There’s no man happy. The purest of their wives
Is foul as slander.
OTHELLO  Bid her come hither. Go.
Emilia exits.
She says enough. Yet she’s a simple bawd
That cannot say as much. This is a subtle whore,
A closet lock and key of villainous secrets.
And yet she’ll kneel and pray. I have seen her do ’t.
Enter Desdemona and Emilia.

DESDEMONA  My lord, what is your will?
OTHELLO
Pray you, chuck, come hither.
DESDEMONA  What is your
pleasure?
OTHELLO
Let me see your eyes. Look in my face.
DESDEMONA  What horrible fancy’s this?
OTHELLO, to Emilia  Some of your function,
mistress.
Leave procreants alone, and shut the door.
Cough, or cry “hem,” if anybody come.
Your mystery, your mystery! Nay, dispatch.
Emilia exits.
DESDEMONA, kneeling
Upon my knees, what doth your speech import?
I understand a fury in your words,
But not the words.
OTHELLO  Why? What art thou?
DESDEMONA
Your wife, my lord, your true and loyal wife.
OTHELLO  Come, swear it. Damn thyself,
Lest, being like one of heaven, the devils themselves
Should fear to seize thee. Therefore be double
damned.
Swear thou art honest.
DESDEMONA  Heaven doth truly know it.
OTHELLO
Heaven truly knows that thou art false as hell.
DESDEMONA, standing
To whom, my lord? With whom? How am I false?
OTHELLO
Ah, Desdemon, away, away, away!
DESDEMONA
Alas the heavy day, why do you weep?
Am I the motive of these tears, my lord?
If haply you my father do suspect
An instrument of this your calling back,
Lay not your blame on me. If you have lost him,
I have lost him too.
OTHELLO  Had it pleased heaven
To try me with affliction, had they rained
All kind of sores and shames on my bare head,
Steeped me in poverty to the very lips,
Given to captivity me and my utmost hopes,
I should have found in some place of my soul
A drop of patience. But alas, to make me
A fixèd figure for the time of scorn
To point his slow unmoving finger at—
Yet could I bear that too, well, very well.
But there where I have garnered up my heart,
Where either I must live or bear no life,
The fountain from the which my current runs
Or else dries up—to be discarded thence,
Or keep it as a cistern for foul toads
To knot and gender in—turn thy complexion there,
Patience, thou young and rose-lipped cherubin,
Ay, there look grim as hell.
DESDEMONA
I hope my noble lord esteems me honest.
OTHELLO
O, ay, as summer flies are in the shambles,
That quicken even with blowing! O thou weed,
Who art so lovely fair, and smell’st so sweet
That the sense aches at thee, would thou hadst
ne’er been born!
DESDEMONA
Alas, what ignorant sin have I committed?
OTHELLO
Was this fair paper, this most goodly book,
Made to write “whore” upon? What committed?
Committed? O thou public commoner,
I should make very forges of my cheeks
That would to cinders burn up modesty,
Did I but speak thy deeds. What committed?
Heaven stops the nose at it, and the moon winks;
The bawdy wind that kisses all it meets
Is hushed within the hollow mine of earth
And will not hear ’t. What committed?
Impudent strumpet!
DESDEMONA  By heaven, you do me wrong!
OTHELLO  Are not you a strumpet?
DESDEMONA  No, as I am a Christian!
If to preserve this vessel for my lord
From any other foul unlawful touch
Be not to be a strumpet, I am none.
OTHELLO  What, not a whore?
DESDEMONA  No, as I shall be saved.
OTHELLO  Is ’t possible?
DESDEMONA
O, heaven forgive us!
OTHELLO  I cry you mercy, then.
I took you for that cunning whore of Venice
That married with Othello.—You, mistress,

Enter Emilia.

That have the office opposite to Saint Peter
And keeps the gate of hell—you, you, ay, you!
We have done our course. There’s money for your
pains.He gives her money.
I pray you turn the key and keep our counsel.
He exits.
EMILIA
Alas, what does this gentleman conceive?
How do you, madam? How do you, my good lady?
DESDEMONA  Faith, half asleep.
EMILIA
Good madam, what’s the matter with my lord?
DESDEMONA  With who?
EMILIA  Why, with my lord, madam.
DESDEMONA
Who is thy lord?
EMILIA  He that is yours, sweet lady.
DESDEMONA
I have none. Do not talk to me, Emilia.
I cannot weep, nor answers have I none
But what should go by water. Prithee, tonight
Lay on my bed my wedding sheets. Remember.
And call thy husband hither.
EMILIA  Here’s a change indeed.She exits.
DESDEMONA
’Tis meet I should be used so, very meet.
How have I been behaved that he might stick
The small’st opinion on my least misuse?

Enter Iago and Emilia.

IAGO
What is your pleasure, madam? How is ’t with you?
DESDEMONA
I cannot tell. Those that do teach young babes
Do it with gentle means and easy tasks.
He might have chid me so, for, in good faith,
I am a child to chiding.
IAGO  What is the matter, lady?
EMILIA
Alas, Iago, my lord hath so bewhored her,
Thrown such despite and heavy terms upon her
As true hearts cannot bear.
DESDEMONA
Am I that name, Iago?
IAGO  What name, fair
lady?
DESDEMONA
Such as she said my lord did say I was.
EMILIA
He called her “whore.” A beggar in his drink
Could not have laid such terms upon his callet.
IAGO  Why did he so?
DESDEMONA
I do not know. I am sure I am none such.
IAGO
Do not weep, do not weep! Alas the day!
EMILIA
Hath she forsook so many noble matches,
Her father and her country and her friends,
To be called “whore”? Would it not make one
weep?
DESDEMONA  It is my wretched fortune.
IAGO
Beshrew him for ’t! How comes this trick upon him?
DESDEMONA  Nay, heaven doth know.
EMILIA
I will be hanged if some eternal villain,
Some busy and insinuating rogue,
Some cogging, cozening slave, to get some office,
Have not devised this slander. I will be hanged else.
IAGO
Fie, there is no such man. It is impossible.
DESDEMONA
If any such there be, heaven pardon him.
EMILIA
A halter pardon him, and hell gnaw his bones!
Why should he call her “whore”? Who keeps her
company?
What place? What time? What form? What
likelihood?
The Moor’s abused by some most villainous knave,
Some base notorious knave, some scurvy fellow.
O heaven, that such companions thou ’dst unfold,
And put in every honest hand a whip
To lash the rascals naked through the world,
Even from the east to th’ west!
IAGO  Speak within door.
EMILIA
O, fie upon them! Some such squire he was
That turned your wit the seamy side without
And made you to suspect me with the Moor.
IAGO
You are a fool. Go to!
DESDEMONA  Alas, Iago,
What shall I do to win my lord again?
Good friend, go to him. For by this light of heaven,
I know not how I lost him. She kneels. Here I
kneel.
If e’er my will did trespass ’gainst his love,
Either in discourse of thought or actual deed,
Or that mine eyes, mine ears, or any sense
Delighted them in any other form,
Or that I do not yet, and ever did,
And ever will—though he do shake me off
To beggarly divorcement—love him dearly,
Comfort forswear me! She stands. Unkindness may
do much,
And his unkindness may defeat my life,
But never taint my love. I cannot say “whore”—
It does abhor me now I speak the word.
To do the act that might the addition earn,
Not the world’s mass of vanity could make me.
IAGO
I pray you be content. ’Tis but his humor.
The business of the state does him offense,
And he does chide with you.
DESDEMONA
If ’twere no other—
IAGO  It is but so, I warrant.
Trumpets sound.
Hark how these instruments summon to supper.
The messengers of Venice stays the meat.
Go in and weep not. All things shall be well.
Desdemona and Emilia exit.
Enter Roderigo.

How now, Roderigo?
RODERIGO  I do not find
That thou deal’st justly with me.
IAGO  What in the contrary?
RODERIGO  Every day thou daff’st me with some device,
Iago, and rather, as it seems to me now,
keep’st from me all conveniency than suppliest me
with the least advantage of hope. I will indeed no
longer endure it. Nor am I yet persuaded to put up
in peace what already I have foolishly suffered.
IAGO  Will you hear me, Roderigo?
RODERIGO  Faith, I have heard too much, and your
words and performances are no kin together.
IAGO  You charge me most unjustly.
RODERIGO  With naught but truth. I have wasted myself
out of my means. The jewels you have had
from me to deliver to Desdemona would half have
corrupted a votaress. You have told me she hath
received them, and returned me expectations and
comforts of sudden respect and acquaintance, but I
find none.
IAGO  Well, go to! Very well.
RODERIGO  “Very well.” “Go to!” I cannot go to, man,
nor ’tis not very well! By this hand, I say ’tis very
scurvy, and begin to find myself fopped in it.
IAGO  Very well.
RODERIGO  I tell you ’tis not very well! I will make
myself known to Desdemona. If she will return me
my jewels, I will give over my suit and repent my
unlawful solicitation. If not, assure yourself I will
seek satisfaction of you.
IAGO  You have said now.
RODERIGO  Ay, and said nothing but what I protest
intendment of doing.
IAGO  Why, now I see there’s mettle in thee, and even
from this instant do build on thee a better opinion
than ever before. Give me thy hand, Roderigo.
Thou hast taken against me a most just exception,
but yet I protest I have dealt most directly in thy
affair.
RODERIGO  It hath not appeared.
IAGO  I grant indeed it hath not appeared, and your
suspicion is not without wit and judgment. But,
Roderigo, if thou hast that in thee indeed which I
have greater reason to believe now than ever—I
mean purpose, courage, and valor—this night show
it. If thou the next night following enjoy not Desdemona,
take me from this world with treachery and
devise engines for my life.
RODERIGO  Well, what is it? Is it within reason and
compass?
IAGO  Sir, there is especial commission come from
Venice to depute Cassio in Othello’s place.
RODERIGO  Is that true? Why, then, Othello and Desdemona
return again to Venice.
IAGO  O, no. He goes into Mauritania and takes away
with him the fair Desdemona, unless his abode be
lingered here by some accident—wherein none
can be so determinate as the removing of Cassio.
RODERIGO  How do you mean, removing him?
IAGO  Why, by making him uncapable of Othello’s
place: knocking out his brains.
RODERIGO  And that you would have me to do?
IAGO  Ay, if you dare do yourself a profit and a right. He
sups tonight with a harlotry, and thither will I go to
him. He knows not yet of his honorable fortune. If
you will watch his going thence (which I will
fashion to fall out between twelve and one), you may
take him at your pleasure. I will be near to second
your attempt, and he shall fall between us. Come,
stand not amazed at it, but go along with me. I will
show you such a necessity in his death that you shall
think yourself bound to put it on him. It is now high
supper time, and the night grows to waste. About it!
RODERIGO  I will hear further reason for this.
IAGO  And you shall be satisfied.
They exit.



Scene 3
Enter Othello, Lodovico, Desdemona, Emilia, and
Attendants.

LODOVICO
I do beseech you, sir, trouble yourself no further.
OTHELLO
O, pardon me, ’twill do me good to walk.
LODOVICO
Madam, good night. I humbly thank your Ladyship.
DESDEMONA  Your Honor is most welcome.
OTHELLO
Will you walk, sir?—O, Desdemona—
DESDEMONA  My lord?
OTHELLO  Get you to bed on th’ instant. I will be
returned forthwith. Dismiss your attendant there.
Look ’t be done.
DESDEMONA  I will, my lord.
All but Desdemona and Emilia exit.
EMILIA
How goes it now? He looks gentler than he did.
DESDEMONA
He says he will return incontinent,
And hath commanded me to go to bed,
And bade me to dismiss you.
EMILIA  Dismiss me?
DESDEMONA
It was his bidding. Therefore, good Emilia,
Give me my nightly wearing, and adieu.
We must not now displease him.
EMILIA  I would you had never seen him.
DESDEMONA
So would not I. My love doth so approve him
That even his stubbornness, his checks, his frowns—
Prithee, unpin me—have grace and favor in them.
EMILIA
I have laid those sheets you bade me on the bed.
DESDEMONA
All’s one. Good faith, how foolish are our minds!
If I do die before thee, prithee, shroud me
In one of those same sheets.
EMILIA  Come, come, you talk!
DESDEMONA
My mother had a maid called Barbary.
She was in love, and he she loved proved mad
And did forsake her. She had a song of willow,
An old thing ’twas, but it expressed her fortune,
And she died singing it. That song tonight
Will not go from my mind. I have much to do
But to go hang my head all at one side
And sing it like poor Barbary. Prithee, dispatch.
EMILIA  Shall I go fetch your nightgown?
DESDEMONA  No, unpin me here.
This Lodovico is a proper man.
EMILIA  A very handsome man.
DESDEMONA  He speaks well.
EMILIA  I know a lady in Venice would have walked
barefoot to Palestine for a touch of his nether lip.
DESDEMONA, singing
 The poor soul sat sighing by a sycamore tree,
  Sing all a green willow.
 Her hand on her bosom, her head on her knee,
  Sing willow, willow, willow.
 The fresh streams ran by her and murmured her
 moans,
  Sing willow, willow, willow;
 Her salt tears fell from her, and softened the
 stones—
Lay by these.
  Sing willow, willow, willow.
Prithee hie thee! He’ll come anon.
 Sing all a green willow must be my garland.
 Let nobody blame him, his scorn I approve.
Nay, that’s not next. Hark, who is ’t that knocks?
EMILIA  It’s the wind.
DESDEMONA
 I called my love false love, but what said he then?
  Sing willow, willow, willow.
 If I court more women, you’ll couch with more
 men.—
So, get thee gone. Good night. Mine eyes do itch;
Doth that bode weeping?
EMILIA  ’Tis neither here nor there.
DESDEMONA
I have heard it said so. O these men, these men!
Dost thou in conscience think—tell me, Emilia—
That there be women do abuse their husbands
In such gross kind?
EMILIA  There be some such, no
question.
DESDEMONA
Wouldst thou do such a deed for all the world?
EMILIA
Why, would not you?
DESDEMONA  No, by this heavenly light!
EMILIA
Nor I neither, by this heavenly light.
I might do ’t as well i’ th’ dark.
DESDEMONA
Wouldst thou do such a deed for all the world?
EMILIA  The world’s a huge thing. It is a great price
for a small vice.
DESDEMONA  In troth, I think thou wouldst not.
EMILIA  In troth, I think I should, and undo ’t when I
had done it. Marry, I would not do such a thing for
a joint ring, nor for measures of lawn, nor for
gowns, petticoats, nor caps, nor any petty exhibition.
But for the whole world—’Uds pity! Who
would not make her husband a cuckold to make
him a monarch? I should venture purgatory for ’t.
DESDEMONA  Beshrew me if I would do such a wrong
for the whole world!
EMILIA  Why, the wrong is but a wrong i’ th’ world;
and, having the world for your labor, ’tis a wrong in
your own world, and you might quickly make it
right.
DESDEMONA  I do not think there is any such woman.
EMILIA  Yes, a dozen; and as many to th’ vantage as
would store the world they played for.
But I do think it is their husbands’ faults
If wives do fall. Say that they slack their duties,
And pour our treasures into foreign laps;
Or else break out in peevish jealousies,
Throwing restraint upon us. Or say they strike us,
Or scant our former having in despite.
Why, we have galls, and though we have some grace,
Yet have we some revenge. Let husbands know
Their wives have sense like them. They see, and
smell,
And have their palates both for sweet and sour,
As husbands have. What is it that they do
When they change us for others? Is it sport?
I think it is. And doth affection breed it?
I think it doth. Is ’t frailty that thus errs?
It is so too. And have not we affections,
Desires for sport, and frailty, as men have?
Then let them use us well. Else let them know,
The ills we do, their ills instruct us so.
DESDEMONA
Good night, good night. God me such uses send,
Not to pick bad from bad, but by bad mend.
They exit.



ACT 5
Scene 1
Enter Iago and Roderigo.

IAGO
Here, stand behind this bulk. Straight will he
come.
Wear thy good rapier bare, and put it home.
Quick, quick! Fear nothing. I’ll be at thy elbow.
It makes us or it mars us—think on that,
And fix most firm thy resolution.
RODERIGO
Be near at hand. I may miscarry in ’t.
IAGO
Here, at thy hand. Be bold and take thy stand.
He moves aside.
RODERIGO
I have no great devotion to the deed,
And yet he hath given me satisfying reasons.
’Tis but a man gone. Forth, my sword! He dies.
He draws his sword.
IAGO, aside
I have rubbed this young quat almost to the sense,
And he grows angry. Now, whether he kill Cassio,
Or Cassio him, or each do kill the other,
Every way makes my gain. Live Roderigo,
He calls me to a restitution large
Of gold and jewels that I bobbed from him
As gifts to Desdemona.
It must not be. If Cassio do remain,
He hath a daily beauty in his life
That makes me ugly. And besides, the Moor
May unfold me to him. There stand I in much peril.
No, he must die. Be ’t so. I hear him coming.

Enter Cassio.

RODERIGO
I know his gait. ’Tis he!—Villain, thou diest!
He thrusts at Cassio.
CASSIO
That thrust had been mine enemy indeed
But that my coat is better than thou know’st.
I will make proof of thine.
He draws, and stabs Roderigo.
RODERIGO  O, I am slain!
Roderigo falls.
Iago stabs Cassio in the leg, and exits.
CASSIO
I am maimed forever! Help, ho! Murder, murder!

Enter Othello.

OTHELLO
The voice of Cassio! Iago keeps his word.
RODERIGO  O, villain that I am!
OTHELLO, aside  It is even so.
CASSIO  O, help ho! Light! A surgeon!
OTHELLO, aside
’Tis he! O brave Iago, honest and just,
That hast such noble sense of thy friend’s wrong!
Thou teachest me.—Minion, your dear lies dead,
And your unblest fate hies. Strumpet, I come.
Forth of my heart those charms, thine eyes, are
blotted.
Thy bed, lust-stained, shall with lust’s blood be
spotted.Othello exits.

Enter Lodovico and Gratiano.

CASSIO
What ho! No watch? No passage? Murder, murder!
GRATIANO
’Tis some mischance. The voice is very direful.
CASSIO  O, help!
LODOVICO  Hark!
RODERIGO  O wretched villain!
LODOVICO
Two or three groan. ’Tis heavy night.
These may be counterfeits. Let’s think ’t unsafe
To come in to the cry without more help.
RODERIGO
Nobody come? Then shall I bleed to death.

Enter Iago with a light.

LODOVICO  Hark!
GRATIANO
Here’s one comes in his shirt, with light and
weapons.
IAGO
Who’s there? Whose noise is this that cries on
murder?
LODOVICO
We do not know.
IAGO  Did not you hear a cry?
CASSIO
Here, here! For heaven’s sake, help me!
IAGO  What’s the matter?
GRATIANO, to Lodovico
This is Othello’s ancient, as I take it.
LODOVICO
The same indeed, a very valiant fellow.
IAGO, to Cassio
What are you here that cry so grievously?
CASSIO
Iago? O, I am spoiled, undone by villains.
Give me some help!
IAGO
O me, lieutenant! What villains have done this?
CASSIO
I think that one of them is hereabout
And cannot make away.
IAGO  O treacherous villains!
To Lodovico and Gratiano. What are you there?
Come in, and give some help.
RODERIGO  O, help me here!
CASSIO
That’s one of them.
IAGO, to Roderigo  O murd’rous slave! O villain!
He stabs Roderigo.
RODERIGO
O damned Iago! O inhuman dog!
IAGO
Kill men i’ th’ dark?—Where be these bloody
thieves?
How silent is this town! Ho, murder, murder!—
What may you be? Are you of good or evil?
LODOVICO
As you shall prove us, praise us.
IAGO  Signior Lodovico?
LODOVICO  He, sir.
IAGO
I cry you mercy. Here’s Cassio hurt by villains.
GRATIANO  Cassio?
IAGO
How is ’t, brother?
CASSIO  My leg is cut in two.
IAGO  Marry, heaven forbid!
Light, gentlemen. I’ll bind it with my shirt.
Enter Bianca.

BIANCA
What is the matter, ho? Who is ’t that cried?
IAGO
Who is ’t that cried?
BIANCA  O, my dear Cassio,
My sweet Cassio! O Cassio, Cassio, Cassio!
IAGO
O notable strumpet! Cassio, may you suspect
Who they should be that have thus mangled you?
CASSIO  No.
GRATIANO
I am sorry to find you thus; I have been to seek you.
IAGO
Lend me a garter. So.—O for a chair
To bear him easily hence!
BIANCA
Alas, he faints. O, Cassio, Cassio, Cassio!
IAGO
Gentlemen all, I do suspect this trash
To be a party in this injury.—
Patience awhile, good Cassio.—Come, come;
Lend me a light. Peering at Roderigo. Know we this
face or no?
Alas, my friend and my dear countryman
Roderigo? No! Yes, sure. O heaven, Roderigo!
GRATIANO  What, of Venice?
IAGO  Even he, sir. Did you know him?
GRATIANO  Know him? Ay.
IAGO
Signior Gratiano? I cry your gentle pardon.
These bloody accidents must excuse my manners
That so neglected you.
GRATIANO  I am glad to see you.
IAGO
How do you, Cassio?—O, a chair, a chair!
GRATIANO  Roderigo?
IAGO
He, he, ’tis he! A chair is brought in. O, that’s well
said; the chair.—
Some good man bear him carefully from hence.
I’ll fetch the General’s surgeon.— For you, mistress,
Save you your labor.—He that lies slain here,
Cassio,
Was my dear friend. What malice was between you?
CASSIO
None in the world. Nor do I know the man.
IAGO, to Bianca
What, look you pale?—O, bear him out o’ th’ air.
Cassio, in the chair, and Roderigo are carried off.
To Gratiano and Lodovico. Stay you, good
gentlemen.—Look you pale, mistress?—
Do you perceive the gastness of her eye?—
Nay, if you stare, we shall hear more anon.—
Behold her well. I pray you, look upon her.
Do you see, gentlemen? Nay, guiltiness will speak
Though tongues were out of use.

Enter Emilia.

EMILIA
Alas, what is the matter? What is the matter,
husband?
IAGO
Cassio hath here been set on in the dark
By Roderigo and fellows that are scaped.
He’s almost slain, and Roderigo dead.
EMILIA
Alas, good gentleman! Alas, good Cassio!
IAGO
This is the fruits of whoring. Prithee, Emilia,
Go know of Cassio where he supped tonight.
To Bianca. What, do you shake at that?
BIANCA
He supped at my house, but I therefore shake not.
IAGO
O, did he so? I charge you go with me.
EMILIA  O fie upon thee, strumpet!
BIANCA
I am no strumpet, but of life as honest
As you that thus abuse me.
EMILIA  As I? Faugh! Fie upon thee!
IAGO
Kind gentlemen, let’s go see poor Cassio dressed.—
Come, mistress, you must tell ’s another tale.—
Emilia, run you to the citadel
And tell my lord and lady what hath happed.—
Will you go on afore? Aside. This is the night
That either makes me or fordoes me quite.
They exit in different directions.



Scene 2
Enter Othello with a light, and Desdemona in her bed.

OTHELLO
It is the cause, it is the cause, my soul.
Let me not name it to you, you chaste stars.
It is the cause. Yet I’ll not shed her blood,
Nor scar that whiter skin of hers than snow,
And smooth as monumental alabaster.
Yet she must die, else she’ll betray more men.
Put out the light, and then put out the light.
If I quench thee, thou flaming minister,
I can again thy former light restore
Should I repent me. But once put out thy light,
Thou cunning’st pattern of excelling nature,
I know not where is that Promethean heat
That can thy light relume. When I have plucked the
rose,
I cannot give it vital growth again.
It needs must wither. I’ll smell it on the tree.
O balmy breath, that dost almost persuade
Justice to break her sword! He kisses her. One
more, one more.
Be thus when thou art dead, and I will kill thee
And love thee after. One more, and this the last.
He kisses her.
So sweet was ne’er so fatal. I must weep,
But they are cruel tears. This sorrow’s heavenly:
It strikes where it doth love. She wakes.
DESDEMONA
Who’s there? Othello?
OTHELLO  Ay, Desdemona.
DESDEMONA  Will you come to bed, my lord?
OTHELLO
Have you prayed tonight, Desdemon?
DESDEMONA  Ay, my lord.
OTHELLO
If you bethink yourself of any crime
Unreconciled as yet to heaven and grace,
Solicit for it straight.
DESDEMONA  Alack, my lord,
What may you mean by that?
OTHELLO
Well, do it, and be brief. I will walk by.
I would not kill thy unpreparèd spirit.
No, heaven forfend! I would not kill thy soul.
DESDEMONA  Talk you of killing?
OTHELLO
Ay, I do.
DESDEMONA  Then heaven have mercy on me.
OTHELLO  Amen, with all my heart.
DESDEMONA
If you say so, I hope you will not kill me.
OTHELLO  Humh.
DESDEMONA
And yet I fear you, for you’re fatal then
When your eyes roll so. Why I should fear I know
not,
Since guiltiness I know not, but yet I feel I fear.
OTHELLO
Think on thy sins.
DESDEMONA  They are loves I bear to you.
OTHELLO  Ay, and for that thou diest.
DESDEMONA
That death’s unnatural that kills for loving.
Alas, why gnaw you so your nether lip?
Some bloody passion shakes your very frame.
These are portents, but yet I hope, I hope
They do not point on me.
OTHELLO  Peace, and be still.
DESDEMONA
I will so. What’s the matter?
OTHELLO  That handkerchief
Which I so loved, and gave thee, thou gav’st to
Cassio.
DESDEMONA
No, by my life and soul! Send for the man
And ask him.
OTHELLO
Sweet soul, take heed, take heed of perjury.
Thou art on thy deathbed.
DESDEMONA
Ay, but not yet to die.
OTHELLO  Yes, presently.
Therefore confess thee freely of thy sin.
For to deny each article with oath
Cannot remove nor choke the strong conception
That I do groan withal. Thou art to die.
DESDEMONA
Then Lord have mercy on me!
OTHELLO  I say “Amen.”
DESDEMONA
And have you mercy, too. I never did
Offend you in my life, never loved Cassio
But with such general warranty of heaven
As I might love. I never gave him token.
OTHELLO
By heaven, I saw my handkerchief in ’s hand!
O perjured woman, thou dost stone my heart
And mak’st me call what I intend to do
A murder, which I thought a sacrifice!
I saw the handkerchief!
DESDEMONA  He found it, then.
I never gave it him. Send for him hither.
Let him confess a truth.
OTHELLO  He hath confessed.
DESDEMONA  What, my lord?
OTHELLO
That he hath used thee.
DESDEMONA  How? Unlawfully?
OTHELLO  Ay.
DESDEMONA
He will not say so.
OTHELLO  No. His mouth is stopped.
Honest Iago hath ta’en order for ’t.
DESDEMONA
O, my fear interprets. What, is he dead?
OTHELLO
Had all his hairs been lives, my great revenge
Had stomach for them all.
DESDEMONA
Alas, he is betrayed, and I undone.She weeps.
OTHELLO
Out, strumpet! Weep’st thou for him to my face?
DESDEMONA
O banish me, my lord, but kill me not!
OTHELLO  Down, strumpet!
DESDEMONA
Kill me tomorrow, let me live tonight.
OTHELLO  Nay, if you strive—
DESDEMONA
But half an hour!
OTHELLO  Being done, there is no pause.
DESDEMONA
But while I say one prayer!
OTHELLO  It is too late.
He smothers her.
EMILIA, within
My lord, my lord? What ho! My lord, my lord!
OTHELLO
What noise is this?—Not dead? Not yet quite dead?
I that am cruel am yet merciful.
I would not have thee linger in thy pain.
So, so.
EMILIA, within  What, ho! My lord, my lord!
OTHELLO  Who’s
there?
EMILIA, within
O, good my lord, I would speak a word with you.
OTHELLO
Yes. ’Tis Emilia.—By and by.—She’s dead.
’Tis like she comes to speak of Cassio’s death.
The noise was here. Ha, no more moving?
Still as the grave. Shall she come in? Were ’t good?
I think she stirs again. No. What’s best to do?
If she come in, she’ll sure speak to my wife.
My wife, my wife! What wife? I have no wife.
O insupportable! O heavy hour!
Methinks it should be now a huge eclipse
Of sun and moon, and that th’ affrighted globe
Should yawn at alteration.
EMILIA, within  I do beseech you
That I may speak with you. O, good my lord—
OTHELLO
I had forgot thee. O, come in, Emilia.—
Soft, by and by, let me the curtains draw.—
Where art thou?

Enter Emilia.

What’s the matter with thee now?
EMILIA
O, my good lord, yonder’s foul murders done.
OTHELLO  What? Now?
EMILIA  But now, my lord.
OTHELLO
It is the very error of the moon.
She comes more nearer Earth than she was wont
And makes men mad.
EMILIA  Cassio, my lord, hath killed
A young Venetian called Roderigo.
OTHELLO
Roderigo killed? And Cassio killed?
EMILIA  No, Cassio is not killed.
OTHELLO
Not Cassio killed? Then murder’s out of tune,
And sweet revenge grows harsh.
DESDEMONA  O falsely, falsely murdered.
EMILIA
O Lord, what cry is that?
OTHELLO  That? What?
EMILIA
Out, and alas, that was my lady’s voice!
Help! Help ho! Help! O lady, speak again!
Sweet Desdemona, O sweet mistress, speak!
DESDEMONA  A guiltless death I die.
EMILIA  O, who hath done this deed?
DESDEMONA  Nobody. I myself. Farewell.
Commend me to my kind lord. O, farewell.
She dies.
OTHELLO
Why, how should she be murdered?
EMILIA  Alas, who
knows?
OTHELLO
You heard her say herself, it was not I.
EMILIA
She said so. I must needs report the truth.
OTHELLO
She’s like a liar gone to burning hell!
’Twas I that killed her.
EMILIA
O, the more angel she, and you the blacker devil!
OTHELLO
She turned to folly, and she was a whore.
EMILIA
Thou dost belie her, and thou art a devil!
OTHELLO  She was false as water.
EMILIA  Thou art rash as fire to say
That she was false. O, she was heavenly true!
OTHELLO
Cassio did top her. Ask thy husband else.
O, I were damned beneath all depth in hell
But that I did proceed upon just grounds
To this extremity. Thy husband knew it all.
EMILIA  My husband?
OTHELLO  Thy husband.
EMILIA  That she was false to wedlock?
OTHELLO
Ay, with Cassio. Had she been true,
If heaven would make me such another world
Of one entire and perfect chrysolite,
I’d not have sold her for it.
EMILIA  My husband?
OTHELLO
Ay, ’twas he that told me on her first.
An honest man he is, and hates the slime
That sticks on filthy deeds.
EMILIA  My husband?
OTHELLO
What needs this iterance, woman? I say, thy
husband.
EMILIA
O mistress, villainy hath made mocks with love!—
My husband say she was false?
OTHELLO  He, woman.
I say thy husband. Dost understand the word?
My friend, thy husband; honest, honest Iago.
EMILIA
If he say so, may his pernicious soul
Rot half a grain a day! He lies to th’ heart!
She was too fond of her most filthy bargain.
He draws his sword.
OTHELLO  Hah?
EMILIA  Do thy worst!
This deed of thine is no more worthy heaven
Than thou wast worthy her.
OTHELLO  Peace, you were best!
EMILIA
Thou hast not half that power to do me harm
As I have to be hurt. O gull! O dolt,
As ignorant as dirt! Thou hast done a deed—
I care not for thy sword. I’ll make thee known,
Though I lost twenty lives. Help! Help, ho! Help!
The Moor hath killed my mistress! Murder, murder!

Enter Montano, Gratiano, and Iago.

MONTANO
What is the matter? How now, general?
EMILIA
O, are you come, Iago? You have done well,
That men must lay their murders on your neck.
GRATIANO  What is the matter?
EMILIA, to Iago
Disprove this villain, if thou be’st a man.
He says thou told’st him that his wife was false.
I know thou didst not. Thou ’rt not such a villain.
Speak, for my heart is full.
IAGO
I told him what I thought, and told no more
Than what he found himself was apt and true.
EMILIA
But did you ever tell him she was false?
IAGO  I did.
EMILIA
You told a lie, an odious, damnèd lie!
Upon my soul, a lie, a wicked lie!
She false with Cassio? Did you say with Cassio?
IAGO
With Cassio, mistress. Go to! Charm your tongue.
EMILIA
I will not charm my tongue. I am bound to speak.
My mistress here lies murdered in her bed.
ALL  O heavens forfend!
EMILIA, to Iago
And your reports have set the murder on!
OTHELLO
Nay, stare not, masters; it is true indeed.
GRATIANO  ’Tis a strange truth.
MONTANO
O monstrous act!
EMILIA  Villainy, villainy, villainy!
I think upon ’t, I think! I smell ’t! O villainy!
I thought so then. I’ll kill myself for grief!
O villainy! Villainy!
IAGO
What, are you mad? I charge you get you home.
EMILIA
Good gentlemen, let me have leave to speak.
’Tis proper I obey him, but not now.
Perchance, Iago, I will ne’er go home.
OTHELLO
O, O, O!Othello falls on the bed.
EMILIA  Nay, lay thee down, and roar!
For thou hast killed the sweetest innocent
That e’er did lift up eye.
OTHELLO, standing  O, she was foul!—
I scarce did know you, uncle. There lies your niece,
Whose breath indeed these hands have newly
stopped.
I know this act shows horrible and grim.
GRATIANO
Poor Desdemon, I am glad thy father’s dead.
Thy match was mortal to him, and pure grief
Shore his old thread in twain. Did he live now,
This sight would make him do a desperate turn,
Yea, curse his better angel from his side,
And fall to reprobance.
OTHELLO
’Tis pitiful. But yet Iago knows
That she with Cassio hath the act of shame
A thousand times committed. Cassio confessed it,
And she did gratify his amorous works
With that recognizance and pledge of love
Which I first gave her. I saw it in his hand.
It was a handkerchief, an antique token
My father gave my mother.
EMILIA  O God! O heavenly God!
IAGO
Zounds, hold your peace!
EMILIA  ’Twill out, ’twill out. I peace?
No, I will speak as liberal as the north.
Let heaven and men and devils, let them all,
All, all, cry shame against me, yet I’ll speak.
IAGO  Be wise, and get you home.
He draws his sword.
EMILIA
I will not.
GRATIANO  Fie, your sword upon a woman!
EMILIA
O thou dull Moor, that handkerchief thou speak’st
of
I found by fortune, and did give my husband—
For often, with a solemn earnestness
(More than indeed belonged to such a trifle),
He begged of me to steal ’t.
IAGO  Villainous whore!
EMILIA
She give it Cassio? No, alas, I found it,
And I did give ’t my husband.
IAGO  Filth, thou liest!
EMILIA
By heaven, I do not, I do not, gentlemen!
To Othello. O murd’rous coxcomb, what should
such a fool
Do with so good a wife?
OTHELLO  Are there no stones in heaven
But what serves for the thunder?—Precious villain!
The Moor runs at Iago but is disarmed.
Iago kills his wife.
GRATIANO
The woman falls! Sure he hath killed his wife.
EMILIA
Ay, ay! O, lay me by my mistress’ side.Iago exits.
GRATIANO  He’s gone, but his wife’s killed.
MONTANO
’Tis a notorious villain. Take you this weapon
Which I have here recovered from the Moor.
Come, guard the door without. Let him not pass,
But kill him rather. I’ll after that same villain,
For ’tis a damnèd slave.
Montano and Gratiano exit.
OTHELLO  I am not valiant neither,
But every puny whipster gets my sword.
But why should honor outlive honesty?
Let it go all.
EMILIA  What did thy song bode, lady?
Hark, canst thou hear me? I will play the swan
And die in music.
  Willow, willow, willow.
Moor, she was chaste. She loved thee, cruel Moor.
So come my soul to bliss, as I speak true.
So speaking as I think, alas, I die. She dies.
OTHELLO
I have another weapon in this chamber.
It is a sword of Spain, the ice brook’s temper.
O, here it is.—Uncle, I must come forth.
GRATIANO, within
If thou attempt it, it will cost thee dear;
Thou hast no weapon and perforce must suffer.
OTHELLO
Look in upon me, then, and speak with me,
Or naked as I am I will assault thee.

Enter Gratiano.

GRATIANO
What is the matter?
OTHELLO  Behold, I have a weapon.
A better never did itself sustain
Upon a soldier’s thigh. I have seen the day
That with this little arm and this good sword
I have made my way through more impediments
Than twenty times your stop. But—O vain boast!—
Who can control his fate? ’Tis not so now.
Be not afraid, though you do see me weaponed.
Here is my journey’s end, here is my butt
And very sea-mark of my utmost sail.
Do you go back dismayed? ’Tis a lost fear.
Man but a rush against Othello’s breast,
And he retires. Where should Othello go?
He looks toward the bed.
Now, how dost thou look now? O ill-starred wench,
Pale as thy smock, when we shall meet at compt,
This look of thine will hurl my soul from heaven,
And fiends will snatch at it. Cold, cold, my girl?
Even like thy chastity.—O cursèd, cursèd slave!—
Whip me, you devils,
From the possession of this heavenly sight!
Blow me about in winds, roast me in sulfur,
Wash me in steep-down gulfs of liquid fire!
O Desdemon! Dead, Desdemon! Dead! O, O!

 Enter Lodovico, Cassio in a chair, Montano, and Iago,
with Officers.

LODOVICO
Where is this rash and most unfortunate man?
OTHELLO
That’s he that was Othello. Here I am.
LODOVICO
Where is that viper? Bring the villain forth.
Iago is brought forward.
OTHELLO
I look down towards his feet; but that’s a fable.—
If that thou be’st a devil, I cannot kill thee.
He stabs Iago.
LODOVICO
Wrench his sword from him.
Othello is disarmed.
IAGO  I bleed, sir, but not killed.
OTHELLO
I am not sorry neither. I’d have thee live,
For in my sense ’tis happiness to die.
LODOVICO
O thou Othello, that wert once so good,
Fall’n in the practice of a damnèd slave,
What shall be said to thee?
OTHELLO  Why, anything.
An honorable murderer, if you will,
For naught I did in hate, but all in honor.
LODOVICO
This wretch hath part confessed his villainy.
Did you and he consent in Cassio’s death?
OTHELLO  Ay.
CASSIO
Dear general, I never gave you cause.
OTHELLO
I do believe it, and I ask your pardon.
Will you, I pray, demand that demi-devil
Why he hath thus ensnared my soul and body?
IAGO
Demand me nothing. What you know, you know.
From this time forth I never will speak word.
LODOVICO  What? Not to pray?
GRATIANO  Torments will ope your lips.
OTHELLO  Well, thou dost best.
LODOVICO  Sir,
You shall understand what hath befall’n,
Which, as I think, you know not. Here is a letter
Found in the pocket of the slain Roderigo,
And here another. He shows papers. The one of
them imports
The death of Cassio, to be undertook
By Roderigo.
OTHELLO
O villain!
CASSIO  Most heathenish and most gross.
LODOVICO
Now here’s another discontented paper
Found in his pocket, too; and this it seems
Roderigo meant t’ have sent this damnèd villain,
But that, belike, Iago in the interim
Came in and satisfied him.
OTHELLO  O, thou pernicious caitiff!—
How came you, Cassio, by that handkerchief
That was my wife’s?
CASSIO  I found it in my chamber.
And he himself confessed it but even now,
That there he dropped it for a special purpose
Which wrought to his desire.
OTHELLO  O fool, fool, fool!
CASSIO
There is besides, in Roderigo’s letter,
How he upbraids Iago, that he made him
Brave me upon the watch, whereon it came
That I was cast. And even but now he spake,
After long seeming dead: Iago hurt him,
Iago set him on.
LODOVICO, to Othello
You must forsake this room and go with us.
Your power and your command is taken off,
And Cassio rules in Cyprus. For this slave,
If there be any cunning cruelty
That can torment him much and hold him long,
It shall be his. You shall close prisoner rest,
Till that the nature of your fault be known
To the Venetian state.—Come, bring away.
OTHELLO
Soft you. A word or two before you go.
I have done the state some service, and they
know ’t.
No more of that. I pray you in your letters,
When you shall these unlucky deeds relate,
Speak of me as I am. Nothing extenuate,
Nor set down aught in malice. Then must you speak
Of one that loved not wisely, but too well;
Of one not easily jealous, but being wrought,
Perplexed in the extreme; of one whose hand,
Like the base Judean, threw a pearl away
Richer than all his tribe; of one whose subdued
eyes,
Albeit unused to the melting mood,
Drops tears as fast as the Arabian trees
Their medicinable gum. Set you down this.
And say besides, that in Aleppo once,
Where a malignant and a turbanned Turk
Beat a Venetian and traduced the state,
I took by th’ throat the circumcisèd dog,
And smote him, thus.He stabs himself.
LODOVICO  O bloody period!
GRATIANO  All that is spoke is marred.
OTHELLO, to Desdemona
I kissed thee ere I killed thee. No way but this,
Killing myself, to die upon a kiss.He dies.
CASSIO
This did I fear, but thought he had no weapon,
For he was great of heart.
LODOVICO, to Iago  O Spartan dog,
More fell than anguish, hunger, or the sea,
Look on the tragic loading of this bed.
This is thy work.—The object poisons sight.
Let it be hid.—Gratiano, keep the house,
And seize upon the fortunes of the Moor,
For they succeed on you. To Cassio. To you, lord
governor,
Remains the censure of this hellish villain.
The time, the place, the torture, O, enforce it.
Myself will straight aboard, and to the state
This heavy act with heavy heart relate.
They exit.
)"}))
    {
        std::cout << "Romeo and Juliet can be made using Othello\n";
    }
    else
    {
        std::cout << "Romeo and Juliet cannot be made using Othello\n";
    }
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