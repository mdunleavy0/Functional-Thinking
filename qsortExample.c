#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MAX 20

int compare(const void *, const void *);
void printArray(char *, int *, int);

int main(void) {
    int arr[SIZE];
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % MAX;
    printArray("Jumbled:   ", arr, SIZE);

    qsort(arr, SIZE, sizeof(int), *compare);

    printArray("Unjumbled: ", arr, SIZE);

    return 0;
}

int compare(const void *a, const void *b) {
    int a1 = *((int *) a);
    int b1 = *((int *) b);
    return a1 - b1;
}

void printArray(char *prefix, int *arr, int size) {
    printf("%s", prefix);
    for (int i = 0; i < size - 1; i++)
        printf("%2d ", arr[i]);
    printf("%2d\n", arr[size - 1]);
}
