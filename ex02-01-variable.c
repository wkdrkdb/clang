/* 
    변수란? 메모리 공간에 붙여진 이름
    C프로그램에서 사용되는 모든 값을 메모리 공간에 저장 
    메모리 공간에 이름을 붙여 접근(입력 수정 삭제) 가능                                               

변수 선언 및 초기화 
    자료형 변수명 = 값; 

변수명 규칙 
    알파벳, 숫자, 언더바(_)  로만 구성
    숫자로 시작 x   
    공백 포함 x 
    키워드(명령어) 변수명으로 사용 x    

    !주의- C언어는 알파벳 대/소문자 구분함.

*/

#include <stdio.h> 

int main(void)
{
    int number1;    // int형 변수 선언 
    int number2;

    number1 = 1;    // number1 변수에 1값 대입 
    number2 = 2;    // 초기화

    int number3 = 3 , number4 = 4; // 두 개의 int형 변수 한 번에 선언 가능
    
    int number5 = 5; // 선언과 동시에 초기화(값 대입)

    printf("%d\n", number1);     //   \n은 줄바꿈
    printf("%d\n", number2);     
    printf("%d\n", number3);     
    printf("%d\n", number4);    
    printf("%d\n", number5);     
    
    //사용가능한 변수명
    int num = 3;    
    int number7 = 7;    
    int num_ber = 10;
    int Num = 15;   
    
    printf("%d\n", num);
    printf("%d\n", number7);
    printf("%d\n", num_ber);
    printf("%d\n", Num);

    // 사용불가 변수명
    // int hello boy = 3;   //공백포함 에러    
    // int he#$ = 5;       //특수기호 사용 에러
    // int 8number = 8;    // 숫자로 시작 에러
    // int short = 3;      //기능이 있는 키워드 사용 에러

     return 0;   

     /*  
    VSCODE 단축키
     ctrl + c  줄 복사    
     ctrl + v  줄 붙여넣기 
    ctrl + shift + k 줄 삭제   
    ctrl + / 한꺼번에 주석 
   */
}