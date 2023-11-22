#include<stdio.h>

int main()
{
    int num;
    printf("Enter the month number:- \n");
    scanf("%d",&num);

    if(num >=3 && num <=5)
    {
        printf("The Season is Summer");
    }
    else if(num >=6 && num <=8)
    {
        printf("The Season is Rainy");
    }
    else if(num >=9 && num <=11)
    {
        printf("The Season is Autumn");
    }
    else if(num==1 || num==2 || num==12)
    {
        printf("The Season is Winter");
    }
    else
    {
        printf("Enter Valid Number");
    }
}