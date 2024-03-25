#include <stdio.h>
void main()
{
    int a = 3;
    switch (a)
    {
    case 1:
        printf("1");
    case 2:
        printf("2");
    case 3:
        printf("3");
    case 4:
        printf("4");
    case 5:
        printf("5");
    default:
        printf("other");
    }
}