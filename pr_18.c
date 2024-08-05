#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        if(a==1)
        {
            for (int i = 1; i < n*2; i++)
            {
                printf("*");
            }
            
        }
        if(a>1 && a<n)
        {
        for (int b = 0; b < a-1; b++)
        {
            printf(" ");
        }
        printf("*");
        for (int c = 1; c < (n-a)*2; c++)
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