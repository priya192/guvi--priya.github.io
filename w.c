#include <stdio.h>

int main()
{
   char a[100];
   scanf("%s",a);
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
       printf("%c",a[i]);
      
  return 0; 
}
