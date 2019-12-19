// Example program #1 from Chapter 30 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter30ex1.c

/* The program is a simple demonstration of the difference between global variables and local variables */

#include <stdio.h>
int g1 = 10;

int main()
{
    float l1;
    l1 = 9.0;

    printf("%d %.2f\n", g1, l1); // Prints the 1st global and local variable

    prAgain(); // Calls our first function
    return(0);
}

float g2 = 19.0;

int prAgain()
{
    int l2 = 5;

    printf("%d %.2f %d\n", l2, g2, g1); // Cannot print l1, as it is local to main()
    return;
}
