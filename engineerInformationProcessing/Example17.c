#include <stdio.h>
int addTwo(int a)
{
    return a + 2;
}

void main()
{
    int ans = addTwo(3);
    printf("%d", ans);
}