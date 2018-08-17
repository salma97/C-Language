#include<stdio.h>
#define size 10
void minimum (const int * array, int * minptr );
int main (void)
{
	int array [size];
	int * minptr = array;
	printf("enter array elements:\n");
	fflush(stdout);
	for(int i = 0; i < size; i++)
	{
		scanf("%d", array + i);
	}
	minimum (array, minptr);
	printf("smallest element = %d", *minptr);
}

void minimum (const int * array, int * minptr )
{
	for(int i = 0; i < size; i++)
	{
		if(*(array + i) < *minptr )
		{
			*minptr = *(array+i);
		}
	}
}
