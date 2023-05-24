#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,o=0,e=0;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i%2!=0)
            {
                o=o+a[i][j];
            }
            else{
                e=e+a[i][j];
            }
        }
    }
    printf("%d %d",o,e);
}