#include <stdio.h>
#define SIZE 10
#define ROW 4
#define COL 4

void display(int *arr)
{
	for(int i=0; i<SIZE; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");

}	


void assign_value(int *arr)
{
	for(int i=0; i<SIZE; i++)
	{
		arr[i] = i+1;
	}
}

void display_2d(int arr[ROW][COL])
{
	for(int i=0; i<ROW; i++)
	{
		for(int j=0; j<COL; j++)
		{
			printf("%d ", *(*(arr +i) + j));
		}

		printf("\n");
	}

}

void assign_value2d(int arr[ROW][COL])
{
	for(int i=0; i<ROW; i++)
	{
		switch(i)
		{
			case 0:
				for(int j=0; j<COL; j++)
				{
					*(*(arr + i) + j) = j+1;
				}
				break;

			case 1:
				for(int j=0; j<COL; j++)
				{
					*(*(arr + i) + j) = j+10 + 1;
				}
				break;

			case 2:
				//break;
				for(int j=0; j<COL; j++)
				{
					*(*(arr + i) + j) = j+100 + 1;
				}
				break;
			case 3:
				//break;
				for(int j=0; j<COL; j++)
				{
					*(*(arr + i) + j) = j+1000 + 1;
				}
				break;
				
			default:
				printf("Defaut case\n");
				break;

		};
	}
}

int main()
{
	int arr[SIZE];
	int arr2[ROW][COL];
	
	assign_value(arr);
	display(arr);
	
	assign_value2d(arr2);
	display_2d(arr2);

	printf("----------------------------------------------------\n");
	for(int i=0; i<ROW; i++)
	{
		printf("%d    ", *(*(arr2+i)));
	}



	return 0;
}
