#include <stdio.h>
#include <ctype.h>

int caps(const char *str) {
   // your recursive solution here
   if(*str == '\0')
   {
      return 0;
   }
   else if(isupper(*str))
   {
      return 1 + caps(++str);
   }
   return caps(++str);
   
}

int main(int argc, char const *argv[]) {
   printf("%s has %d capital letters\n", argv[1], caps(argv[1]));
   
   return 0;
}
