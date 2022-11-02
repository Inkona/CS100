#include <stdio.h>

int main(){

    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);  // 5

	for (int r=0; r<num; r++) {
		for (int c=0; c<num; c++)
			printf("<%d-%d> ", r, c);
		printf("\n");
    }

    return 0;
}

