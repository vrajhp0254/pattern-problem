#include <stdio.h>
int main()
{
    int n; 
    printf("enter value in multiple of 4: \n");
    scanf("%d",&n);
    printf("* * *\n");
    for (int a = 1; a <= n; a++)
    {
        if (a%4==0)
        {
            printf("* * *");
        }
        else
        {
            printf("*   *");
        }
        printf("\n");
    }
    
    return 0;
}