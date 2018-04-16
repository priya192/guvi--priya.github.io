#include<stdio.h>

 int main()
 {
   int n, q;
   scanf("%d%d",&n,&q);
   
   int i, a[100], b[100], c[100];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
   for(i=0;i<q;i++)
   {    
       b[i] = a[i];
      
   }
   
    for(i=n-1;i>q;i--)
   {    
       c[i] = a[i];
       
   }
   
  int gcd = a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]%gcd==0)
        continue;
        else
        gcd = a[i]%gcd;
        
    }
   printf("%d ",gcd);
   
   gcd = b[0];
    for(i=1;i<n;i++)
    {
        if(b[i]%gcd==0)
        continue;
        else
        gcd = b[i]%gcd;
        
    }
   printf("%d",gcd);
  return 0;
 }
