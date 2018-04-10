#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
scanf("%[^\n]s",a);
int i=0, c=0;
while(a[i] != '\0')
{ 
    if(a[i]==' ')
  c = c+1;
    i++;
}
printf("%d",c);
return 0;
}
