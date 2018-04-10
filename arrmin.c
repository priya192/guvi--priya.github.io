#include<stdio.h>
int main()
{
int n, j; scanf("%d",&n);
  int a[n], min;
  for(j=1;j<=n;j++)
  scanf("%d",&a[j]);
  min = a[1];
for(j=1;j<=n;j++)
{
if(min>a[j])
min = a[j];
}
printf("%d",max);
return 0;
}
