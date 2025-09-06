/*
 *Name: Linn
 *Description: Finding the Fibonacci Sequence of the user inputted number
 *Date: 09/02/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    void fibonacciSum(int num) {

        /*Will prompt the user if they give an invalid digit*/
       if (num < 1 ) {

           printf("Please use a number greater than 1.\n");

       }

        int F1 = 1;
        int F2 = 0;

        //for loop that prints the fibonacci series and updates the terms.
        for (int i = 0; i <= num; i++) {

            if (i > 2) {
                int Fc = F1 + F2;
                F2 = F1;
                F1 = Fc;
                printf("%d ", Fc);
            } else if (i == 1) {

                printf("%d ", F2);

            } else if (i == 2) {

                printf("%d ", F1);

            }

        }

    }


int main(void) {

    int userInput;

    printf("Enter a Digit: ");
        scanf(" %d", &userInput);

        fibonacciSum(userInput);


    return 0;
}