#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){

    char a = 'I';
    char b = 'B';
    char c = 'M';

    printf("%c %c %c \n", a, b, c);
    printf("%c %c %c \n", a-1, b+2, c+32);
    printf("%d %d %d \n", a-1, b+2, c+32);

    if(islower('I')){
        printf("Yes. \n");
    }
    else{
        printf("No. \n");
    }

    char str[] = "Crimson Tide";
    char str2[10] = "Roll Tide";
    
    printf("The string: %s \n", str);
    printf("Another string: %s \n", str2);

    char str3[200];
    printf("Enter a string: \n");
    scanf("%s", str3);

    if(strcmp(str3, "Hello") == 0){
        printf("Equal. \n");
    }
    else{
        printf("Not Equal. \n");
    }

    return 0;
}