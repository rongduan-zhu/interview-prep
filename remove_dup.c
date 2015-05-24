/* Remove all duplicates from an integer array without using any additional data structures. */

#include <stdio.h>
#include <stdlib.h>

void shift_down(int array[], int current_position,
        int dup_count, int size) {
    for (int i = current_position; i < size; ++i) {
        array[i - dup_count] = array[i];
    }
}

int int_compare(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int remove_duplicate(int array[], int size) {
    qsort(array, size, sizeof(int), int_compare);

    int i = 1;
    int dup_count = 0;

    while (i < size) {
        if (array[i] == array[i - 1]) {
            ++dup_count;
            ++i;
        } else if (dup_count != 0) {
            shift_down(array, i, dup_count, size);
            size -= dup_count;
            i -= dup_count;
            dup_count = 0;
        } else {
            ++i;
        }
    }

    if (dup_count != 0) {
        size -= dup_count;
    }

    return size;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main(int argc, char *argv[]) {
    int arr[] = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int size = remove_duplicate(arr, 15);

    print_array(arr, size);

    int arr2[] = {1,1,1,1};
    size = remove_duplicate(arr2, 4);
    print_array(arr2, size);
    return 0;
}
