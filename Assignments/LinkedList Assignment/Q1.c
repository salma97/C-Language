#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node * next;
};

struct node *head = NULL;
struct node *current = NULL;
struct node *prev = NULL;

void insert_anywhere (int data, int index);
void insert_at_last (int data);
int size_of_list (void);
void print_list (void);

int main (void)
{
	insert_at_last (10);
	insert_at_last (20);
	insert_at_last (30);
	insert_at_last (40);
	insert_at_last (50);
	insert_at_last (60);
	insert_at_last (70);

	print_list();

	insert_anywhere(20,5);

	print_list();
}

void print_list (void)
{
	struct node * ptr = head;
	while(ptr != NULL)
	{
		printf("%d - ", ptr->data);
		ptr = ptr ->next;
	}
	printf("\n");
}

void insert_at_last (int data)
{
	struct node * link = (struct node*)malloc(sizeof(struct node));

	link->data = data;
	link->next = NULL;

	if(head == NULL)
	{
		head = link;
		return;
	}

	current = head;

	while (current->next != NULL)
	{
		current = current -> next;
	}

	current->next = link;
}

int size_of_list (void)
{
	int size = 0;
	struct node * ptr ;
	ptr = head;

	if(head == NULL)
	{
		size = 0;
		return size;
	}

	while(ptr -> next != NULL)
	{
		size++;
		ptr = ptr -> next;
	}
	return (size+1);
}

void insert_anywhere (int data, int index)
{
	int x = 1;
	struct node *link = (struct node*)malloc(sizeof(struct node));

	if (index > size_of_list())
	{
		printf("invalid index\n");
		return;
	}

	if(head == NULL)
	{
		head = link;
		link->next = NULL;
		link->data = data;
		return;
	}

	if(index == 0)
	{
		link -> data = data;
		link -> next = head;
		head = link;
		return;
	}

	current = head->next;
	prev = head;

	while(current != NULL)
	{
		if(x ==  index)
			break;
		prev = current;
		current = current -> next;
		x++;
	}

	link -> data = data;
	prev->next = link;
	link->next = current;
}
