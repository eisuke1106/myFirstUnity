#include "stdio.h"
#include "enjoy.h"

void enjoy(int *pInt)
{
    printf("Enjoy! %d\n", *pInt);
}

void enjoy2(int array[2])
{
    printf("Enjoy2! %d\n", array[0]);
}

void lol()
{
    printf("LOL!\n");
}

int get_something()
{
    return 0; // モック用の関数s
}