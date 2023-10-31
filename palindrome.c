#include<stdio.h>
#include<math.h>
int main()
{
   int n ,m, digit = 0 , sum = 0,rem;
   scanf("%d",&n);
   m = n;
   for( n ; n!=0 ; n = n/10)
   {
      digit++;
   }
   n = m;
   for(int i = 1 ; i <=digit ; i ++)
   {
      rem=n%10;
      sum+=rem*pow(10,digit-i);
      n=n/10;
   }

   if(sum == m){
      printf("palindrome");
   }

   else{
      printf("not palindrome");
   }

}
