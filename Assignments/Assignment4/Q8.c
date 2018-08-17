#include<stdio.h>
#define size 5
void swap (char * a , char * b);
int main (void)
{
	char str1 [size], str2 [size];
	printf("enter 1st string:\n");
	fflush(stdout);
	gets(str1);
	printf("enter 2nd string:\n");
	fflush(stdout);
	gets(str2);
	swap(str1, str2);
	puts(str1);
	puts(str2);
}

void swap (char * a , char * b)
{
	char temp [size];
	for(int i = 0; i < size; i++)
	{
		temp[i] = *(a + i);
		*(a + i) = *(b + i);
		*(b + i) = temp[i];
	}
}
