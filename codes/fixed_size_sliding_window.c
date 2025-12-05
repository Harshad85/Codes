#include <stdio.h>

int max_subarray_sum(int *arr, int k, int n)
{
	int sum = 0;
	int temp_sum = 0;
	for(int i=0; i<n; i++)
	{
		if(i<k)
		{
			sum += *(arr+i);
		}
		else
		{
		  temp_sum = sum + arr[i] - arr[i-k];
		}
		if(temp_sum > sum)
		{
			sum = temp_sum;
		}


	}
	return sum;
}

int main()
{
    int n = 10;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 3;

    int result = max_subarray_sum(arr, k, n);

    printf("max sum of sub array is %d ", result);
    
    return 0;
}
