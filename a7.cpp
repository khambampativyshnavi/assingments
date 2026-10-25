#include<stdio.h>
int main()
{
   int mark;
   printf("enter your mark:");
   scanf("%d",&mark);
   if(mark>=90 && mark<=100)
   {
   	printf("grade:O\n");
   }
   else if(mark>=80 && mark<=89)
   {
   	printf("grade: A+\n");
   }
   else if(mark>=70 && mark<79)
   {
   	printf("grade: A\n");
   }
   else if(mark>=60 && mark<69)
   {
   	printf("grade: B\n");
   }
   else if(mark>=50 && mark<59)
   {
   	printf("grade: C\n");
   }
   else if(mark<50 && mark>=0#inclu)
   {
   	printf("Fail\n");
   }
   else if(mark<0 || mark>100)
   {
   	printf("Invalid mark\n");
   }
}




