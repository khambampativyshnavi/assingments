#include<stdio.h>
int main()
{
   int age,creditscore;
   float income;
   printf("enter your age:");
   scanf("%d",&age);
  
  
   if(age>21 && age<60)
   {
   printf("enter your income:");
   scanf("%f",&income);
   	if(income>=25000)
   	{ 
      printf("enter credit score:");
      scanf("%d",&creditscore);
   		if(creditscore>=700)
   		{
   			printf("Loan approved\n");
		   }
		   else
		   {
		   	printf("Loan rejected: credit score below 700\n");
		   }
	   }
	   else
	   {
	   	printf("Loan rejected: income below 25000\n");
	   }
   }
   else
   {
   	printf("Loan rejected: age not in 21 to 60\n");
   }
   
}






 
