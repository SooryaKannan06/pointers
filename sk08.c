#include<stdio.h>
int main()
{
    int num,i,factorial=1;
     int result =scanf("%d",&num);
    if(result==1)
    {   
        if(num<0)
        {
            printf("Invalid input");
        }
        else
        {
            for(i=1;i<=num;i++)
            {
                factorial=factorial*i;
            }
            printf("%d",factorial);
        }
    }
    else
    {
        printf("invalid input!!");
    }      
    return 0;
} 

//learn fibonacci series today


