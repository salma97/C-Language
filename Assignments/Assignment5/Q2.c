#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	float inch;
	int feet;
}distance;

int main (void)
{
	distance x, y, sum;

	printf("enter 1st and 2nd distance in inch:\n");
	fflush(stdout);
	scanf("%f\n%f", &x.inch, &y.inch);

	sum.inch = x.inch + y.inch;

	printf("enter 1st and 2nd distance in feet:\n");
	fflush(stdout);
	scanf("%d\n%d", &x.feet, &y.feet);

	sum.feet = x.feet + y.feet;

	printf("sum in inch = %f\nsum in feet = %d\n", sum.inch, sum.feet);
}
