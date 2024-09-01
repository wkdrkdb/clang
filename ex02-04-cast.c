/*
    자료형 변환
        데이터의 타입을 변경하는 것
    
*/

#include <stdio.h>

int main(void)
{

    double number1 = 10;
    int number2 = 1.2345;
    short number3 = 70000;

    printf("number1; %f\n" , number1);      //double    정수 실수화
    printf("number1; %d\n" , number2);      //int       실수 정수화
    printf("number1; %d\n" , number3);      //short     32,767를 넘어서 오버플로우


    printf("(short)3.1415: %d\n" , (short)3.1415);      //실수 정수화
    printf("(int)3.1415: %d\n" , (int)3.1415);          //실수 정수화
    printf("(double)10: %f\n" , (double)10);            //정수 실수화
    printf("(float)10: %f\n" , (float)10);              //정수 실수화



    return 0;
}