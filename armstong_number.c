//armstorng number
#include<stdio.h>
#include<math.h>
int main()
{
   int n , m, rem ,digit = 0, sum = 0;
   scanf("%d",&n);
   m = n;
   //digit count
   for( n ; n != 0; n = n/10){
         digit++;
      }
    n = m;

   for( int i = 0 ; i < digit2; i ++){
      rem = n%10;
      sum+= pow( rem , digit);
      n = n /10;
   }
   if( sum == m ){
    printf("%d", sum);
    printf("yes");
   }
   else{
      printf("%d", sum);
      printf("no");
   }



}
