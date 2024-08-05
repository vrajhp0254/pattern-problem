#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = n; a >= 1; a--)
    {
        for (int b = a; b >=1; b--)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    
    return 0;
}