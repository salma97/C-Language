/**************************************************************************************************
 Name        : ex13.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 13
 **************************************************************************************************/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    int input;
    int i;
    int not_prime_num = FALSE;
    printf("Please enter the required number : ");
    scanf("%d",&input);

    for(i=2;i<(input/2);i++)
    {
        if(input%i == 0)
        {
            not_prime_num = TRUE;
            printf("\n%d is not prime number\n",input);
            /* terminate the loop as no need to continue the loop iterations */
			break;
        }
    }
    /* in case the not_prime_num still equals FALSE which means that the number can not be divided
       by another number */

    if(not_prime_num == FALSE)
    {
        printf("\n%d is a prime number\n",input);
    }
    return 0;
}
