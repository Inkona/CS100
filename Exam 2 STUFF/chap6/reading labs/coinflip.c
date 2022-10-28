#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>  
void CoinFlip(char* decisionString){     
    int randomNum = rand() % 2;     
    if(randomNum == 0)
    {         
        strcpy(decisionString, "Tails");     
    }     
    else if(randomNum == 1){         
        strcpy(decisionString, "Heads");     
    } 
}  
int main() {     
    char dStr[10];     
    int num;          
    srand(2);          
    scanf("%d", &num);          
    for(int i = 0; i < num; i++)
    {           
        CoinFlip(dStr);         
        printf("%s\n", dStr);     
    }      
    return 0; 
}  