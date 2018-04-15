#include <stdio.h>
#include<string.h>
int main()
{

   int n, num, a[n];
   scanf("%d",&n);
 int l, g;
 
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 
 
  int avg, sum = 0;
  
  for(int i=0;i<n;i++)
  {
      sum = sum + a[i];
  }
  
  avg = sum/n;
  printf("%d",avg);

 
    return 0;
}
