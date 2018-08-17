#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	char name [50];
	int marks;
	char roll;
}st;

int main (void)
{
	strcpy(st.name, "Salma Tarek");
	st.marks = 90;
	st.roll = 'F';
	printf("student's name: ");
	puts(st.name);
	printf("student's marks: %d\nstudent's roll: %c", st.marks, st.roll);
}
