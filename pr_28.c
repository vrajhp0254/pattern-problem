#include <stdio.h>
int main()
{
     int n;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        for (int b = a; b >= 1; b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    
    return 0;
}