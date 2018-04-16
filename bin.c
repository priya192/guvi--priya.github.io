#include <stdio.h>

int main()
{
   char a[100];
   scanf("%s",a);
  int i=0, f=0;
  while(a[i]!='\0')
  {
      if(a[i]=='0' || a[i]=='1')
      i++;
      else
      {f=1;
      break;
      }
  }
  if(f==0)
  printf("yes");
  else
  printf("no");
  return 0; 
}

