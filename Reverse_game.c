#include<stdio.h>
int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        int n,r,rev=0;
        scanf("%d",&n);
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        printf("%d ",rev);
    }
}