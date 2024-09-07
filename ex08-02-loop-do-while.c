/*
    2.do ~ while 문
        while문과 동일하나 , 최소 한 번은 실행된다 .

*/

#include <stdio.h>

int main(void)
{
    int num = 5;    
    do 
    {
        printf("num is %d now\n", num);
        num++;
    }
    while (num < 3);
  
    
    //최초 한 번은 실행 num is 5 now
        


    return 0;
}