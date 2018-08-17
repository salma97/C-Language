#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sum (int array[], int size);
int main(void)
{
	int array [10];
	printf("enter the array elements:\n");
	fflush(stdout);
	for(int i = 0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}

	int result = sum (array , 10);
	printf("the sum = %d", result);
}

int sum (int array[], int size)
{
	int sum = 0;
	for(int i = 0; i<size; i++)
	{
		sum = sum + array[i];
	}
	return sum;
}
