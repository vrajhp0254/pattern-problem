#include <stdio.h>
int main()
{
    for (int a = 0; a < 10; a++)
    {
        if(a<=4)
        {
        for (int b = 0; b < 5-a; b++)
        {
            printf("*");
        }
        for (int c = 0; c < a; c++)
        {
            printf("  ");
            
        }
        for (int d = 0; d < 5-a; d++)
        {
            printf("*");
        }
        }
        if(a>=5)
        {
        for (int b = 0; b < a-4; b++)
        {
            printf("*");
        }
        for (int c = 0; c < 9-a; c++)
        {
            printf("  ");
            
        }
        for (int d = 0; d < a-4; d++)
        {
            printf("*");
        }
        }
        printf("\n");
    }
    
    return 0;
}