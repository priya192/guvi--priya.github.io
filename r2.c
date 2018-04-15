#include <stdio.h>
#include<string.h>
int main()
{

   int n;
   scanf("%d",&n);
   
int i, r=0;
int t = n;
i=0;
while(n)
{
   r = r + n%10;
   n = n/10;
   i++;
}

printf("%d",r);
    return 0;
}
