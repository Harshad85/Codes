#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
	struct node* prev;

}node;

node* head = NULL;

node* node_malloc(int data)
{
 node* ptr = (node*) malloc(sizeof(node));

 if(ptr == NULL)
 {
	 printf("Error!!, malloc failed!\n");
 }else
 {
	 ptr->data = data;
	 return ptr;
 }

}




void add_first(int data)
{
	node* new_node = node_malloc(data);
	if(head == NULL)
	{
		head = new_node;
		new_node->prev = new_node;
		new_node->next = head;
	}
	else
	{
		new_node->next = head;
		new_node->prev = head->prev;
		head->prev->next = new_node;
		head->prev = new_node;
		head = new_node;
	}
	printf("Added node at first position \n");
}

void display_list()
{
	if(head == NULL)
	{
		printf("Empty list\n");
		
	}
	else
	{
		node* trav = head;
		while(trav->next != head)
		{
			printf("%d->", trav->data);
			trav = trav->next;
		}
	}



}

void add_last(int data)
{
	if(head == NULL)
	{
		add_first(data);
	}
	else
	{
		node* new_node = node_malloc(data);
		new_node->prev = head->prev;
		new_node->next = head;
		head->prev->next = new_node;
		head->prev = new_node;
	}
	printf("Add at last\n");


}

void add_pos(int data, int pos)
{


}

void delete_first()
{



}

void delete_pos(int pos)
{



}

void delete_last()
{



}



int main()
{
	int ch=100, f=0;
/*	
	printf("Enter your choice \n");
	printf("0. EXIT\n");
	printf("1. Add at first\n");
	printf("2. Add at position\n");
	printf("3. Add at last\n");
	printf("4. Delete at first\n ");
	printf("5. Delete at position\n");
	printf("6. Delete at last\n");
	printf("7. Display list\n");
	printf("-------------------");
	printf("\n");
	scanf("%d", &ch);
	printf("-----------------------------------------\n");
	
	while(ch !=0)
	{

	switch(ch)
	{
		case 0:
			break;

		case 1:
			int data;
			printf("Enter data: \n");
			scanf("%d ", &data);
			add_first(data);
			break;

		case 2:
			
			int data2, pos;
			printf("Enter data and postion of node : \n");
			scanf("%d %d", &data2, &pos);
			add_pos(data2, pos);
			break;
			
		case 3:
			
			int data3;
			printf("Enter the data: \n");
			scanf("%d ", &data3);
			add_last(data3);
			break;
			
		case 4:
			delete_first();
			break;

		case 5:
			int pos2;
			printf("Enter position to delete the node:  \n");
			scanf("%d ", &pos2);
			delete_pos(pos2);
			break;
		case 6:
			delete_last();
			break;

		case 7:
			display_list();
			break;

		default:
			printf("Wrong choice, Tey again!!\n");
			break;

	};

	
	printf("Enter your choice \n");
	printf("0. EXIT\n");
	printf("1. Add at first\n");
	printf("2. Add at position\n");
	printf("3. Add at last\n");
	printf("4. Delete at first\n ");
	printf("5. Delete at position\n");
	printf("6. Delete at last\n");
        printf("-------------------");
        printf("\n");
        scanf("%d ", &ch);
        printf("-----------------------------------------\n");	
	
}
*/

add_first(100);
add_first(2000);
add_first(3000);
add_last(10);
add_last(20);
add_last(30);
display_list();


	return 0;
}
