#include <stdio.h>
int main()
{
    int n; 
    scanf("%d",&n);
        for (int a = 1; a <= n; a++)
    {
        if(a <= n/2+1)
        {
        for (int b = 0; b < a-1; b++)
        {
            printf(" ");
        }
        for (int c = 1; c < (n/2+2-a)*2; c++)
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
        for (int c = 1; c < (a-n/2)*2; c++)
        {
            printf("*");
        }
        }
        printf("\n");
    }
    
    return 0;
}