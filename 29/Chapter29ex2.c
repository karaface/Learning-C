// Example program #2 from Chapter 29 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter29ex2.c

/* The program opens the file create in the first program of the chapter and changes one of the leters to an *.
 * It then prints the new list with the altered list of letters. */

#include <stdio.h>
#include <stdlib.h>
FILE *fptr;

int main()
{
    char letter;
    int i;

    fptr = fopen("letters.txt", "r+");

    if (fptr == 0)
    {
        printf("There was an error while opening the file.\n");
        exit(1);
    }

    printf("Which # letter would you like to change (1-26)?");
    scanf(" %d", &i);

    fseek(fptr, (i-1), SEEK_SET); // Seeks that position from the beginning of the file, subtract 1 from position because array starts at 0
    
    fputc('*', fptr); // Write an * over the letter in that position

    fseek(fptr, 0, SEEK_SET); // Jump back to the beginning of the array and print it out
    printf("Here is the file now:\n");
    for (i = 0; i < 26; i++)
    {
        letter = fgetc(fptr);
        printf("The next letter is %c.\n", letter);
    }
    
    fclose(fptr); // Close files
    return(0);
}
