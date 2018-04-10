#include<stdio.h>
int main()
{
  int n, i;
  scanf("%d",&n);
  int a[n], min;
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
  min = a[1];
for(i=1;i<=n;i++)
{
if(min>a[i])
min = a[i];
}
printf("%d",max);
return 0;
}
