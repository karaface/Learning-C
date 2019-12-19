// Example program #3 of Chapter 31 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter31ex3.c

/* The program demonstrates passing a variable to a function by address. */

#include<stdio.h>

int main()
{
    int i;

    printf("Please enter an integrer...\n");
    scanf(" %d", &i);

    half(&i); // Now call the half function, passing the address of i
    printf("In main(), i is now %d.\n", i); // Shows the function did alter i's value

    return(0);
}

half(int *i) // Receives the address of i
{
    *i = *i / 2;
    printf("Your value halved is %d.\n", *i);
    return; // Return to main
}
