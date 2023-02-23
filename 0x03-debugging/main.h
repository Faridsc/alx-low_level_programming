#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>

/**
 * positive_or_negative - print if an int is positive or negative
 * Return: void
 * @i: int which to test if positive, negative or zero
 */
void positive_or_negative(int);

/**
 * positive_or_negative - print if an int is positive or negative
 * Return: void
 * @i: int which to test if positive, negative or zero
 */
void positive_or_negative(int i)
{
        if (i < 0)
                printf("%d is negative", i);
        else if (i > 0)
                printf("%d is positive", i);
        else
                printf("%d is zero", i);
        printf("\n");
}

#endif
