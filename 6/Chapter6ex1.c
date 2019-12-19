// Example program #1 from Chapter 6 of 
// Aboslute Beginner's Guide to C, 3rd Edition
// File Chapter6ex1.c
//
// This program pairs three kids with their favorite superhero

#include <stdio.h>
#include <string.h>

main()

{

char Kid1[12]; // Kid1 can hoild an 11-character name
char Kid2[] = "Maddie"; // Kid2 will be 7 characters (Maddie plus null 0)
char Kid3[7] = "Andrew"; // Kid3 is also 7 characters, but specifically defined

char Hero1[7] = "Batman"; // Hero1 will be 7 characters (adding null 0!)
char Hero2[34] = "Spiderman"; // Hero2 will have extra room just in case
char Hero3[25];

    Kid1[0] = 'K'; // Kid1 is being defined character-by-character
    Kid1[1] = 'a'; // Not efficient, but it does work
    Kid1[2] = 't'; 
    Kid1[3] = 'i'; 
    Kid1[4] = 'e';
    Kid1[5] = '\0'; // Never forget the null 0 so C knows when the string ends

    strcpy(Hero3, "The Incredible Hulk");

    printf("%s\'s favorite hero is %s. \n", Kid1, Hero1);
    printf("%s\'s favorite hero is %s. \n", Kid2, Hero2);
    printf("%s\'s favorite hero is %s. \n", Kid3, Hero3);

    return 0;
} 
