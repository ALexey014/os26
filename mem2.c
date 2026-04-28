#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2;
    int n1 = 5, n2 = 3;
    
    arr1 = (int*)malloc(n1 * sizeof(int));
    for(int i = 0; i < n1; i++) {
        arr1[i] = i * 10;
    }
    
    arr2 = (int*)malloc(n2 * sizeof(int));
    for(int i = 0; i < n2; i++) {
        arr2[i] = i * 100;
    }
    
    printf("Первый массив: ");
    for(int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    printf("Второй массив: ");
    for(int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    free(arr1);
    free(arr2);
    
    return 0;
}
