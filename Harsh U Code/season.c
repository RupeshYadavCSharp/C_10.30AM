#include<stdio.h>
int main()
{
    int a;
    printf("Enter the month no.:");
    scanf("%d",&a);

   
    
        if(a>=3&&a<=5){
        printf("THE month is summer\n");
        }
        
        else if(a>=6&&a<=8){
            printf("The month is rainy\n");
        }
        else if(a>=9&&a<=11){
            printf("The month is autumn\n");

        }
        else if(a==1||a==2||a==12){
            printf("THe month is winter\n");
        }
        
        
    
    else{
        printf("Invalid");
    }
return 0;

}