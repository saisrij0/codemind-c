#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int a,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            if(arr[i]<a || arr[i]>b)
            {
                max=arr[i];
            }
        }
    }
    if(max<a || max>b)
    {
        printf("%d",max);
    }
    else{
        printf("-1");
    }
}