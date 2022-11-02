#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
   char str[100];
   while (1) {
      printf("Enter a string:\n");
      scanf("%s", str);
      
      if (strcmp(str, "stop") == 0) break;
      
      for (int i = 0; i < strlen(str); i++) {
         char ch = toupper(str[i]);
         if (isalpha(ch) && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            printf("%c", str[i]);
         }
      }
      printf("\n\n");
   }
   
   return 0;
}
