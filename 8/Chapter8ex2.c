// Example program #2 from Chapter 8 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter8ex2.c

/* This is a sample program that asks users for some basic data and prints it on screen in order to shwo what was entered */

#include <stdio.h>

main()
{

    char topping[24];
    int slices;
    int month, day, year;
    float cost;

// The first scanf will lok for a floating-point variable, that cost of a pizza
// If that user does not enter a $ before the cost, it could cause problems

    printf("How much does a pizza cost in your area ");
    printf("(Enter as $XX.XX)\n");
    scanf (" $%f", &cost);

// The pizza topping is a string, so your scanf does not need an &

    printf("What is your favorite one-word topping?\n");
    scanf(" %s", topping);

    printf("How many slices of %s pizza ", topping);
    printf("can you eat in one setting?\n");
    scanf(" %d", &slices);

    printf("What is today's date (enter it in MM/DD/YY format). \n");
    scanf(" %d/%d/%d", &month, &day, &year);

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
    printf("\nand have %d slices of %s pizza! \n", slices, topping);
    printf("It will only cost you $%.2f! \n\n\n", cost);

    return (0);
}   
