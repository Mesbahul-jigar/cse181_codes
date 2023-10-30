//fibonacci
#include<stdio.h>
int main()
{
   int a=0, b=1, next, n;
   scanf("%d" , &n);
   printf("%d %d ",a,b);
   for( int i = 0 ; i < n-2 ; i++ ){
      next= a+b;
      a = b;
      b = next;
      printf("%d " ,b);

   }
}
