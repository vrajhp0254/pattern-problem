#include <stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
        for (int a = 1; a <= n; a++)
    {
        if(a==1)
        {
            for (int c = 0; c < n; c++)
            {
                printf("*");
            }
            
        }
        if(a>1 && a<n)
        {
            for (int c = 0; c < a-1; c++)
            {
                printf(" ");
            }
            
            printf("*");
            for (int b = 0; b < n-1-a ; b++)
            {
                printf(" ");
            }
            printf("*");
        }
        if(a==n)
        {
            for (int i = 0; i < n-1; i++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}