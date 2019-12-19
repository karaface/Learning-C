// Example program #1 from Chapter 22 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter22ex1.c

/* This program takes an ID number from the user and then checks the ID against a list of customers in the database. 
 * If the customer exists, it uses that array element to check their current balance, and warns the user if the balance is more than 100. */

#include <stdio.h>

int main()
{
    int ctr; // Loop counter
    int idSearch; // Customer to look for (the key)
    int found = 0; // Will be 1 (true) if customer is found

    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00, 299.67, 18.31, 59.54};

    /* Interact with the user looking for a balance. */
    printf("\n\n*** Customer Balance Lookup ***\n");
    printf("What customer number do you need to check?\n");
    scanf("%d", &idSearch);

    /* Search to see if the customer ID exists in the array */
    for (ctr = 0; ctr < 10; ctr++)
    {
        if (idSearch == custID[ctr])
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        if (custBal[ctr] > 100.00)
        {
            printf("\n** The customer's balance is $%.2f.\n", custBal[ctr]);
            printf("No additional credit.\n");
        } 
        else
        {
            printf("\n** The customer's credit is good!\n");
        }
    }

    else
    {
        printf("** You must enter a correct customer ID.");
        printf("\n    ID %3d was not in the list.\n", idSearch);
    }

    return 0;
}
