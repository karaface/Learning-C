// Example program #2 from Chapter 31 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter31ex2.c

/* This program demonstrates passing an array to a function. */

#include<stdio.h>
#include<string.h>

int main()
{
    char name[15] = "Michael Hatton";
    change(name);
    printf("Back in main(), the name is now %s.\n", name);
    
    return(0);
}

change(char name[15]) // Recieves the value of i
{
    strcpy(name, "XXXXXXXXXXXXXXXX"); // Change the string store at the address pointed to by the name
    return; // Returns to main
}


