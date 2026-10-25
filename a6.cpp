#include<stdio#.h>
int main()
{
   int userid,password;
   printf("enter your user ID:");
   scanf("%d",&userid);
   
   if(userid==101)	
   {
   printf("enter password:");
   scanf("%d",&password);
   	if(password==4321)
   	{
   		printf("Login successful\n");
	   }
	   else
	   {
	   	printf("Incorrect password\n");
	   }
	}
	else
	{
		printf("User not found\n");
	 } 
}




