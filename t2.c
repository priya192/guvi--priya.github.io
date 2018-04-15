#include <stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int f=0, i;
    
    scanf("%s",a);
    scanf("%s",b);
    i=0;
    while(a[i]!= '\0')
    {
     if(a[i]!=b[i])
     f = 1;
     break;
     i++;
    }
    
    if(f==0)
    printf("%s",a);
    else{
    if(a > b)
        printf("%s",a);
    else
    printf("%s",b);
    }
    return 0;
}
