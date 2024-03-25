#include <stdio.h>
void printAll(int a[])
{
    for (int i = 0; i < 5; i++)
        printf("%d\n", a[i]);
}

void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    printAll(a);
}