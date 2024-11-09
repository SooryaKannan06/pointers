#include<stdio.h>
int the_greatest_number(int a,int b,int c,int d)
{
     int greater=a;
    if(b>greater)
    {
        greater=b;
    }
    if(c>greater)
    {
        greater=c;
    }
    if(d>greater)
    {
        greater=d;
    }
    return greater; 
}
int main()
{
    int a,b,c,d;
    scanf("%d\n %d\n %d\n %d",&a,&b,&c,&d);
    int result=the_greatest_number(a,b,c,d);
    printf("the greatest number is %d",result);
    return 0;
}


