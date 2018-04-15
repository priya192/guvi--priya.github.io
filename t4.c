#include <stdio.h>
#include<string.h>
int main()
{
    int f=0, i;
   int n;
   scanf("%d",&n);
   for(i=1;i<=10;i++)
    {
        if(n==i)
        f=1;
        break;
       
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
