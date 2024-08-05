#include <stdio.h> //javainterviewpoint
int main()
{
    int a,b,n;
    printf("enter the any number:\n");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        for(b=0;b<a;b++)
        {

        printf("*");
        }
        printf("\n");
    }
    return 0;
}