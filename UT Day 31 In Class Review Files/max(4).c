#include <stdio.h>

void printArray(char prefix[], int x[], int n)
{       
	printf("%s [ ", prefix);
        for (int i=0; i<n; i++) {
		printf("%d ", x[i]);
	}
	printf("]\n");
}

int findMax(int x[], int n){
	

	return max;
}

int main()
{
	int a[8]={5, 2, 3, 7, 9, 4, 8, 6};

	int result=findMax(a, 8);

	printf("Max is %d\n", result);

	return 0;
}