#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
scanf("%[^\n]s",a);
int i=0, c=0;
while(a[i] != '\0')
{ 
     
if(a[i]=='0' || a[i]=='1' || a[i]=='2' || a[i]=='3' || a[i]=='4' || a[i]=='5' || a[i]=='6' || a[i]=='7' || a[i]=='9' || a[i]=='8')
  c = c+1;
    i++;
}
printf("%d",c);
return 0;
}
