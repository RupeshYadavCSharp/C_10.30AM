#include<stdio.h>

int main()
{
    float unit,bill,tot;
    printf("Enter your consuming unit:- \n");
    scanf("%f",&unit);

    if(unit<=100)
    {
        bill=unit*3;
        printf("Your Total bill is:- %f rupees",bill);
    }
    else if(unit>=101 && unit<=300)
    {
        bill=unit*5;
        printf("Your Total bill is:- %f rupees",bill);
    }
    else if(unit>300 || bill>1800)
    {
        bill=unit*7;
        printf("Your Total bill is:- %f Rupees",bill);
        tot=bill*10/100;
        printf("\nYour Total bill is:- %f Rupees",tot);
        printf("\nYour Total bill is:- %f",tot+bill);
        
    }
    
}