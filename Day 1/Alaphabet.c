#include <stdio.h>

int main()
{
   char ch;
   scanf("%c",&ch);
   printf("Enter a Character");
   if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
{
    printf("it is a alphabet");
    
}
else if(ch>='1' && ch<='9')
{
    printf("it is anumber");
    
}
else
{
    printf("it is a special character");
}
    return 0;
}
