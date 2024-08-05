#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <= n; a++)
    {
        if(a <= n/2+1)
        {
        for (int b = 1; b < a; b++)
        {
           printf(" ");
        }
        for (int c = 0; c < n/2+2-a; c++)
        {
            printf("*");
        }
        }
        else
        {
        for (int b = 0; b < n-a; b++)
        {
            printf(" ");
        }
        for (int c = 0; c < a-n/2; c++)
        {
            printf("*");
        }
        }
        printf("\n");
        
    }
    
    return 0;
}