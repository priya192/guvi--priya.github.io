#include<stdio.h>
int main()
{
  int n,s=0, i;
  scanf("%d",&n);
  if(n<=1000)
  {temp = n;
   while(n)
   { r = n%10;
       s = s*10 + r;
        n = n/10; }
  }
  if(temp == sum)
  {
   printf("yes"); 
  }
  else
  {
    printf("not");
  }
 return 0; 
}
