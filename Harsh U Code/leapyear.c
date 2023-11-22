#include<stdio.h>
int main()
{
    int a;
    printf("Enter the year:");
    scanf("%d",&a);

    if(a%4==0){
       


        if(a%100==0){
            if(a%400==0){
                printf("this year is  leap\n");

            }
            else
            {
                printf("This year is not  leap\n");
            }
        }    
            else{
                printf("This year is  leap\n");

            }
        
    }
    else{
        printf("This year is not leap\n");
    }
return 0;

}