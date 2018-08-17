#include<stdio.h>
#include<stdlib.h>
void reverse (int * a);
#define size 10
int main (void)
{
	int arr [size];
	printf("enter 10 elements in the array:\n");
	fflush(stdout);
	for(int i = 0; i < size; i++)
	{
		scanf("%d", arr + i);
	}
	int * a = &arr[size - 1];
	reverse(a);
}

void reverse (int * a)
{
	int i = size;
	while(i > 0)
	{
		printf("%d\n", *a);
		a--;
		i--;
	}
}
