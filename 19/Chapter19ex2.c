// Example program #2 from Chapter 19 of Absolute Beginner's Guide, 3rd Edition
// File Chapter19ex2.c

/* This program asks a user for their hometown and the two-letter abbreviation of their homestate.
 * It then uses string concatenation to build a new string with both town and state and prints it using puts. */

// stdio.h is needed for puts() and gets()
// string.h is needed for strcat()

#include <stdio.h>
#include <string.h>

main()
{
    char city[25];
    char st[3]; // 2 chars for state abbreviation and one for the null zero
    char fullLocation[28] = "";

    puts("What town do you live in?");
    gets(city);

    puts("What state do you live in? (2-letter abbreviation)");
    gets(st);

    /* Concatenates the strings */
    strcat(fullLocation, city);
    strcat(fullLocation, ", "); // Adds a comma and a space between the city and state abbreviation
    strcat(fullLocation, st);

    puts("\nYou live in ");
    puts(fullLocation);
    return 0;
}
