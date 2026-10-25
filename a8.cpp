#include<stdio.h>
int main()
{
   float h,w,bmi;
   printf("enter your height(in metres),weight(in kg):");
   scanf("%f %f",&h,&w);
   bmi = (float)w/(h*h);
   if(bmi<18.5)
   {
   	printf("BMI = %.2f\nCategory: Underweight\n",bmi);
   }
   else if(bmi>=18.5 && bmi<25)
   {
   	printf("BMI = %.2f\nCategory: Normal\n",bmi);
   }
   else if(bmi>=25 && bmi<30)
   {
   	printf("BMI = %.2f\nCategory: Overweight\n",bmi);
   }
   else if(bmi>=30)
   {
   	printf("BMI = %.2f\nCategory: Obese\n",bmi);
   }
}




