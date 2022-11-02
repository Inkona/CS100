#include <stdio.h>

int maxArray(int arr[], int size);

int main() {

    int arr[] = { 100, 6, 8, 1002, 7, 10, 101 };
    int size = 7;

    int max = maxArray(arr, size);

    printf("The max int in the array is %d\n", max);

    return 0;
}

int maxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}
