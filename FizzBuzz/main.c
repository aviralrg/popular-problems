#include <stdio.h>
#include <stdlib.h>

/* Problem Statement */
/*
"Write a program that prints the numbers from 1 to 100.
But for multiples of three print “Fizz” instead of the number
and for the multiples of five print “Buzz”.
For numbers which are multiples of both three and five print “FizzBuzz”."
*/

int main()
{
    int i = 0;
    for( i=1; i<=100; i++)
    {
        if((0 == i%3)||(0 == i%5))
        {
            if(i%3 == 0 )
            {
                printf("Fizz");
            }
            if(i%5 == 0)
            {
                printf("Buzz");
            }
        }
        else
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
