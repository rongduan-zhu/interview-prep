#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void partition(int *arr, int length);
void print_array(int *arr, int length);
void swap(int *a, int *b);

int main(int argc, char *argv[]) {
    srand(time(NULL));

    int arr[] = {1, 2, 3, 4, 5};
    partition(arr, 5);
    print_array(arr, 5);

    int arr2[] = {5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 2, 2, 1};
    partition(arr2, 15);
    print_array(arr2, 15);

    return 0;
}

void partition(int *arr, int length) {
    int next = 0;
    int fe = 0;
    int gt = length;
    int pivot = arr[rand() % length];
    printf("Pivot: %d\n", pivot);

    while (next < gt) {
        if (arr[next] < pivot) {
            swap(&arr[next], &arr[fe]);
            ++fe;
            ++next;
        } else if (arr[next] > pivot) {
            --gt;
            swap(&arr[gt], &arr[next]);
        } else {
            ++next;
        }
    }
}

void print_array(int *arr, int length) {
    for (int i = 0; i < length; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
