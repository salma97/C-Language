#include<stdio.h>
#include<stdlib.h>

int ArithmeticSeries (int term);

int main(void)
{
	int term, result;
	printf("enter the number of the term you want:\n");
	fflush(stdout);
	scanf("%d",&term);
	result = ArithmeticSeries(term-1);
	printf("result = %d", result);
}

int ArithmeticSeries (int term)
{
	return 2*term +1;
}
