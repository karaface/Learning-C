// Example program #2 from Chapter 28 of Absolute Beginner's Guide to C, 3rd #dition
// File Chapter28ex2.c

/* The program takes the book info file from the first example of chapter 28; also reads each line from the file outputs it to the screen. */

#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main()
{
    char fileLine[100]; // Will hold each line of input
    fptr = fopen("BookInfo.txt", "r");

    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }

    else
    {
        printf("\nError opening file.\n");
    }
    fclose(fptr); // Always close your files
    return(0);
}
