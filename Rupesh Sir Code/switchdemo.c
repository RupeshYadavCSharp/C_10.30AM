#include<stdio.h>

int main()
{
    char choice;
    float plates,billamt;
    printf("D.Dosa(100)\nI.Idli(60)\nW.Wada(40)\nEnter choice\n");
    scanf("%c",&choice);

    switch (choice)
    {
        case 'D':
        case 'd':
            printf("-------------Dosa-----------------\n");
            printf("how many plates ?\n");
            scanf("%f",&plates);
            billamt = plates * 100;
            printf("please pay rs %0.2f\n",billamt);
            break;
        
        case 'I':
        case 'i':
          printf("-------------IDLI-----------------\n");
            printf("how many plates ?\n");
            scanf("%f",&plates);
            billamt = plates * 60;
            printf("please pay rs %0.2f\n",billamt);
            break;
        case 'W':
        case 'w':
          printf("-------------Wada-----------------\n");
            printf("how many plates ?\n");
            scanf("%f",&plates);
            billamt = plates * 40;
            printf("please pay rs %0.2f\n",billamt);
            break;
        default:
            printf("invalid choice \n");
            break;

    }




    return 0;
}