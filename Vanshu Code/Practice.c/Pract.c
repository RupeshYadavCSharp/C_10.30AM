#include<stdio.h>

int main()
{
   float M1,M2,M3,tot,per;
   printf("Enter the marks of three subject:- \n");
   scanf("%f %f %f",&M1,&M2,&M3);

   tot=M1+M2+M3;
   printf("Your Total Marks is:- %f",tot);
   per=tot*100/300;
   printf("\nYour percentage is:- %f",per);

   if(per>=80)
   {
        printf("\nGrade A");
   }
   else if(per>=60 && per<=80)
   {
        printf("\nGrade B");
   }
   else if(per>=40 && per<=60)
   {
        printf("\nGrade C");
   }
   else
   {
        printf("\nFail");
   }
      return 0;
}