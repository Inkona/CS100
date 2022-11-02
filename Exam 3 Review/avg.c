#include <stdio.h>
int sumArray(int arr[], int size);
double avgArray(int arr[], int size);
int main() {
    int arr[] = { 8, 5, 2, 9, 6, 3 };
    int size = 6;
    double avg = avgArray(arr, size); 
    printf("The average is %.2lf\n", avg);
    return 0;
}
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}
double avgArray(int arr[], int size) {
    return (double)sumArray(arr, size) / size;
}
