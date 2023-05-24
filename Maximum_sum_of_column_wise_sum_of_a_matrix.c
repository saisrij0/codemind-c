#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,s=0,max=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        s=0;
        for(i=0;i<r;i++)
        {
            s=s+a[i][j];
        }
        if(s>max)
        {
            max=s;
        }
    }
    printf("%d",max);
}