#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        for (int b = 0; b < n-i; b++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}