#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    int c = 3;

    if(a == b)
    {
        printf("a==b -> true \n");
    } else
    {
        printf("a==b -> false \n");
    }
    if(a == b || a + b == c)
    {
        printf("a==b || a+b==c  -> true\n");
    }

    return 0;
}