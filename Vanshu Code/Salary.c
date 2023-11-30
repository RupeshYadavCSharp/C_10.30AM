#include<stdio.h>

int main()
{
    int salary,tax;
    printf("Enter Your Salary:- \n");
    scanf("%d",&salary);

    if(salary<=150000)
    {
        tax=0;
        printf("The tax is:- %d",tax);
    }
    else if(salary>=150001 && salary<=300000)
    {
        tax=(salary-150000)*10/100;
        printf("Your tax is:- %d",tax);
    }
    else if(salary>=300001 && salary<=500000)
    {
        tax=(salary-200000)*20/100;
        printf("Your tax is:- %d",tax);
    }
    else if(salary>500001)
    {
        tax=(salary-500000)*30/100;
        printf("Your tax is:- %d",tax);
    }
}