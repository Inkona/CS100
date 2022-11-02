#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include <regex.h>


int isPositiveInteger(char token[]);
int isNegativeInteger(char token[]);
int isBinaryNumber(char token[]);
int isGuid(char token[]);
int isPositiveFloatingPoint(char token[]);
int isNegativeFloatingPoint(char token[]);

int main() {
   char token[100];
   while(!feof(stdin))
   {
      printf("Enter a token to identify, EOF to stop:\n");
      scanf("%s", token);
      if(feof(stdin)) 
      {
         break;
      }
      if(isPositiveInteger(token) == 1)
      {
         printf("The token is a positive integer\n");
      }
      else if(isNegativeInteger(token) == 1)
      {
         printf("The token is a negative integer\n");
      }
      else if(isBinaryNumber(token) == 1)
      {
         printf("The token is a binary number\n");
      }
      else if(isGuid(token) == 1)
      {
         printf("The token is a guid\n");
      }
      else if(isPositiveFloatingPoint(token) == 1)
      {
         printf("The token is a positive floating-point number\n");
      }
      else if(isNegativeFloatingPoint(token) == 1)
      {
         printf("The token is a negative floating-point number\n");
      }
      else
      {
         printf("The token cannot be identified\n");
      }
   }
   return 0;
}

int isPositiveInteger(char token[])
{
   for(int i = 0; i < strlen(token); i++)
   {
      if(isdigit(token[i]) == 0)
      {
         return 0;
      }
   }
   return 1;
}

int isNegativeInteger(char token[])
{
   if(token[0] == '-')
   {
      for(int i = 1; i < strlen(token); i++)
      {
         if(isdigit(token[i]) == 0)
         {
            return 0;
         }
      }
      return 1;
   }
   else
   {
      return 0;
   }
}

int isBinaryNumber(char token[])
{
   if(token[0] == '0' && token[1] == 'b')
   {
      if(strlen(token) == 2)
      {
         return 0;
      }
      for(int i = 2; i < strlen(token); i++)
      {
         if(token[i] != '0' && token[i] != '1')
         {
            return 0;
         }
      }
      return 1;
   }
   else
   {
      return 0;
   }
}

int isGuid(char token[])
{
   regex_t regGUID;
   regcomp(&regGUID, "^[A-Fa-f0-9]{8}[-]([A-Fa-f0-9]{4}[-]){3}[A-Fa-f0-9]{12}$", REG_EXTENDED);

   if(!regexec(&regGUID, token, 0, NULL, 0)) 
   {
      return 1;
   }
   return 0;
}

/*int isGuid(char token[])
{
   if(token[8] == '-' && token[13] == '-' && token[18] == '-' && token[23] == '-')
   {
      for(int i = 0; i < 8; i++)
      {
         if(isxdigit(token[i]) == 0)
         {
            return 0;
         }
      } 
      for(int i = 9; i < 13; i++)
      {
         if(isxdigit(token[i]) == 0)
         {
            return 0;
         }
      }
      for(int i = 14; i < 18; i++)
      {
         if(isxdigit(token[i]) == 0)
         {
            return 0;
         }
      }
      for(int i = 19; i < 23; i++)
      {
         if(isxdigit(token[i]) == 0)
         {
            return 0;
         }
      }
      for(int i = 24; i < 36; i++)
      {
         if(isxdigit(token[i]) == 0)
         {
            return 0;
         }
         return 1;
      }
   }
   else
   {
      return 0;
   }
   return 1;      
}*/

int isPositiveFloatingPoint(char token[])
{
   regex_t regPosFloat;
   regcomp(&regPosFloat, "^[0-9]+[.][0-9]+$", REG_EXTENDED);
   if(!regexec(&regPosFloat, token, 0, NULL, 0)) 
   {
      return 1;
   }
   return 0;
}

int isNegativeFloatingPoint(char token[])
{
   regex_t regNegFloat;
    regcomp(&regNegFloat, "^[-][0-9]+[.][0-9]+$", REG_EXTENDED);
   if(!regexec(&regNegFloat, token, 0, NULL, 0)) 
   {
      return 1;
   }
   return 0;
}


/*int isPositiveFloatingPoint(char token[])
{
   int c = 0;   
   for(int i = 0; i < strlen(token); i++)
   {
      if(isdigit(token[i] != '.' && token[i]) == 0)
      {
         return 0;
      }
      else if(token[i] == '.')
      {
         c++;
      }
   }
   if(c == 1)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}*/

/*int isNegativeFloatingPoint(char token[])
{
   int c = 0;   
   if(token[0] == '-')
   {
      for(int i = 1; i < strlen(token); i++)
      {
         if(isdigit(token[i]) == 0 && token[i] != '.')
         {
            return 0;
         }
         else if(token[i] == '.')
         {
            c++;
         }
      }
      if(c == 1)
      {
         return 1;
      }
      else
      {
         return 0;
      }
   }
   else
   {
      return 0;
   }
}*/