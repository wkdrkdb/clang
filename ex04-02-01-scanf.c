/*
    scanf() 함수
        데이터 입력에 사용되는 함수 
*/

#include <stdio.h>

int main(void)
{
    char character;
    int inum;   
    float fnum;

    scanf("%c", &character);     //문자 
    scanf("%d", &inum);          //정수
    scanf("%f", &fnum);          //실수

    printf("%c, %d, %f \n", character, inum, fnum);




    return 0;
}

