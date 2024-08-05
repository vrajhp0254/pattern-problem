#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <=n; a++)
    {
        for (int b = 0;  b< n-a; b++)
        {
            printf(" ");
        }
        for (int c = 0; c < a; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}