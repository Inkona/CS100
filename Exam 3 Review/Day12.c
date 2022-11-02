#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("Usage: ./a.out size");
        return 1;
    }

    int num = atoi(argv[1]);

	for (int r=0; r<num; r++) {
		for (int c=0; c<num; c++)
			printf("<%d-%d> ", r, c);
		printf("\n");
    }

    return 0;
}

