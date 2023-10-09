#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //정수
    printf("정수\n");
    int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);

    printf("\n");

    //실수
    printf("실수\n");
    float f = 46.426f;
    printf("%f\n",f);
    printf("%.2f\n",f);

    double d = 4.436;
    printf("%lf\n",d);
    printf("%.2lf\n",d);

    printf("\n");

    //상수
    printf("상수\n");
    const int YEAR = 2023;
    printf("올해: %d\n",YEAR);
    // YEAR = 2024;
    // printf("%d\n",YEAR);

    printf("\n");

    //printf
    // 출력
    // 연산
    printf("연산\n");
    int add = 3 + 7;
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 3, 7, 3+7);
    
    printf("\n");

    printf("boolean\n");
    //c에서 boolean은 True,False로 출력되지 않음
    // 1 0
    bool b1 = true;
    bool b2 = false;
    printf("%d %d\n", b1, b2);

    printf("\n");

    return 0;
}