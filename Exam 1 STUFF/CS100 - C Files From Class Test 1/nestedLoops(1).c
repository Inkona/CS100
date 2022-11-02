#include <stdio.h>

int main() {
	printf("Enter a number:\n");
	int num;
    scanf("%d", &num);
	for (int r=0; r<num; r++) {
		for (int c=0; c<num; c++){
			if ((r+c)%2==0) 
				printf("X");
			else
				printf("O");
        }
		printf("\n");
	}

    return 0;
}