#include<stdio.h>  
void ExactChange(int userTotal, int coinVals[]){ 	
    while(userTotal > 0)
    { 
        if(userTotal - 25 >= 0)
        { 		
            coinVals[0]++; 		
            userTotal -= 25; 	
        } 	
        else if(userTotal - 10 >= 0)
        { 		
            coinVals[1]++; 		
            userTotal -= 10; 	
        } 	
        else if(userTotal - 5 >= 0)
        { 		
            coinVals[2]++; 		
            userTotal -= 5; 	
        } 	
        else if(userTotal - 1 >= 0)
        { 		
            coinVals[3]++; 		
            userTotal -= 1; 	
        } 	
    }
}  

int main() {     
    int input, numQuarters, numDimes, numNickels, numPennies;     
    int coinVals[4] = {0};          
    scanf("%d",&input);         
    ExactChange(input, coinVals);              
    numQuarters = coinVals[0];     
    numDimes = coinVals[1];     
    numNickels = coinVals[2];     
    numPennies = coinVals[3];  	
     	 	
    if(numPennies==1)
    { 	    
        printf("%d penny\n",numPennies); 	
    } 	
    else if(numPennies>0)
    { 		
        printf("%d pennies\n",numPennies); 	
    }      

    if(numNickels==1)
    { 		
        printf("%d nickel\n",numNickels); 	
    } 	
    else if(numNickels>0)
    { 		
        printf("%d nickles\n",numNickels); 	
    } 	 	

    if(numDimes==1)
    { 		
        printf("%d dime\n",numDimes); 	
    } 	
    else if(numDimes>0)
    { 		
        printf("%d dimes\n",numDimes); 	
    } 	 	
    
    if(numQuarters==1)
    { 		
        printf("%d quarter\n",numQuarters); 	
    } 	
    else if(numQuarters>0)
    { 		
        printf("%d quarters\n",numQuarters); 	
    }

    if(numPennies == 0 && numNickels == 0 && numDimes == 0 && numQuarters == 0)
    {
        printf("no change\n");
    }
    return 0; 
}