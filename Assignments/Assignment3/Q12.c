#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
int stringlength (char str[]);

int main (void)
{
	char str [size]; int length;
	printf("enter a string:\n");
	fflush(stdout);
	gets(str);
	length = stringlength(str);
	printf("%d", length);
}

int stringlength (char str[])
{
	int i = 0, count = 0;
	while(str[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
