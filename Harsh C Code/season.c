#include<stdio.h>
int main()
{

    int num;
    
    printf("enter the number");
    scanf("%d",&num);


    
        if(num >= 3 && num <=5)
        {
          printf("this month is summer season");
        }
     

        else if(num >= 6 && num <= 8 )
        {
          printf("this month is rainy season");
        }

        else if(num >= 9 && num <=11)
        {
            printf("this month is autum season");
        }
         
        else if(num == 12 || num == 1||num == 2) 
        {
            printf("this month is winter season");
        }    
    

    else {
    printf("this month is invalid");
    }

    return 0;
   
}




    
        
    
    
