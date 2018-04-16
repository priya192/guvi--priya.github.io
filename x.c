#include<stdio.h>

 int main()
 {
   int n,c=0, i;
   scanf("%d",&n);
   if(n%2 == 0)
   printf("0");
   else
   {
   for(i=1;i<=n;i++)
   {
       if(i%2==0)
       c++;
   }
   printf("%d",c);
   }
  return 0;
 }
