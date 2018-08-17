#include <stdio.h>
#include <stdlib.h>

#define size 5
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
	for(int i = 0; i < size; i++)
	{
		if(array[i] == element)
			return i;
	}
	return -1;
}
