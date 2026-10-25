#include<stdio.h>
int main()
{
   float l,w,a,p;
   printf("enter the length,width of the triangle:");
   scanf("%f %f",&l,&w)	;
   a=l*w;
   p=(l+w)*2;
   printf("Area of the triangle: %.2f\n",a);
   printf("Perimeter of the triangle: %.2f\n",p);
}



