#include <stdio.h>
#include <stdlib.h>

#define size 6
int getindex(int array[], int element);

int main(void) {

	int array[size];
	int element;
	printf("enter the array elements:\n");
	fflush(stdout);
	for(int i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("enter the required element:\n");
	fflush(stdout);
	scanf("%d", &element);
	int index = getindex(array, element);
	if(index != -1)
		printf("the index is %d", index);
	else
		printf("element not found\n");
}

int getindex (int array[], int element)
{
	int index = -1;
	for(int i = 0; i < size; i++)
	{
		if(array[i] == element)
		{
			index = i;
		}
	}
	return index;
}
