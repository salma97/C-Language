#include<stdio.h>
void swap (int *x, int *y);
int main(void)
{
	int x, y;
	printf("enter two numbers:\n");
	fflush(stdout);
	scanf("%d %d", &x, &y);
	void (*swapptr) (int*, int*) = swap;
	swapptr(&x, &y);
	printf("x = %d\ny = %d\n", x,y);
}

void swap (int *x, int *y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}
