#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Allocating space for a 2D array
int **allca2D(int rows, int cols){
    int **array = (int **)malloc(sizeof(int *) *rows);
    for(int i = 0; i < rows; i++){
        array[i] = (int *)malloc(sizeof(int) * cols);
    }
    return array;
}

// initialize a 2D array using a random number generator
void initRan2D(int **arr, int rows, int cols){
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            arr[r][c] = rand() % 100;
        }
    }
}

void free2D(int **arr, int rows){
    for(int r = 0; r < rows; r++){
        free(arr[r]);
    }
    free(arr);
}

// Printing an array
void print2D(int **arr, int rows, int cols){
    for(int r = 0; r < rows; r++){
        for(int c = 0; c < cols; c++){
            printf("%d \t", arr[r][c]);
        }
        printf("\n");
    }
}


// main function
int main(){
    srand(time(0));

    int rows = 5;
    int cols = 6;

    int **arr = allca2D(rows, cols);
    initRan2D(arr, rows, cols);
    print2D(arr, rows, cols);
    free2D(arr, rows);
    return 0;
}