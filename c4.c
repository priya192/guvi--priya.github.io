#include <stdio.h>
int main()
{
 char ch;
  printf("\n enter a character \n");
  scanf("%c", &ch);
  
  if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
    printf("Alphabet");
  else
    printf("No");
  
  return 0;
}
