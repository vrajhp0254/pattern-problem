#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <=n; a++)
    {
        for (int b = 0; b < a-1; b++)
        {
        printf(" ");
        }
        for (int c = 1; c < (n-a+1)*2; c++)
        {
        printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}