#include <stdio.h>
#include "sub.h"
#include "enjoy.h"

int myFunc()
{
    int a = myAdd(1, 2);
    int b = myAdd(3, 4);

    int c;
    for (int i = 0; i < 2; i++)
    {
        /* code */
        c = i;
        enjoy(&c);
    }

    return a + b;
}

int myAdd(int a, int b)
{
    return a + b;
}