#include <stdio.h>
int main()
{
    for (int a = 0; a < 9; a++)
    {
        if(a<=4)
        {
        for (int b = 0; b < a+1; b++)
        {
            printf("*");
        }
        for (int b = 0; b < 4-a; b++)
        {
            printf("  ");
        }
        for (int b = 0; b < a+1; b++)
        {
            printf("*");
        }
        }
        if(a>=5)
        {
        for (int b = 0; b < 9-a; b++)
        {
            printf("*");
        }
        for (int b = 0; b < a-4; b++)
        {
            printf("  ");
        }
        for (int b = 0; b < 9-a; b++)
        {
            printf("*");
        }
        }
        printf("\n");
        
    }
    
    return 0;
}