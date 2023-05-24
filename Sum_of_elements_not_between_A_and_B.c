#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}