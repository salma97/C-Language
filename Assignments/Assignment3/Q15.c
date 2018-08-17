#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
void concatenate (char str1[] , char str2[]);

int main (void)
{
	char str1 [size], str2 [size];
	printf("enter 1st string:\n");
	fflush(stdout);
	gets(str1);
	printf("enter 2nd string:\n");
	fflush(stdout);
	gets(str2);
	concatenate(str1,str2);
	puts(str1);
}

void concatenate (char str1[] , char str2[])
{
	int x = 0;
	for(int i = 0; i < size; i++)
	{
		if(str1[i] == '\0')
		{
			for(int h = 0; h < size; i++, h++)
			{
				str1[i] = str2[h];
				if(str2[h] == '\0')
				{
					x = 1;
					break;
				}
			}
		}
		if (x == 1)
			break;
	}
}
