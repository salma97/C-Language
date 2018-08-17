#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 5

void SelectionSort (int array[]);

int main(void)
{
	int array [5] = {5,2,1,4,3};
	SelectionSort(array);
	for(int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
}

void SelectionSort (int array[]) {
	int min;
	for(int i = 0; i < size; i++)
	{
		min = i;
		for(int j = i+1; j < size; j++)
		{
			if(array[j] < array[min])
			{
				min = j;
			}
		}
		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}
