// Example program #1 from Chapter 23 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter 23ex1.c

/* This program generates 10 random numbers and then sorts them */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ctr, inner, outer, didSwap, temp;
    int nums[10];
    time_t t;

    srand(time(&t)); // Seed random numbers

    for (ctr = 0; ctr < 10; ctr++) // First step is to fill the array with random numbers 1-100
    {
       nums[ctr] = (rand() % 99) + 1;
    } 

    // Now list the array as it is currently before sorting

    puts("\nHere is the list before the sort:");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    // Sort the array

    for (outer = 0; outer < 9; outer++)
    {
        didSwap = 0; // Becomes true if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (nums[inner] < nums[outer])
            {  
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
                didSwap = 1;
            }
        }
            if (didSwap == 0)
            {
                break;
            }
    }

    puts("\nHere is the list after the sort:"); // Now list the array as it is currently after sorting
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", nums[ctr]);
    }

    return 0;
}
