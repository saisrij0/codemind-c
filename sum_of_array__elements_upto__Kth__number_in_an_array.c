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
    int k,s=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(a[i]==k)
        {
            break;
        }
    }
    printf("%d",s);
}