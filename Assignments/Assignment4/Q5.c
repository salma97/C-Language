#include<stdio.h>
#define size 50
void copystring (char * a, char * b);
int main(void)
{
	char str1 [size], str2[size];
	printf("enter 1st string:\n");
	fflush(stdout);
	gets(str1);
	copystring(str1, str2);
	puts(str2);
}

void copystring (char * a, char * b)
{
	int i = 0;
	while (i < size)
	{
		/* b[i] = a[i];
		i++; */

		/* *b = *a;
		b++;
		a++;
		i++; */

		*(b + i) = *(a + i);
		i++;
	}
}
