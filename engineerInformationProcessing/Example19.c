#include <stdio.h>
void addTwo(int b[])
{
    for (int i = 0; i < 5; i++)
        b[i] += 2;
}

void main()
{
    int a[5] = {1, 2, 3, 4, 5};
    addTwo(a);
    for (int i = 0; i < 5; i++)
        printf("%d\n", a[i]);
}