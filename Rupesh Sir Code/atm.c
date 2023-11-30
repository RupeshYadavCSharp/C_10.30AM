#include<stdio.h>

int main()
{
    int balance,choice,amt;
    printf("Enter your balance\n");
    scanf("%d",&balance);

    printf("1.withdraw\n2.Deposit\nEnter choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter amt to withdraw \n");
            scanf("%d",&amt);

            if(amt > balance)
            {
                printf("insufficient balance ");
            }
            else if(amt <= 0)
            {
                printf("please enter valid amount ");
            }
            else if(amt % 100 != 0)
            {
                printf("amt shd be multiple of 100");
            }
            else
            {
                balance = balance - amt;
                printf("withdraw success current bal is %d\n",balance);
            }
            break;

        case 2:
            printf("Enter amt to deposit \n");
            scanf("%d",&amt);
            
            balance = balance + amt;
            printf("deposit success current bal is %d\n",balance);
            break;

        default:
            printf("invalid choice ");
            break;
    }




}