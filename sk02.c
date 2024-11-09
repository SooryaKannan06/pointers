#include <stdio.h>                                    
/*int main() 
{
  int a;
  printf("enter a number A :");
  scanf("%d", &a);
  if(a>0)
  {
      printf("The number is positive integer");
  }
  else if(a<0)
  {
      printf("The number is negative");
  }
  else
  {
      printf("The number is 0");
  }

  return 0;
}*/
                                    
int main() 
{
  int year;
  printf("enter a  year :");
  scanf("%d", &year);
  if(year%100==0)
  {
      if(year%400==0)
      {
          printf("It is a leap year");
      }
  }
  else
  {
      if(year%4==0)
      {
          printf("It is a leap year");
      }
      else
      {
          printf("It is not a leap year");
      }
  }
  
  return 0;
}



