#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a = 1;
    int b = 2;
    int c = 3;

    printf("a_value: %d, pointer: %d\n", a, &a);
    printf("b_vlaue: %d, pointer: %d\n", b, &b);
    printf("c_value: %d, pointer: %d\n", c, &c);


    // 일반적인 변수
    // a: 값, &a 참조값
    // 포인터
    // *p값, p 참조한 변수의 참조값, &p 참조값

    // 포인터로
    // 다른 변수의 참조값과 값을 얻을 수 있다
    printf("\n");
    printf("포인터로 값 얻기\n");
    int *p;
    p = &a;
    printf("p_a_value: %d, pointer: %d\n", *p, p);

    p = &b;
    printf("p_b_value: %d, pointer: %d\n", *p, p);

    p = &c;
    printf("p_b_value: %d, pointer: %d\n", *p, p);

    printf("\n");

    printf("포인터*3\n");
    // 포인터로
    // 변수가 참조하던 값을 변경하면
    // 그 참조값에 담긴 변수의 값 또한 변화한다
    p = &a;
    *p = *p*3;
    printf("p_a*3_value: %d, pointer: %d\n", *p, p);
    p = &b;
    *p = *p*3;
    printf("p_b*3_value: %d, pointer: %d\n", *p, p);
    p = &c;
    *p = *p*3;
    printf("p_c*3_value: %d, pointer: %d\n", *p, p);

    printf("\n");
    printf("포인터*3한 것 변수 값이 바뀌었는지 확인하기\n");
    printf("a_value: %d, pointer: %d\n", a, &a);
    printf("b_vlaue: %d, pointer: %d\n", b, &b);
    printf("c_value: %d, pointer: %d\n", c, &c);

    printf("\n");
    printf("다른 포인터 객체와 c의 포인터 연결하기\n");
    //다른 포인터 객체 
    int *p2 = p;
    printf("*p2: %d p2: %d\n", *p2, p2);
    printf("\n");
    printf("다른 포인터 객체에 *3해서 c값 변경 확인하기\n");
    *p2 = *p2*3;
    printf("*p2: %d p2: %d\n", *p2, p2);
    printf("c_value: %d, pointer: %d\n", c, &c);
    printf("p_c_value: %d, pointer: %d\n", *p, p);

    printf("\n");
    printf("포인터 참조값 확인하기\n");
    printf("&p-포인터(p)의 참조값: %d\n",&p);

    printf("\n");
    // int *포인터 = 변수의 참조값;
    // *포인터 -> 변수의 참조값에 담긴 값
    // 포인터 -> 변수의 참조값
    //포인터3 = 변수의 참조값을 가진 포인터의 참조값
    int *p3 = &p;
    printf("포인터 참조값을 새로운 포인터 객체에 연결하기\n");
    printf("*p3-기존 포인터와 연결된 변수의 참조값: %d p3-포인터(p)의 참조값: %d\n",*p3, p3);
    printf("\n");

    printf("포인터(p3)가 담고있는 값을 변경\n");
    printf("포인터(p)의 참조값+4\n");
    *p3 = *p3+4;
    printf("*p3: %d p3: %d\n",*p3, p3);
    printf("p_c_value: %d, pointer: %d\n", *p, p);
    printf("\n");
    printf("c_value: %d, pointer: %d\n", c, &c);
    printf("b_value: %d, pointer: %d\n", b, &b);
    *p = *p-20;
    printf("\n");
    printf("포인터(p3)가 담고있는 값(포인터(p)가 참조하는 변수의 참조값)을 변경하면\n");
    printf("바뀐 참조값(b의 참조값)을 참조하는 변수의 포인터가 된다\n");
    printf("c_value: %d, pointer: %d\n", c, &c);
    printf("b_value: %d, pointer: %d\n", b, &b);
    printf("\n");
    //서로 값을 변경하려면 참조값을 변경해야 함
    int one = 1;
    int two = 2;
    printf("one: %d, two: %d\n", one, two);
    swap(&one, &two);
    printf("one: %d, two: %d\n", one, two);
    printf("one add: %d, two add: %d\n", &one, &two);
    //참조값은 변경하지 않고 값만 변경
    return 0;
}
void swap(int *ptrA, int *ptrB)
{
    printf("one add: %d, two add: %d\n", ptrA, ptrB);
    int temp = *ptrA; // 참조값을 정수형 자료에 담고 변경
    *ptrA = *ptrB;
    *ptrB = temp;
    printf("one: %d, two: %d\n", *ptrA, *ptrB);
    printf("one add: %d, two add: %d\n", ptrA, ptrB);
}