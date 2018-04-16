#include<stdio.h>
#include<string.h>
int main()
{
int a, b, c;
scanf("%d%d",&a,&b);
int t = a;
a = b;
b = t;
printf("%d %d",a,b);
return 0;
}
