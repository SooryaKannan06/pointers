#include<stdio.h>
int main()
{
int x = 9, y = 5; int 
result = (x % 2 == 0) ? ((x > y) ? y : x) : ((x + y) % 2 == 0 ? 100 : 200); 
printf("%d", result);  

return 0;   
   
}