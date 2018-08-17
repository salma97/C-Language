#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int real;
	int imaginary;
}TrigComplex;

TrigComplex ComplexSum (TrigComplex x, TrigComplex y)
{
	TrigComplex sum;
	sum.real = x.real + y.real;
	sum.imaginary = x.imaginary + y.imaginary;

	return sum;
}

int main (void)
{
	TrigComplex x, y;
	printf("enter 1st complex number (real part first then the imaginary part):\n");
	fflush(stdout);
	scanf("%d\n%d", &x.real, &x.imaginary);
	printf("enter 2nd complex number (real part first, then the imaginary part):\n");
	fflush(stdout);
	scanf("%d\n%d", &y.real, &y.imaginary);

	TrigComplex sum = ComplexSum(x,y);
	printf("summation = %d + i%d", sum.real , sum.imaginary);
}
