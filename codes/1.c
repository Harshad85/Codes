#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int *arr = (int *)malloc(10 * sizeof(int));
    int *arr2 = (int *)calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
        arr2[i] = (i + 1);
    }
    printf("Array using malloc:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");   
    
    printf("Array using calloc:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
 
 
    return 0;
}