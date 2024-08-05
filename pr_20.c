#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        if(a==1 || a==n)
            printf("*");
        if(a>1 && a<n/2+2)
        {
            printf("*");
            for (int b = 0; b < a-2; b++)
            {
                printf(" ");
            }
            printf("*");
        }
        if(a>n/2+1 && a<n)
        {
            printf("*");
            for (int c = 0; c < n-a-1; c++)
            {
                printf(" ");
            }
            printf("*");
            
        }
        printf("\n");
    }
    
    return 0;
}