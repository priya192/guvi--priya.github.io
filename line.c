#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
scanf("%s",a);
int i=0, l=0;
while(a[i] != null)
{ if(a[i]== "." || a[i]=="?")
  l++;
 i++;
}
printf("%d",l);
return 0;
}
