// Example program #1 from Absolute Beginnner's Guide to C, 3rd Edition
// File Chapter24ex1.c

/* This program demostrates pointers by declaring and initializing both regular and pointer variables for int, float and char types
 * and then displays the values of each. */

#include <stdio.h>

int main()
{
    int kids;
    int *pKids;
    float price;
    float *pPrice;
    char code;
    char *pCode;

    price = 17.50;
    pPrice = &price;

    printf("\nHow many kids are you taking to the water park?");
    scanf("%d", &kids);

    pKids = &kids;

    printf(" \nDo you have a discount ticket for the park?");
    printf("\nEnter (E) for Employee Discount, (S) for Sav-More Discount or (N) for No Discount: \n");
    scanf("%d", &code);

    pCode = &code;

    printf("\nFirst let's do it with the variables:\n");
    printf("You have %d kids...\n", kids);
    switch (code) {
        case ('E'):
            printf("The employee discount saves you 25%% on the $%.2f price", price);
            printf("\nTotal ticket cost: $%.2f", (price * .75 * kids));
            break;
        case('S'):
            printf("The Sav-More discount saves you 15%% on the $%.2f price", price);
            printf("\nTotal ticket cost $%.2f", (price * .85 * kids));
            break;
        default: // Either entered N or an invalid entry
            printf("You will be paying the full price of $%.2f for your tickets", price);
            printf("\nTotal ticket cost $%.2f", (price * kids));
    }

    /* Now repeat the same code, but use dereferenced pointers to get the same results */

    printf("\n\n\nNow let's do it with the pointers:\n");
    printf("you have got %d kids...\n", *pKids);
        switch (*pCode) {
        case ('E'):
            printf("The employee discount saves you 25%% on the $%.2f price", *pPrice);
            printf("\nTotal ticket cost: $%.2f", (*pPrice * .75 * *pKids));
            break;
        case('S'):
            printf("The Sav-More discount saves you 15%% on the $%.2f price", *pPrice);
            printf("\nTotal ticket cost $%.2f", (*pPrice * .85 * *pKids));
            break;
        default: // Either entered N or an invalid entry
            printf("You will be paying the full price of $%.2f for your tickets", *pPrice);
            printf("\nTotal ticket cost $%.2f", (*pPrice * *pKids));
    }

    return 0;
}
