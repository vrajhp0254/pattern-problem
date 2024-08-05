#include <stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        for (int b = 0; b < a; b++)
        {
            x=x+1;
            printf("%d",x);
        }
        
            int y=x;
            for (int d = 0; d < a-1; d++)
            {
                y=y-1;
                printf("%d",y);
            }
        printf("\n");
    }
    
    return 0;
}