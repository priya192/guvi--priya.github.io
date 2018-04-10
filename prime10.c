#include<stdio.h>
int main()
{
  int i,j,f=0, n1, n2;
  scanf("%d%d",&n1&n2);
  for(i=n1+1;i<n2;i++)
  {
    for(j=2; j<=i/2; j++)
    {
      if(j%i == 0)
      { f==1;break;
      }
    }
    if(f==0)
      printf("%d",i);
  }

return 0;
}
