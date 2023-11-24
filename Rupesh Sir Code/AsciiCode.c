#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any character \n");
    scanf("%c",&ch);

    if(ch >=65 && ch <=90)
    {
        ch = ch + 32;
        printf("%c",ch);
    }
    else if(ch >=97 && ch<=122)
    {
        ch = ch - 32;
        printf("%c",ch);
    }
    

    return 0;
}