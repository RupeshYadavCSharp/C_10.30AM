#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("positive ");
    }
    else if(num < 0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
    


}