#include<stdio.h>
int main()
{
    float sal,tax;

    printf("enter the salary\n");
    scanf("%f", &sal);

    if(sal >= 1 && sal <= 150000)
    {
        printf("tax is 0 rs\n");
    }

    else if(sal > 150000 && sal <= 300000)
    {
        tax= sal*0.1;
        printf("%f", tax);
    } 

    else if( sal >= 300001 && sal <= 500000)
    {
        tax= sal*0.2;
        printf("%f\n", tax);

    }

    else
    {
        tax=sal*0.3;
        printf("%f\n",tax);
    }

    return 0;




}