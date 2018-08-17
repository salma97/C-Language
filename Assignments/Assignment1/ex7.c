/**************************************************************************************************
 Name        : ex7.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 7
 **************************************************************************************************/

#include <stdio.h>

int main()
{
    int input1,input2,input3;
    int Min;
    printf("Please enter the three numbers : ");
    scanf("%d%d%d",&input1,&input2,&input3);
	
	/* Assume that the first number is the minimum number */
    Min=input1;
	
    if(input2<=Min)
    {
        Min=input2;
    }
    if(input3<=Min)
    {
        Min=input3;
    }
	
    printf("the min number is: %d",Min);
    return 0;
}
