//factoprial
#include<stdio.h>
int factorial( int n)
{
    if(n>1){
   int fac= n * factorial(n-1);
    }
}
int main()
{
   int n;
   scanf("%d",&n);
   int facto = factorial(n);
   printf("%d",facto);
}

