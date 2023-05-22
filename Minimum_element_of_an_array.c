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
    int min;
    for(i=0;i<n;i++)
    {
        min=a[0];
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}