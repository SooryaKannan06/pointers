#include<stdio.h>
int add (int a,int b)
{
    while(b!=0)
    {
        int carry=a&b;
        a=a^b;
        b=carry << 1;
    }
    return a;
}
int main()
{
    int num1=5 ,num2=9;
    printf("sum:%d\n",add(num1,num2));
    return 0;
}