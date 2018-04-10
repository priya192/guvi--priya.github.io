#include<stdio.h>
int main()
{
int a, n, d;
scanf(%d%d%d",&a,&n,&d);
int sum = n*(2*a+(n-1)*d)/2;
printf("%d",sum);
return 0;
}
