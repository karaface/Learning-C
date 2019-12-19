// Example program #1 from Chapter 31 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter31ex1.c

/* This program demonstrates passing a variable to a function by value. */

#include <stdio.h>

int main()
{
    int i;

    printf("Please enter an integer...");
    scanf(" %d", &i);

    // Now call the half function, passing the value of i

    half(i); 

    // Shows that the function did not alter i's value
   
    printf("In main(), i is still %d.\n", i);

    return(0); // Ends program
}

/**********************************************************************************/

/* Sometimes putting dividers like the one above is a nice break between your different functions. */

int half (int i) // Recieves the value of i
{
    i = i / 2;
    printf("Your value halved is %d.\n", i);
    return; // Returns to main
}
