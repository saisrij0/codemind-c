#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            printf("%d ",arr[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}