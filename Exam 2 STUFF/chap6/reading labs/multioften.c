 #include <stdio.h> 
 #include <stdbool.h>  
 bool IsArrayMult10(int arr[], int n) 
 {     
    int i;     
    for(i = 0; i < n; i++)     
    {         
        if(arr[i] % 10 != 0)   
        {  
            return false;   
        }  
    }     
    return true; 
}  

bool IsArrayNoMult10(int arr[], int n) 
{     
    int i;     
    for(i = 0; i < n; i++)     
    {         
        if(arr[i] % 10 == 0)  
        {           
            return false;     
        }
    }     
    return true; 
}  

int main() {     
    int n, i;     
    scanf("%d", &n);     
    int arr[n];     
    for(i = 0; i < n; i++)      
    {         
        scanf("%d", &arr[i]);     
    }     
    bool all = IsArrayMult10(arr, n);     
    bool none = IsArrayNoMult10(arr, n);     
    if(none == true)      
    {         
        printf("no multiples of 10\n");     
    }     
    else if(all == false)     
    {         
        printf("mixed values\n");     
    }     
    else      
    {         
        printf("all multiples of 10\n");     
    }     
    return 0; 
}