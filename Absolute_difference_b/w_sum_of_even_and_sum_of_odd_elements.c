#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,e=0,o=0,d;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            o=o+a[i];
        }
        if(a[i]%2==0)
        {
            e=e+a[i];
        }
    }
    if(e>o)
    {
        d=e-o;
    }
    else{
        d=o-e;
    }
    printf("%d",d);
}