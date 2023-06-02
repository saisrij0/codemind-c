#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,f=0,l=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i<n/2)
        {
            f=f+a[i];
        }
        else{
            l=l+a[i];
        }
    }
    printf("%d
%d",f,l);
}