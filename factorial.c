//factoprial
#include<stdio.h> 

int factorial( int n) 
{ 
	int fac;
     
    if(n>1) 
    { 
          fac= n * factorial(n-1); 
    } 
    else
    {
   	   fac =1;
    }
     
    return fac;  
 } 
 int main() 
 { 
    int n; 
    scanf("%d",&n); 
    
    int facto = factorial(n); 
    
    printf("%d",facto); 
 }