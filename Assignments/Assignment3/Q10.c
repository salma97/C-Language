#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
void convert (char str[]);

int main (void)
{
	char str [size];
	printf("enter a string:\n");
	fflush(stdout);
	gets(str);
	convert(str);
	puts(str);
}

void convert (char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
}
