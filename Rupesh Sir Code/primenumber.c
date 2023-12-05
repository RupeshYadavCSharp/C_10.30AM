#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number \n");
    scanf("%d",&num);

    for(int i = 2; i<num;i++)
    {
        if(num % i == 0)
        {
            printf("The given number is not prime\n");
            return 0;
        }
    }

    printf("the given number is a prime number ");

    return 0;
}