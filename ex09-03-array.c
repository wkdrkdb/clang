#include <stdio.h>

int main(void)
{
    char str[50];   //String
    printf("문자열을 입력하세요: ");
    scanf("%s", str);                       //스페이스 구분  hello world -> hello     ,     helloworld -> helloworld

    printf("입력된 문자열: %s\n", str);


    return 0;
}