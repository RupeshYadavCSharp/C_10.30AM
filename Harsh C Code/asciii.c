#include<stdio.h>
int main()
{
    char alpha;
    printf("enter any character \n");
    scanf("%c",&alpha);
    

    if(alpha >= 65 && alpha<= 90 )
   {
     alpha= alpha + 32;
     printf("%c",alpha);
   }

    else if(alpha>=97 && alpha<=122)
    {
        alpha=alpha-32;
        printf("%c",alpha);
    }


    return 0;
}