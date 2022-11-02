#include <stdio.h>
#include <string.h>

char *combineNames(char first[], char last[])
{
    char full[42];

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last); 
    // sprintf(full, "%s %s", first, last);

    return full;
}
int main(void) {

    char first[21];
    char last[21];
    printf("Enter first name: ");
    scanf("%s", first);
    printf("Enter last name: ");
    scanf("%s", last);

    // char fullName[42];
    char *fullName;
    fullName = combineNames(first, last);

    printf("The full name is '%s' with a length of %d\n", fullName, (int)strlen(fullName));

    return 0;
}