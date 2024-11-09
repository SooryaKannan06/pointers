#include<stdio.h>
int main()
{
   int a;
   printf("Enter a number :");
   int result=scanf("%d",&a);
   if(result==1)
   {
       if(a>0)
      {
         if(a%2==0)
         {
               printf("It is an even number");
         }
         else
         {
         printf("The number is odd");
         }
      }
   }   
   else
   {
    printf("Invalid input");
   }  
return 0;
}
  
