#include <stdio.h>

int main(){
    char line[50];
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    fgets(line, sizeof(line), stdin);
    for(int j = 0; line[j] != '\0'; ++j)
    {
        if(line[j] == 'a')
        {
            a++;
        }
        else if(line[j] == 'e')
        {
            e++;
        }
        else if(line[j] == 'i')
        {
            i++;
        }
        else if(line[j] == 'o')
        {
            o++;
        }
        else if(line[j] == 'u')
        {
            u++;
        }
    }
    printf("The vowel a occurred %d times\n", a);
    printf("The vowel e occurred %d times\n", e);
    printf("The vowel i occurred %d times\n", i);
    printf("The vowel o occurred %d times\n", o);
    printf("The vowel u occurred %d times\n", u);
    return 0;
}