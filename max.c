#include<stdio.h>
int main()
{
  int i;

  int a[10], max;
  for(i=1;i<=10;i++)
  scanf("%d",&a[i]);
  max = a[1];
for(i=1;i<=10;i++)
{
if(max<a[i])
max = a[i];
}
printf("%d",max);
return 0;
}
