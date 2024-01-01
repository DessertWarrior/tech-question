Basically, an algorithm to turn numbers into french words. For example, 51 would be cinquante-cinq, 168 would be cent soixante-huit, and even crazy stuff like 89564686 which is quatre-vingt-neuf million cinq cent soixante-quatre mille six cent quatre-vingt-six (jeez).

print(toFrench(125)) --prints 'cent vingt-cinq'

codingchallenge1

This algorithm has to work with any given number, no matter how many digits it has (you can limit it to a certain number, 12 digits is enough, meaning billions) and it has to respect all the rules the french numbering system has, such as:

    Adding a hyphen - when needed
    80 has an s at the end quatre-vingts unlike 81 and 82… ect. without the s (quatre-vingt-deux)
    Any number with 1 at the end being written às vingt et un, trente et un ect. while 81 is written as quatre-vingt-un and not quatre-vingt et un
    Invaribale numbers, such as un, deux … onze, douze…/vingt, trente …quatre-vingt-dix. (Basically numbers from 0 to 16; and all tens, like 10, 20, 30… to 90)
    Numbers between 90 and 99, this is the trickest part
    1 000 000 and 1 000 written as un million and un mille but 100 written as just cent without a un.
    mille not having an s when there are multiple thousands (ex: cinq mille), but million and milliard ect. having an s if there are multiple. (ex: cinq millions)

And many other special cases that I didn’t mention! For a first challenge, this is deffintely tough, which is why you can even share a part of the challenge done, even if it doesn’t fully work. But don’t worry, this is supposed to be a tutorial, we’ll see how to do it from start to finish. Also, you may wanna learn more about the french numbering system, from resources such as this 35 and this 10. Et voilà!