#include<stdio.h>
#include<stdlib.h>
 
int linear(int a[], int n, int x){
    if(n >= 0){
        if(a[n] == x){
            return n;
        }
        else{
            return linear(a, n-1, x);
        }
        n--;
    }
}
 
int main(){
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);   // n is size
    int x = 4;

    int pos = linear(array, n, x);
    if(pos != 0){
        printf("Element found at index: %d. \n", pos);
    }
    else{
        printf("Element not found. \n");
    }
    return 0;
}