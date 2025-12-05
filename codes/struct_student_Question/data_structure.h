#ifndef DATA_STRUCTURE_H
#define DATA_STRUCTURE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int *rollno;
	char *name;
	int *marks;
	int *age;	
};



struct student* alloc_memory(int rollno, char *name, int marks, int age);

struct student ** create_list_student(int n);

void display_all_students_info(int n, struct student **list);

void display_student_as_per_rollno(int roll_no, struct student **list, int n);

void free_list(int n, struct student **list);

#endif




