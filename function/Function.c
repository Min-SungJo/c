#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char getOpe();
int plus(int a, int b);
int minus(int a, int b);
float division(int a, int b);
int multiplication(int a, int b);
bool isValidOpe(char c);

int main(void)
{
    int num1, num2;
    float result;
    printf("2개의 숫자를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    printf("\n");
    printf("입력된 숫자 %d %d\n", num1, num2);
    printf("\n");

    char ope = getOpe();

    switch (ope)
    {
        case '+':
            result = plus(num1,num2);
            break;
        case '-':
            result = minus(num1,num2);
            break;
        case '*':
            result = multiplication(num1,num2);
            break;
        case '/':
            result = division(num1,num2);
            break;
    }
    printf("값: %.2f",result);
    return 0;
}
char getOpe()
{   
    char ope;
    bool validOpe = false;
    char str[256];
    while(!validOpe)
    {
        while (getchar() != '\n');
        printf("연산자를 입력하세요: ");
        scanf("%c", &ope);
        validOpe = isValidOpe(ope);
        if (!validOpe)
        {
            printf("유효하지 않은 연산자입니다. 다시 입력하세요.\n");
        }
        printf("\n");
    }
    return ope;
}
bool isValidOpe(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}


int plus(int a, int b)
{
    return a+b;
}
int minus(int a, int b)
{
    return a-b;
}
float division(int a, int b)
{
    if (b == 0)
    {
        printf("0으로 나눌 수 없습니다.\n");
        return 0.0;
    }
    
    return (float)a/(float)b;
}
int multiplication(int a, int b)
{
    return a*b;
}