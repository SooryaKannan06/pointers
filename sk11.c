#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    if(a==b)
    {
        printf("%d = %d",a,b);
    }
    else if(a>b)
    {
        printf("%d>%d",a,b);
    }
    else
    {
        printf("%d<%d",a,b);
    }
    return 0;
    
}