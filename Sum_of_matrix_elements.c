#include<stdio.h>
int main()
{
    int m,n,s=0;
    scanf("%d%d",&m,&n);
    int a[m][n],i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}