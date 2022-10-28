#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[50];
    char caps[150];
    int wordNum = 0;
    int k = 0;
    caps[0] = '\0';
    printf("Enter how many words:\n");
    scanf("%d", &wordNum);
    printf("Enter %d words:\n", wordNum);
    for(int i = 0; i < wordNum; i++)
    {
        scanf("%s", line);
        if(strlen(line) > 3)
        {
            for(int j = 0; j < strlen(line); j++)
            {
                if(isupper(line[j]))
                {
                    caps[k] = line[j];
                    k++;
                }
            }
        }
    }
    caps[k] = '\0';
    printf("The result is '%s'\n", caps);

    return 0;
}