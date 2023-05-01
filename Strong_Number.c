#include<stdio.h>
int factsum(int n)
{
    int i,r,f=1,sum=0;
    while(n>0)
    {
        r=n%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    return sum;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int s=factsum(n);
        if(s==n)
        {
            printf("Strong
");
        }
        else{
            printf("Not Strong
");
        }
    }
}