#include <stdio.h>
#include<string.h>
int main()
{

   int n, num, a[n];
   scanf("%d",&n);
 int l, g;
 
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 
 
  int min = a[0];
 for(int i=0;i<n;i++)
 {
     if(min > a[i])
     min = a[i];
 }
 printf("%d ",min);
 
 int max = a[0];
 for(int i=0;i<n;i++)
 {
     if(max < a[i])
     max = a[i];
 }
 printf("%d",max);
 
    return 0;
}
