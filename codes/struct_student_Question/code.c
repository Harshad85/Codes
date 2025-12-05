#include "data_structure.h"

struct student* alloc_memory(int rollno, char *name, int marks, int age)
{
	int len;
	len = strlen(name);

	struct student *p =(struct student*)malloc(sizeof(struct student));
	if(p == NULL)
	{
		perror("Malloc failed for struct student\n");
	}else
	{
		p->rollno = (int *)malloc(sizeof(int));
		if(p->rollno == NULL)
		{
			perror("Malloc failed for rollno\n");
		}else
		{
			*(p->rollno) = rollno; 
		}

		p->name = (char *)malloc(len * sizeof(char));
		if(p->name == NULL)
		{
			perror("Malloc failed for name\n");
		}else
		{
			strcpy(p->name, name);
		}

		p->marks = (int*)malloc(sizeof(int));
		if(p->marks == NULL)
		{
			perror("Malloc failed for marks\n");
		}
		else
		{
			*(p->marks) = marks;
		}

		p->age = (int*)malloc(sizeof(int));
		if(p->age == NULL)
		{
			perror("Malloc failed for age\n");
		}else
		{
			*(p->age) = age;
		}
	}                             

	return p;
}

struct student ** create_list_student(int n)
{
	struct student **list = (struct student**)malloc(n * sizeof(struct student*));


	for(int i=0; i<n; i++)
	{
		struct student temp;
		char name[256];
		int rollno, marks, age;
    
		
		printf("\nplease enter student Rollno : ");
		scanf("%d", &rollno);
		
		printf("\nplease enter student name : ");
		scanf("%s", name);
		
		printf("\nplease enter student age : ");
		scanf("%d", &age);
		
		printf("\nplease enter student marks : ");
		scanf("%d", &marks);
		


		list[i] = alloc_memory(rollno, name, marks, age);
	}

	return list;
}
void display_all_students_info(int n, struct student **list)
{
	for(int i=0; i<n; i++)
	{
		if(list[i] != NULL)
		{
			printf("\nStudent Roll No: %d\n", *(list[i]->rollno));
			printf("\nStudent Name: %s\n", list[i]->name);
			printf("\nStudent Age: %d\n", *(list[i]->age));
			printf("\nStudent Marks: %d\n", *(list[i]->marks));
		}
		printf("\n------------------------------------------------------------------------\n");
	}

	
}

void display_student_as_per_rollno(int roll_no, struct student **list, int n)
{
	for(int i=0; i<n; i++)
	{
		if(*(list[i]->rollno) == roll_no)
		{
			printf("\n----------------------------------");
			printf("Student ROllno: %d\n",*(list[i]->rollno));
			printf("name : %s\n",(list[i]->name));
			printf("Marks: %d\n",*(list[i]->marks));
			printf("Age : %d\n",*(list[i]->age));
			printf("\n----------------------------------");	
		}

	}

}

void free_list(int n, struct student **list)
{
	for(int i=0; i<n; i++)
	{
		free(list[i]->age);
		free(list[i]->marks);
		free(list[i]->name);
		free(list[i]->rollno);
		free(list[i]);
	}
	free(list);
}