#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=64+n;i>64;i--)
    {
        for(j=n;j>64+n-i;j--)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}