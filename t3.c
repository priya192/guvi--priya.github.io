#include <stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100], c[200];
    int f=0, i,j;
    
    scanf("%s",a);
    scanf("%s",b);
    i=0;
    while(a[i]!= '\0')
    {
     c[i] = a[i];
     i++;
    }
    j=0;
    while(b[j]!= '\0')
    {
     c[i] = b[j];
     i++;
     j++;
    }
    
    printf("%s",c);
    return 0;
}
