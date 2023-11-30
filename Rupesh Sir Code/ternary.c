#include<stdio.h>

int main()
{
    int num;
    printf("Enter any number ");
    scanf("%d",&num);

    (num > 0) ? printf("positive ") : printf("negative ");

    return 0;


}