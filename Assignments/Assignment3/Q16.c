#include<stdio.h>
#include<stdlib.h>

#define size 10
void reverse (int array []);

int main (void)
{
	int array [size];
	printf("Enter Array Elements:\n");
	fflush(stdout);
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}

	reverse(array);

	for (int i = 0; i < size; i++)
	{
		printf("%d\n", array[i]);
	}
}

void reverse (int *array)
{
	int temparray[size];
	for(int i = 0; i < size; i++)
	{
		temparray[i] = array [i];
	}
	for(int i = 0; i < size; i++)
	{
		array[i] = temparray [size - 1 - i];
	}
}
