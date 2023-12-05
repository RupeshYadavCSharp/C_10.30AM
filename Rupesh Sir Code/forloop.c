#include<stdio.h>

int main()
{
   
    for(int i = 1; i<=10;i++)
    {
        if(i ==  5)
        {
            return;
        }
        else
        {
            printf("%d\n",i);
        }

    }
    printf("out of loop ");
    
    return 0;
}