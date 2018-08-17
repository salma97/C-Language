#include<stdio.h>
#include<stdlib.h>

union family_name {
	char first_name [30];
	char last_name [30];
};

int main (void)
{
	union family_name X;
	printf("enter first name:\n");
	fflush(stdout);
	gets(X.first_name);
	printf("size of union = %d\n", sizeof(union family_name));
	printf("last name : ");
	puts(X.last_name);
}
