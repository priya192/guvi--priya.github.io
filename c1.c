#include <stdio.h>
#include<string.h>
int main()
{

   int n;
   scanf("%d",&n);
   
int i, r, c=0, b[100], a[100];
int t = n;
i=0;
while(n)
{
   r = n%10;
   c++;
   a[i] = r;
   n = n/10;
   i++;
}

for(i=c-1;i>=0;i--)
{
printf("%d ",a[i]);
}


    return 0;
}
