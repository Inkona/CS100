#include <stdio.h>
#include <string.h>
#include <ctype.h>

int foo(char str1[], char str2[]);

int main() {

   char str1[25];
   char str2[25];
   printf("Enter two strings:\n");
   scanf("%s %s", str1, str2);

   int number = foo(str1, str2);
   
   printf("Both strings start with %d uppercase letters\n", number);

   return 0;
}

int foo(char str1[], char str2[]) {
   int len1 = strlen(str1);
   int len2 = strlen(str2);
   
   int minLen;

   if(len1 < len2)
      minLen = len1;
   else
      minLen = len2;
   
   int i;
   
   for (i = 0; i < minLen; i++) {
      char ch1 = str1[i];
      char ch2 = str2[i];
      if (!isupper(ch1) || !isupper(ch2)) {
         break;
      }
   }
   
   return i;
}