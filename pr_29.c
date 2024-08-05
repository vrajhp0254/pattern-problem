#include <stdio.h>
int main()
{
    int n,q=0;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            printf("%d",q);
            q=q+1;
        }
        printf("\n");
    }
    
    return 0;
}