/**************************************************************************************************
 Name        : ex20.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 20
 **************************************************************************************************/

#include <stdio.h>

int main(void)
{
	int i, j, rows;
	
	printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("\n");
	
	/* Loop for each row */
	for(i=0;i<rows;i++)
	{
		/* print the left spaces */
		for(j=i;j<rows-1;j++) printf(" ");

		/* print the stars */
		for(j=0;j<((2*i)+1);j++) printf("*");

		printf("\n");
	}
	return 0;
}

