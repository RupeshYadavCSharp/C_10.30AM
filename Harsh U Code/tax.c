#include<stdio.h>
int main()
{
    int sal;
    float final;
    printf("Enter the salary:");
    scanf("%d",&sal);
    if(sal>=1&&sal<=150000)
    {
        printf("Tax=0 :-salary=%d",sal);
    }
  
        else if(sal>=150001&&sal<=300000)
        {
            final=0.1*sal;
            printf("tax=10% :=salary=%f",final);
        }
        else if(sal>=300001&&sal<=500000)
        {
            final=0.2*sal;

            printf("Tax=20% :-salary=%f",final);

        }
        else if (sal>=500001)
        {
            final =0.3*sal;

            printf("Tax=30% :=%f",final );

        
        }
return 0;

}