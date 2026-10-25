#include<stdio.h>
int main()
{
   float amount,charge,discount;
   int choice;
   printf("enter amount:");
   scanf("%f",&amount);
   
   if(amount>=500)
   {
   charge=0;
   printf("enter(1 for premium,0 for regular):");
   scanf("%d",&choice);
   if(choice==1)
   {
   	discount = amount*0.1;
   	amount -= discount;
   	printf("Final amount: %.2f\n",amount);
   }
   else if(choice==0)
   {
   	 printf("Final amount: %.2f\n",amount);
   }
   }
   else if(amount<500)
   {
   	charge = 50;
   	amount+=charge;
   	printf("Final amount: %.2f",amount);
   }
   
   
   
   
   
    
}













 
