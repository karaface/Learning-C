// Example program #4 from Chapter 31 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter31ex4.c

/* The program demonstrates passing multiple variables to a function. */

#include<stdio.h>

// The following statement will be explain in Chapter 32
changeSome(int i, float *newX, int iAry[5]);

int main()
{
    int i = 10;
    int ctr;
    float x = 20.5;

    int iAry[] = {10, 20, 30, 40, 50};

    puts("Here are main()'s variables function the function:");
    printf("i is %d\n", i);
    printf("x is %.1f\n", x);
    for(ctr = 0; ctr < 5; ctr++)
    {
        printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
    }

    // Now call the changeSome function, passing the value of i and the address of x (hence the "&")

    changeSome(i, &x, iAry);

    puts("\n\nHere are main()'s variables after the function:");
    printf("i is %d\n", i);
    printf("x is %.1f\n", x);
    for(ctr = 0; ctr < 5; ctr++)
    {
        printf("iAry[%d] is %d\n", ctr, iAry[ctr]);
    }   
    
    return(0);
}

changeSome (int i, float *newX, int iAry[5])
{
    // All variables are changed within this function, but only the float and array remain changed when the program returns to main()

    int j;

    i = 47;
    *newX = 97.6; // Same location as x in main
    
    for(j = 0; j < 5; j++)
    {
        iAry[j] = 100 + 100*j;
    }
    return;
}
