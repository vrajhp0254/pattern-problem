#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    for (int a = 1; a <=n; a++)
    {
       if(a<=(n/2+1))
        {
        for (int b = 0; b < n/2+1-a; b++)
        {
           printf(" ");
        }
        for (int x = 1; x < a*2; x++)
        {
            printf("*");
        }
        }
        else
        {
        for (int c = 0; c < a-n/2-1; c++)
        {
            printf(" ");
        }
        for (int y = 1; y < (n-a+1)*2; y++)
        {
            printf("*");
        }
        }
        printf("\n");
        
    }
    
    return 0;

}