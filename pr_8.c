#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <=n; a++)
    {
        if(a<=(n/2+1))
        {
        for (int c = 0; c < a; c++)
        {
            printf("*");
        }
        }
        else
        {
            for (int b = 0; b < n-a+1; b++)
            {
                printf("*");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}