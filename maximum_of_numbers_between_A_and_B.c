#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],x,y;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            if(a[i]>=x && a[i]<=y)
            {
                max=a[i];
            }
        }
    }
    if(max>=x && max<=y)
    {
        printf("%d",max);
    }
    else{
        printf("-1");
    }
}