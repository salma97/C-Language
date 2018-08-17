#include<stdio.h>
#include<math.h>

int fibonacci (int element);

int main (void)
{
	int term, result;
	printf("enter the required element:\n");
	fflush(stdout);
	scanf("%d", &term);
	result = fibonacci(term);
	printf("result = %d", result);
}

/*int fibonacci (int element)
{
	int a = 1,b = 0,c = 0;
	for(int i = 1; i <= element; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}*/

int fibonacci (int element)
{
	if(element == 1)
		return 1;
	if(element == 0)
		return 0;
	else
		return (fibonacci(element - 1) + fibonacci(element - 2));
}
