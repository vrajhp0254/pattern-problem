#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int a = 1; a <=n; a++)
    {
    if(a<=n/2)    
    {
        for (int b = 0; b < n/2-a+2 ; b++)
    {
        printf("*");
        
    }
    printf("\n");
    }
    else
    {
        for (int c = 0; c < a-n/2 ; c++)
    {
        printf("*");
        
    }
    printf("\n");
    }
    
    }
    
    
    return 0;
}