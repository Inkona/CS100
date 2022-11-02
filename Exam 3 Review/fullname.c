#include <stdio.h>
#include <string.h>

void combineNames(char first[], char last[], char full[]){
    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last); 
}
int main(void) {

    char first[12];
    char last[12];
    printf("Enter first name: \n");
    scanf("%s", first);
    printf("Enter last name: \n");
    scanf("%s", last);

    char fullName[24];
    combineNames(first, last, fullName);

    printf("The full name is '%s' with a length of %d\n", fullName, (int)strlen(fullName));

    return 0;
}