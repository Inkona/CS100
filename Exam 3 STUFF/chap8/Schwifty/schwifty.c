#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void left(char word[]);
void right(char word[]);
void inc(char word[]);
void dec(char word[]);

char SchwiftArgCheck(char arg[]);
void Schwifty(char arg[], char word[]);

int main(int argc, char *argv[]) {
   if(argc != 3)
   {
      printf("Invalid number of arguments\n");
      return 1;
   }
   FILE *fptr = fopen(argv[1], "r");
   char word[200] = {'\0'};
   char inval = SchwiftArgCheck(argv[2]);;
   if(fptr == NULL)
   {
      printf("Could not open file '%s'\n", argv[1]);
      exit(-1);
   }
   if(inval != 0)
   {
      printf("You threw off my schwiftiness with schwifty '%c'!\n", inval);
      return 1;
   }
   while(!feof(fptr))
   {
      fscanf(fptr, "%s", word);
      if(feof(fptr))
      {
         break;
      }
      Schwifty(argv[2], word);
      printf("%s\n", word);
   }
   return 0;
}

char SchwiftArgCheck(char arg[])
{
   int len = strlen(arg);
   for(int i = 0; i < len; i++)
   {
      if(arg[i] != 'L' && arg[i] != 'R' && arg[i] != 'I' && arg[i] != 'D')
      {
         return arg[i];
      }
   }
   return 0;
}

void Schwifty(char arg[], char word[])
{
   int len = strlen(arg);
   for(int i = 0; i < len; i++)
   {
      if(arg[i] == 'L')
      {
         left(word);
      }
      else if(arg[i] == 'R')
      {
         right(word);
      }
      else if(arg[i] == 'I')
      {
         inc(word);
      }
      else if(arg[i] == 'D')
      {
         dec(word);
      }
   }
}

void left(char word[]) {
   int len = strlen(word);
   if(len > 1)
   {
      for(int i = 0; i < len - 1; i++)
      {
         right(word);
      }
   }
}

void right(char word[]) {
   int len = strlen(word);
   if(len > 1)
   {
      char temp = word[0];
      word[0] = word[len - 1];
      for(int i = 1; i < len; i++)
      {
         word[len - i] = word[len - i - 1];
      }
      word[1] = temp;
   }
}

void inc(char word[]) {
   int len = strlen(word);
   for(int i = 0; i < len; i++)
   {
      if(isupper(word[i]) !=0)
      {
         if(isupper(word[i] + 1) != 0)
         { 
            word[i] += 1;
         }
         else
         {
            word[i] = 'A';
         }
      }
      else if(islower(word[i]) != 0)
      {
         if(islower(word[i] + 1) != 0)
         {
            word[i] += 1;
         }
         else
         {
            word[i] = 'a';
         }
      }
      else if(isdigit(word[i]) != 0)
      {
         if(isdigit(word[i] + 1) != 0)
         {
            word[i] += 1;
         }
         else
         {
            word[i] = '0';
         }
      }
   }
   
}

void dec(char word[]) {
   int len = strlen(word);
   for(int i = 0; i < len; i++)
   {
      if(isupper(word[i]) !=0)
      {
         if(isupper(word[i] - 1) != 0)
         { 
            word[i] -= 1;
         }
         else
         {
            word[i] = 'Z';
         }
      }
      else if(islower(word[i]) != 0)
      {
         if(islower(word[i] - 1) != 0)
         {
            word[i] -= 1;
         }
         else
         {
            word[i] = 'z';
         }
      }
      else if(isdigit(word[i]) != 0)
      {
         if(isdigit(word[i] - 1) != 0)
         {
            word[i] -= 1;
         }
         else
         {
            word[i] = '9';
         }
      }
   }
   
}