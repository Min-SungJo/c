#include <stdio.h>

int main(void)
{
    char name[256];
    printf("이름: ");
    scanf("%s", name);
    printf("\n");

    int age;
    printf("나이: ");
    scanf("%d", &age);
    printf("\n");

    float weight;
    printf("무게: ");
    scanf("%f", &weight);
    printf("\n");

    printf("입력된 값\n이름: %s\n나이: %d\n무게: %.2f\n", name, age, weight);
}