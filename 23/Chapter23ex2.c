// Example program #2 from Absolute Beginner's Guide to C, 3rd Edition
// File Chapter23ex2.c

/* This program searches a sorted list of customer IDs in order to get credit total */

#include <stdio.h>

int main()
{
    int ctr; // Loop counter
    int idSearch; // Customer ID to look for 
    int found = 0; // Will be true if found

    /* Define the 10 elements in each of the parallel arrays */

    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.53, 71.23, 301.56, 9.08, 192.41, 389.00, 229.67, 18.31, 59.54};
    int tempID, inner, outer, didSwap, i; // Sorting variables
    float tempBal;

    // First, sort the arrays by customer ID

    for (outer = 0; outer < 10; outer++)
    {
        didSwap = 0; // Becomes true if list is not yet ordered
        for (inner = outer; inner < 10; inner++)
        {
            if (custID[inner] < custID[outer])
            {
                // Must switch both arrays or they are no longer linked
                tempID = custID[inner]; 
                tempBal = custBal[inner];

                custID[inner] = custID[outer];
                custBal[inner] = custBal[outer];
                custID[outer] = tempID;
                custBal[outer] = tempBal;
                didSwap = 1; // True because a swap took place
            }
        }
    }

    /* Interact with the user looking to find a balance */

    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What is the customer number?");
    scanf("%d", &idSearch);

    // Now, look for the ID in the array
    
    for (ctr = 0; ctr < 10; ctr++)
    {
        if (idSearch == custID[ctr]) // Do they match?
        {
            found = 1; // Yes, match flag set to TRUE
            break; // No need to keep looping
        }
        if (custID[ctr] > idSearch) // No need to keep searching
        {
            break;
        }
    }

    // Once the loop has completed, the ID was either found (found = 1) or not

    if (found)
    {
        if (custBal[ctr] > 100)
        {
            printf("\n** The customer's balance is $%.2f.\n", custBal[ctr]);
            printf("No additional credit.\n");
        }
        else // Balance is less than $100.00
        {
            printf("\n**The customer's credit is good!\n");
        }
    }
    else // ID was not found
    {
            printf("** You have entered an incorrect customer ID.");
            printf("\n ID %3d was not found in the list.\n", idSearch);
    }

    return 0;
}
