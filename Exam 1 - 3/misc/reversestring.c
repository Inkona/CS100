#include <stdio.h>
#include <string.h>

int main(void) {
    char in[50];
    gets(in);
    int i = 0;
    int j = strlen(in) - 1;\
    char temp;
    while(strcmp(in, "done") != 0 && strcmp(in, "Done") != 0 && strcmp(in, "d") != 0)
    {
        while(i < j)
        {
            temp = in[j];
            in[j] = in[i];
            in[i] = temp;
            i++;
            j--;
        }
    printf("%s\n", in);
    gets(in);
    i = 0;
    j = 0;
    }
    return 0;
}
