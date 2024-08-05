#include <stdio.h>
int main()
{
    int n;
    printf("enter the any number:\n");
    scanf("%d",&n);
    for (int a = 1; a <= n ; a++)
    {
        if(a==1)
        {
            for (int c = 0; c < n; c++)
            {
                printf("*");
            }
            
        }
        if(a<n && a>1)
        {
        printf("*");
        for (int b = 0; b < n-1-a; b++)
        {
            printf(" ");
        }
        printf("*");
        }
        if(a==n)
        {
           printf("*"); 
        }
        printf("\n");
    }
   
    
    return 0;
}