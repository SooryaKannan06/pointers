#include <stdio.h>
int main()
{
    int a = 43;
    int *ptr = &a;
    printf("%d\n", a);
    printf("%p\n", &a);
    printf("%d\n", *ptr);

    return 0;
}
