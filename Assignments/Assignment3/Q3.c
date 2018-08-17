#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Size 6

void swap (int * ptr1, int * ptr2);
void BubbleSort (int array[]);

int main (void)
{
	int array [Size];
	printf("enter the array elements:\n");
	fflush(stdout);
	for(int i = 0; i<Size; i++)
	{
		scanf("%d", &array[i]);
	}

	BubbleSort(array);

	for(int i = 0; i<Size; i++)
	{
		printf("%d\t", array[i]);
	}

}

void BubbleSort (int array[])
{
	for(int i = 1; i<=Size; i++)
	{
		int x = 0;
		for(int j = 0; j<Size - i; j++)
		{
			if(array[j] > array[j+1])
			{
				swap(&array[j], &array[j+1]);
				x = 1;
			}
		}
		if(x==0)
			break;
	}
}

void swap (int * ptr1, int * ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
