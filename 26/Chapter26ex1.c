// Example program #1 from Chapter 26 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter26ex1.c

/* The program looks for a number of random integers, allocates an array and fiils it with numbers between 1 and 500, 
 * then loops through all the numbers and figures out the smallest, biggest and average. Then frees the memory. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, aSize;
    int *randomNums;
    time_t t;

    double total = 0;
    int biggest, smallest;
    float average;

    srand(time(&t));

    printf("How many random numbers do you want in your array?");
    scanf(" %d", &aSize);

    // Allocate an array of integers equal to the number of elements requested by the user

    randomNums = (int *) malloc(aSize * sizeof(int));

    // Test to ensure the array allocated properly

    if (!randomNums)
    {
        printf("Random array allocation failed!\n");
        exit (1);
    }

    // Loops through the array and assigns a random number between 1 and 500 to each element 

    for (i = 0; i < aSize; i++)
    {
        randomNums[i] = (rand() % 500) + 1;
    }

    // Initialize the biggest and smallest number for comparison's sake

    biggest = 0;
    smallest = 500;

    // Loop through the now-filled array testing for the random numbers that are biggest, smallest and adding all numbers together to calculate an average
    
    for (i = 0; i < aSize; i++)
    {
        total += randomNums[i];
        if (randomNums[i] > biggest)
        {
            biggest = randomNums[i];
        }
        if (randomNums[i] < biggest)
        {
            smallest = randomNums[i];
        }
    }

    average = ((float)total) / ((float)aSize);
    printf("The biggest random number was %d.\n", biggest);
    printf("The smallest random number was %d.\n", smallest);
    printf("The average of the random numbers is %.2f.\n", average);

    // When you use malloc, remember to then use free

    free(randomNums);

    return (0);
}
