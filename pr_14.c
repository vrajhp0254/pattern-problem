#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        if (a==1)
        {
            for (int d = 0; d < n-a; d++)
            {
                printf(" ");
            }
            printf("*");            
        }
        else
        {
            if(a>1 && a<n)
            {
            for (int b = 0; b < n-a; b++)
            {
                printf(" ");
            }
            printf("*");
            for (int c = 0; c < a-2; c++)
            {
                printf(" ");
            }
            printf("*");
            }
            if(a==n)
            {
                for (int d = 0; d < n; d++)
                {
                    printf("*");
                }   
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}