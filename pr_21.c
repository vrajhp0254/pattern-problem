#include <stdio.h>
int main()
{
    for (int a = 0; a < 9; a++)
    {
        if (a==0 || a==8)
        {
            printf("    *");
        }
        if (a<5 && a>0)
        {
            for (int c = 0; c < 4-a; c++)
            {
                printf(" ");
            }
            
            printf("*");
            for (int b = 0; b < a-1; b++)
            {
                printf(" ");
            }
            printf("*");
            
        }
        if (4<a && a<8)
        {
            for (int c = 0; c < a-4; c++)
            {
                printf(" ");
            }
             printf("*");
            for (int b = 0; b < 7-a; b++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}