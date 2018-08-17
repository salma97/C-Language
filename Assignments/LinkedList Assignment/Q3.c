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
void middle_node_data (int* middle);
int nth_element_from_the_end (int n);

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

	int middle_before_insertion;
	middle_node_data (&middle_before_insertion);

	printf("middle data = %d\n", middle_before_insertion);

	insert_anywhere(20,2);

	print_list();

	int middle_after_insertion;
	middle_node_data (&middle_after_insertion);

	printf("middle data = %d\n", middle_after_insertion);

	int _5th_element = nth_element_from_the_end (5);
	int _4th_element = nth_element_from_the_end (4);

	printf("5th element = %d\n", _5th_element);
	printf("4th element = %d\n", _4th_element);
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
	prev -> next = link;
	link -> next = current;
}

void middle_node_data (int *middle)
{
	if(head == NULL)
	{
		printf("list is empty");
		return;
	}

	if (size_of_list() == 1)
	{
		*middle = head -> data;
		return;
	}

	int x = size_of_list();
	x = x/2;

	int index = 0;
	current = head;

	while(index != x)
	{
		index++;
		current = current -> next;
	}
	*middle = current -> data;
}

int nth_element_from_the_end (int n)
{
	if(head == NULL)
	{
		printf("list is empty");
	}

	if(head->next == NULL)
	{
		return head->data;
	}

	current = head;

	for(int i = 0; i < size_of_list() - n; i++)
	{
		current = current -> next;
	}

	return current -> data;
}
