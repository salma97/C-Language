#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
int frequency (char str[] , char letter);

int main (void)
{
	char str [size]; char character;
	printf("enter a string:\n");
	fflush(stdout);
	gets(str);
	printf("enter the required character:\n");
	fflush(stdout);
	scanf("%c", &character);
	int result = frequency(str, character);
	printf("%d", result);
}

int frequency (char str[] , char letter) {

	int i = 0, count = 0;
	while(str[i] != '\0')
	{
		if (str[i] == letter)
			count++;
		i++;
	}
	return count;
}
