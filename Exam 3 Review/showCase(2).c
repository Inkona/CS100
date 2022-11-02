#include <stdio.h>

// 1D array
// int getElementContinuous(int *x, int pos)
int getElementContinuous(int x[], int pos) {
    return x[pos];
}

// 2D array: size of col is 6
int getElement(int x[4][6], int r, int c) {
    return x[r][c];
}

int main() {
    int array[6][4] = {  // stack
        {  0,  1,  2,  3 },
        {  4,  5,  6,  7 },
        {  8,  9, 10, 11 },
        { 12, 13, 14, 15 },
        { 16, 17, 18, 19 },
        { 20, 21, 22, 23 }
    };

    while (1) {
        int row, column;
        printf("Enter two subscripts or EOF to exit:\n");
        scanf("%d%d", &row, &column);
        
        // break statement
        if (feof(stdin)) break;

        // access 2D array
        printf("array[%d][%d] is %d\n", row, column, array[row][column]);
        
        // 2D array to 1D array
        int idx = 4 * row + column;
        int val = getElementContinuous((int *)array, idx);
        printf("array[%d] is %d\n", idx, val);

        // 2D array [6][4] to [][6]
        row = idx / 6;
        column = idx % 6;
        int ele = getElement(array, row, column);
        printf("array[%d][%d] is %d\n", row, column, ele);

    }

    return 0;
}