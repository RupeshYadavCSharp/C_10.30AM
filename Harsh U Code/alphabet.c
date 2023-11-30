#include<stdio.h>
int main()
{
    char num;
    
    printf("Enter the alphabet:\n");
    scanf("%c",&num);
    if (num>=65&&num<=90)
    {
        
        num=num+32;
        printf("%c",num);
    }
    else if(num>=97&&num<=122)


    {
        num=num-32;
       
        printf("%c",num);      
    }
    
    return 0;

}