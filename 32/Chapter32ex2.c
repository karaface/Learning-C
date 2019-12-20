// Example program #2 from Chapter 32 of Absolute Beginner's Guide to C, 3rd Edition
// File Chapter32ex2.c

#include <stdio.h>
#include <string.h>

float compNet(float atomWeight, float factor);

int main()
{
    float atomWeight, factor, netWeight;
    printf("What is the atomic weight?");
    scanf(" %f", &atomWeight);

    printf("What is the factor?");
    scanf(" %f", &factor);

    netWeight = compNet(atomWeight, factor);

    printf("The net weight is %.4f\n", netWeight);
    return(0);
}

float compNet(float atomWeight, float factor)
{
    float netWeight;

    netWeight = (atomWeight - factor) * .8;
    return(netWeight);
}
