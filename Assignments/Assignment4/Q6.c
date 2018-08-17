#include<stdio.h>
#define size 10
int main(void)
{
	int * ptr_array [size];
	int array [size];
	printf("enter the array elements:\n");
	fflush(stdout);
	for(int i = 0; i < size; i++)
	{
		scanf("%d", array + i);
		ptr_array[i] = array + i;
		// ptr_array[i]=array[i];
	}
	int min = array [0];
	for (int i = 0; i < size; i++)
	{
		if(*ptr_array[i] < min)
			min = *ptr_array[i];
	}
	printf("min = %d\n", min);
	for(int i = 0; i < size; i++)
	{
		printf("%d\n", *ptr_array[i]);
	}
}
