#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        if(a==1 || a==n)
        {
            for (int i = 0; i < n/2; i++)
            {
                printf(" ");
            }
            printf("*");
        }
        if(a>1 && a<n/2+2)
        {
            for (int x = 0; x < n/2-a+1; x++)
            {
                printf(" ");
            }
            
            printf("*");
            for (int b = 1; b < (a-1)*2; b++)
            {
                printf(" ");
            }
            printf("*");
        }
        if(a>n/2+1 && a<n)
        {
            for (int y = 0; y < a-(n/2+1); y++)
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
        printf("\n");
    }
    
    return 0;
}