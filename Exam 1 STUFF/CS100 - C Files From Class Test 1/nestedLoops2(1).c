#include <stdio.h>

int main() {
	printf("Enter a number: ");
	int num;
    scanf("%d", &num);
	for (int r = 0; r < num; r++) {
		for (int c = 0; c < num; c++){
			if (r == 0 || r == num-1) 
				printf("X");
            else if (0 < r < num-2){
                if(c == 0 || c == num-1){
                    printf("X");
                }
                else{
                    printf("O");
                }
            }
        }
		printf("\n");
	}

    return 0;
}
