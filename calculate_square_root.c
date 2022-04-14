#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Declaring the function:
int calculateSquareRoot(int);


int main(void){
    int numberToCheck;

    printf("This program will calculate the square root of a number. Please type in any integer: ");
    scanf("%d", &numberToCheck);
    printf("%d", calculateSquareRoot(numberToCheck));
    //calculateSquareRoot(25);

    return 0;
};

int calculateSquareRoot(int x)
{
    int i;
    int iToTheSquare;
    int sqrRoot;

    if (x < 0)
    {
        printf("We cannot calculate the square root of a negative number. We will attempt to calculate the square");
        printf(" root of its absolute value instead.\n");
        x = -x;
    };

    for (i = 0; i <= x; i++) // i <= x in order to contemplate the square root of 1, which is 1.
    {
        iToTheSquare = i * i;
        if (iToTheSquare == x)
        {
            printf("Found the square root of %d!\n", x);
            return i;
            //printf("%d ---- %d", x, i);
            //break;
        };
    };
    if (iToTheSquare != x)
    {
        printf("Calculating the square root of this number is not possible at this stage.\n");
    };
};
