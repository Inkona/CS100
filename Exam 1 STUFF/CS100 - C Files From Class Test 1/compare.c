#include <stdio.h>

int main(){
    int score;
    scanf("%d", &score);
    
    if (score>=90)
        printf("A");
    if (80<=score && score<90)
        printf("B");
    if (70<=score && score<80)
        printf("C");
    if (60<=score && score<70)
        printf("D");
    if (score<60)
        printf("F");
    

    /*
    if (score>=90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");
    */
    /*
    char letter;
    if (score>=90)
        letter = 'A';
    if (score >= 80)
        letter = 'B';
    if (score >= 70)
        letter = 'C';
    if (score >= 60)
        letter = 'D';
    else
        letter = 'E';

    printf("%c", letter);
    */
    return 0;
}