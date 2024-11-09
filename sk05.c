#include <stdio.h>
int main()
{
    int num1,num2;
    char Operator;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("Enter the operation to perform: ");
    getchar();
    scanf("%c",&Operator);
    switch(Operator)
    {
        case '+':
            printf("sum:%d",num1+num2);
        break;
        case '-':
            printf("difference:%d",num1-num2);
        break;
        case '*':
            printf("product:%d",num1*num2);
        break;
        case '/':
            printf("Quotient:%d",num1/num2);
        break;
        case '%':
            printf("Remainder:%d",num1%num2);
        break;
        default:
            printf("invalid");
    }    
    return 0;
 }