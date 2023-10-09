#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int n = rand() % 4;
    switch (n)
    {
    case 1:
        printf("n은 1\n");
        break;
    case 2:
        printf("n은 2\n");
        break;
    case 3:
        printf("n은 3\n");
        break;
    default:
        printf("not in 1,2,3");
        break;
    }

    return 0;
}