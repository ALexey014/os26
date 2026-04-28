#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;
    int i;
    
    // Выделяем память для массива из 5 целых чисел
    arr = (int*)malloc(n * sizeof(int));
    
    // Проверяем, что память выделилась
    if (arr == NULL) {
        printf("Ошибка: не удалось выделить память\n");
        return 1;
    }
    
    // Заполняем массив данными
    for(i = 0; i < n; i++) {
        arr[i] = i * 10;
    }
    
    // Выводим массив на экран
    printf("Массив: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Освобождаем память
    free(arr);
    
    return 0;
}
