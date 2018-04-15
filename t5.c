#include <stdio.h>
#include<string.h>
int main()
{

   int n, c=0, r;
   scanf("%d",&n);
  int t = n;
  while(n)
  {
      r = n%10;
      c++;
      n = n/10;
  }
  printf("%d",c);
    return 0;
}
