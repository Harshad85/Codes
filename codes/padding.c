#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
struct emp
{
	int a;
	char x;
	int b;
}__attribute__((__packed__));

struct e2
{
	double  x;
	char c;
	int a;
	//char c1;
};
struct p
{
	double a;
	int a1;
	/* data */
};
struct p2
{
	//struct p qq;
	double a;
	int a1;
	int m;
};

struct student
{
	int roll_no;
	char name[8];
	double marks;	
};

int main()
{
	struct emp a;
	struct student q;
	printf(" size of struct %d ", sizeof(q));
	



	return 0;
}
