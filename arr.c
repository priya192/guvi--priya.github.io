#include<stdio.h>
int main()
{
  int n, i;
  scanf("%d",&n);
  int a[n], max;
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
  max = a[1];
for(i=1;i<=n;i++)
{
if(max<a[i])
max = a[i];
}
printf("%d",max);
return 0;
}
