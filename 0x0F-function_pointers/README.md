
0x0F. C - Function pointers

1-0.What's my name
function that prints a name.

2-1. If you spend too much time thinking about a thing, you'll never get it done
function that executes a function given as a parameter on each element of an array.

Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use
