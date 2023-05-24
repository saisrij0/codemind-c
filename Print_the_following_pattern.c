#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i|| j==n+1-i)
            {
                printf("%d ",i);
            }
            else{
                printf(" ");
            }
        }
        printf("
");
    }
}