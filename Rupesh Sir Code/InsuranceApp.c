#include<stdio.h>
int main()
{
    char ms,gen;
    int age;

    printf("Enter ms, gen and age \n");
    scanf("%c %c %d",&ms,&gen,&age);

    if(ms == 'y')
    {
        printf("insurance approved ");
    }
    else
    {
        if(gen == 'm')
        {
            if(age > 35)
            {
                printf("insurance approved ");
            }
            else
            {
                printf("insurance not approved ");
            }
        }
        else 
        {
             if(age > 25)
            {
                printf("insurance approved ");
            }
            else
            {
                printf("insurance not approved ");
            }
        }
    }




}