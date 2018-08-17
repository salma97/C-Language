#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
void swap (char str1[] , char str2[]);
int stringlength (char str[]);

int main (void)
{
	char str1 [size], str2 [size];
	printf("enter 1st string:\n");
	fflush(stdout);
	gets(str1);
	printf("enter 2nd string:\n");
	fflush(stdout);
	gets(str2);
	swap (str1 , str2);
	puts(str1);
	puts(str2);
}

void swap (char str1[] , char str2[])
{
	char temp [size]; int i = 0;
	while (i <= stringlength(str1))
	{
		temp[i] = str1[i];
		str1[i] = str2[i];
		str2[i] = temp[i];
		i++;
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

