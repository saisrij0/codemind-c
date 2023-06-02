#include<stdio.h>
int main()
{
    int m,i,c=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        int n,r,rev=0;
        scanf("%d",&n);
        int t;
        t=n;
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(rev==t)
        {
            c++;
        }
    }
    printf("%d",c);
}