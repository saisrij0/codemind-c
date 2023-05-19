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
        if(i%2==0)
        {
            o=o+a[i];
        }
        else{
            e=e+a[i];
        }
    }
    d=o-e;
    printf("%d",d);
}