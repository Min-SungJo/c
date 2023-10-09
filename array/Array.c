#include <stdio.h>

int main(void)
{
    // 배열의 값을 선언하지 않으면 알 수 없는 값이 들어감
    // 하나라도 선언을 해두면 나머지가 0이 대입됨
    int num_array[3];
    // 배열 크기를 변수로 설정할 수 없음
    // int n[size]; 불가능
    num_array[0]=0;
    num_array[1]=1;
    num_array[2]=2;
    int size = sizeof(num_array)/sizeof(num_array[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",num_array[i]);
    }
    int num_array2[] = {1,2}; // 크기 2로 설정됨

    //문자열
    // char str[6] = "012345"; // -> 오류 발생
    // 문자열 끝에는 끝을 의미하는 NULL 문자 \0 가 포함되어야 함
    char str[7] = "012345";
    // [0][1][2][3][4][5][\0]
    printf("%zu\n", sizeof(str));
    // int가 아닌 unsigned long 형식일 수도 있기에
    // %d 대신 %zu 사용

    // %c 는 아스키코드 -> 0 -> 0
    // %d 는 정수 -> 0 > 48

    // 한글은 1글자에 2byte 크기임 한글 -> 5byte
    return 0;
}