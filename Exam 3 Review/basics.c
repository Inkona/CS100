#include <stdio.h>


int main(){

    //        index 0, 1, 2, 3, 4
    int array[5] = {3, 1, 4, 1, 5};
    // int array[5] = {3, 1};

    printf("%d \n", array[0]);
    printf("%d \n", array[1]);
    printf("%d \n", array[2]);
    printf("%d \n", array[3]);
    printf("%d \n", array[4]);

    int x = 37000;
    printf("%d \n", array[x]);


    return 0;
}