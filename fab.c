#include<stdio.h>
#include<string.h>
int main()
{
int a=0, b=1, n;
scanf("%d",&n);
int i, c;
printf("%a %b",a,b);
for(i=0;i<n;i++)
{
  c = a + b;
  printf("%d",c);
  a = b;
  b = c;
}
return 0;
}
