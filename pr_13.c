#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        if (a==1)
        {
            printf("*");
        }
        else
        {
            printf("*");
            for (int b = 0; b < a-2; b++)
            {
                if(a==n)
                {
                    for (int c = 0; c < n-2; c++)
                    {
                        printf("*");
                    }
                    break;
                }
                else{
                    printf(" ");
                }
            }
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}