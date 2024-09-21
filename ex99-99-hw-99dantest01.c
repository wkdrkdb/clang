#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int dan = 2 + j; 
            int multiply = i + 1;

            int result = dan * multiply;

            printf("%d X %d = %d\t", dan, multiply, result); 
        }

            printf("\n");

    }


        printf("\n");



    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int dan = 5 + j; 
            int multiply = i + 1;

            int result = dan * multiply;

            printf("%d X %d = %d\t", dan, multiply, result); 
        }

            printf("\n");

    }

        printf("\n");


    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            int dan = 8 + j; 
            int multiply = i + 1;

            int result = dan * multiply;

            printf("%d X %d = %d\t", dan, multiply, result); 
        }

            printf("\n");

    }



    return 0;
}