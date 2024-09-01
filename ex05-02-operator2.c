/*
    4.논리 연산자
    && (AND) : 피연산자가 모두 참이면 참 
    || (OR)  : 피연산자 중 참이 있으면 참 
    !  (NOT) : 피연산자가 참이면 거짓, 거짓이면 참 (결과 반전)

*/

#include <stdio.h>

int main(void)
{
    printf("논리연산자\n");

    int num1 = 20, num2 = 10;        
    int result;

    result = 1 && 1; 
    printf("1) result: %d\n", result);


    result = num1 == 20 && num2 == 10;      // num1 = 20 (참), num2 = 10 (참) >> 1 && 1
    printf("2) result: %d\n", result);


    result = num1 > num2 || num1 == num2;   // num1 > num2 (참), num1 == num2(거짓)
    printf("3) result: %d\n", result);
    

    result = !(num1 > num2 || num1 == num2); // ! 결과반전
    printf("4) result: %d\n", result);

    // result = !1;    >> 0 
    // result = !0;    >> 1
    

   return 0;
}