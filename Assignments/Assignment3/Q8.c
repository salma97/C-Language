#include<stdio.h>
#include<math.h>

int GeometricSeries (int term);

int main(void)
{
	int term, result;
	printf("enter the number of the term you want:\n");
	fflush(stdout);
	scanf("%d",&term);
	result = GeometricSeries(term-1);
	printf("result = %d", result);
}

int GeometricSeries (int term)
{
	return (pow(3,term));
}
