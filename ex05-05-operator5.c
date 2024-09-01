/*
    7.증감 연산자   
    ++ : 변수의 값을 1 증가시킨다 
    -- : 변수의 값을 1 감소시킨다
    
*/

#include <stdio.h>

int main(void)
{
    printf("증감 연산자\n");

    //전위 증감 연산자
    int i = 1;
    printf("1)전위 증감 연산자: %d\n", ++i);        // i = i + 1 -> 2
    printf("2)전위 증감 연산자: %d\n", i);          // 2            

    //후위 증감 연산자 
    int j = 3;
    printf("1)후위 증감 연산자: %d\n", j++);        // ++가 뒤에 있으면 후순위로 계산  
    printf("2)후위 증감 연산자: %d\n", j);          // 4 

    return 0;
}