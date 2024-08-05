#include <stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        if(a==1)
        {
            for (int c = 0; c < n-a; c++)
            {
                printf(" ");
                
            }
            printf("*");
            
        }
        if(a>1 && a<n)
        {
            for (int c =0; c < n-a; c++)
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
        if(a==n)
        {
            for (int i = 1; i < n*2; i++)
            {
                printf("*");
            }
            

        }
        printf("\n");
    }
    
    return 0;
}