#include<stdio.h>
#include<stdlib.h>
#include<string.h>

const int FALSE = 0;
const int TRUE = 1;

int CheckString (char str[]);

int main(void)
{
	char str[50];
	printf("enter string:\n");
	fflush(stdout);
	gets(str);
	int check = CheckString(str);

	if(check == 1)
		printf("no repetition");
	else if (check == 0)
		printf("characters repeated");
}

int CheckString (char str[])
{
	for(int i = 0; i<strlen(str)-1; i++)
	{
		for(int j = i+1; j<strlen(str); j++)
		{
			if(str[i] == str[j])
				return FALSE;
		}
	}
	return TRUE;
}
