#include <stdio.h>

int main()
{
   char a[100];
   scanf("%[^\n]s",a);
 int c=0;
 int i=0;
 while(a[i]!='\0')
 {
     if(a[i] == ' ')
     c++;
     i++;
 }
 printf("%d",c+1);
  return 0; 
}

