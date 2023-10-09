#include <stdio.h>

int main(void)
{
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
    int *ptr = &arr;
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",ptr[i]);
    }
        printf("\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr+i)); // *로 참조값에 담긴 값을 확인할 수 있다
    }
    printf("\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",*(ptr+i));
    }
    printf("\n");
    printf("%d\n", *arr);
    printf("%d\n", *ptr);
    printf("%d\n", arr[0]);
    printf("%d\n", ptr[0]);
    printf("%d\n", *&arr[0]);
    printf("%d\n", *&ptr[0]);

    printf("\n");
    printf("%d\n", ptr);
    printf("%d\n", arr);
    printf("%d\n", &arr[0]);
    printf("%d\n", &ptr[0]);
}