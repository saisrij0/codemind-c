#include<stdio.h>
int prime(int m)
{
    int i,r=0;
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            r++;
        }
    }
    if(r==2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(a[i]))
        {
            s=s+a[i];
            c++;
        }
    }
    float avg;
    avg=s/(c*1.0);
    printf("%0.2f",avg);
}