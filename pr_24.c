#include <stdio.h>
int main()
{
    for (int a = 0; a < 9; a++)
    {
        if(a==0 || a==8)
        {
        for (int b = 0; b < 9; b++)
        {
            printf("*");
        }
        }
        if (a==4)
        {
            printf("    *");
        }
        if (a<4 && a>0)
        {
            for (int d = 0; d < a; d++)
            {
                printf(" ");
            }
            
            printf("*");
            for (int c = 1; c < (4-a)*2; c++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (a<8 && a>4)
        {
            for (int d = 0; d < 8-a; d++)
            {
                printf(" ");
            }
            
            printf("*");
            for (int c = 1; c < (a-4)*2; c++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}