#include<stdio.h>
#include<stdlib.h>

int main (void) {

	int n, sum = 0;
	printf("enter array size:\n");
	fflush(stdout);
	scanf("%d", &n);
	int *ptr = (int*)malloc(n*sizeof(int));
	printf("enter array elements:\n");
	fflush(stdout);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", ptr + i);
		sum = sum + *(ptr+i);
	}
	printf("sum = %d", sum);
	free(ptr);
}


