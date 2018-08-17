#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
void RemoveExceptChar (char str[]);

int main (void)
{
	char str [size];
	printf("enter a string:\n");
	fflush(stdout);
	gets(str);
	RemoveExceptChar(str);
	puts(str);
}

void RemoveExceptChar (char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		{
			i++;
			continue;
		}
		else
		{
			int j = i;
			while(str[j] != '\0')
			{
				str[j] = str [j+1];
				j++;
			}
		}
	}
}
