#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
int stringlength (char str[]);
void reverse (char str[]);

int main (void)
{
	char str [size];
	printf("enter a string:\n");
	fflush(stdout);
	gets(str);
	reverse(str);
	puts(str);
}

void reverse (char str[])
{
	int i;
	char reversedstring [size];
	for(i = 0; i < stringlength(str) ; i++)
	{
		reversedstring [i] = str [stringlength(str) - 1 - i];
	}
	for(i = 0; i < stringlength(str) ; i++)
	{
		str[i] = reversedstring[i];
	}
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
