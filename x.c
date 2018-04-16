#include<stdio.h>

 int main()
 {
   int n,c=0, i;
   scanf("%d",&n);
  if(n>=3){
   for(i=1;i<=n;i++)
   {
       if(i%2==0)
       c++;
   }
   printf("%d",c);
  }
  else
  {
  }
  return 0;
 }
