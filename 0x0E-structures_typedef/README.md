
0x0E. C - Structures, typedef

1-0. Poppy
new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

2-1. A dog is the only thing on earth that loves you more than you love yourself
function that initialize a variable of type struct dog

3-2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

4-3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
new type dog_t as a new name for the type struct dog.
