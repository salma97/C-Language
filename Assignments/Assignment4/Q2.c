#include<stdio.h>
#include<stdlib.h>
int length (char const * ptr);
int main (void)
{
	char a[50];
	printf("enter string:\n");
	fflush(stdout);
	gets(a);
	char * ptr = a;
	int string_length = length(ptr);
	printf("string length = %d", string_length);
}

int length (char const * ptr)
{
	int count = 0;
	while(*ptr != '\0')
	{
		count ++;
		ptr ++;
	}
	return count;
}
