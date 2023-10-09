#include <stdio.h>

int main(void)
{
    // scanf
    // 키보드 입력을 받아서 저장
    int input;
    printf("값을 입력하세요: ");
    scanf("%d", &input);

    printf("입력값: %d\n", input);

    int one, two, three;
    printf("3 개의 정수를 입력하세요: ");
    scanf("%d %d %d", &one, &two, &three);
    printf("입력값1: %d\n입력값2: %d\n입력값3: %d\n", one, two, three);

    printf("\n");

    char c = 'A';
    printf("%c\n", c);

    char str[256];
    printf("문자열을 입력하세요: ");
    scanf("%s", str); // 256개 이내의 문자열만 받겠다고 선언
    printf("%s\n", str);

    printf("\n");


    return 0;
}