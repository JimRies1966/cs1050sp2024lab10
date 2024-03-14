/*
 * CS1050
 * Spring 2024
 * Lab 10 Starter File
 * by Jim Ries
 *
 **** DO NOT CHANGE THIS FILE ****
 */

// includes
#include <stdio.h>
#include <ctype.h>
#include "filter.h"

// Main
int main(void)
{
    char s[][MAXSTRINGLEN] =
    {
        S1,S2,S3,S4,S5,S6,S7,S8
    };

    // You could put your own debugging stuff in your code
    // and bracket it with #ifdef DEBUG like this.  You can
    // then build with DEBUG: make debug    or    make honorsdebug
    #ifdef DEBUG
    printf("***DEBUGGING TURNED ON ***\n");
    #endif

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings after filtering ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,Filter(s[i]));
    }
}
