#include "data_structure.h"

int main()
{
	int n;
	struct student **list;
	printf("Enter no of students : ");
	scanf("%d", &n);
	list = create_list_student(n);
	display_all_students_info(n, list);free(list[i]->age);
	free_list(n, list);

	return 0;
}
