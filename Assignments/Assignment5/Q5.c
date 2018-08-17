#include<stdio.h>
#define size 10

typedef struct {
	char name [50];
	int ID;
	int grade;
}student;

void Store (student array [])
{
	for(int i = 0; i < size; i++)
	{
		printf("enter name of student %d:\n", i+1);
		fflush(stdout);
		scanf("%s", array[i].name);
		printf("enter student ID:\n");
		fflush(stdout);
		scanf("%d", &(array+i)->ID);
		printf("enter student grade:\n");
		fflush(stdout);
		scanf("%d", &array[i].grade);
	}
}

void Print (student * array)
{
	for (int i = 0; i < size; i++)
	{
		printf("Student name: ");
		puts((array+i)->name);
		printf("Student ID: %d", (array+i)->ID);
		printf("Student grade: %d", array[i].grade);
	}
}

int main(void)
{
	student arr[size];
	Store(arr);
	Print(arr);
}
