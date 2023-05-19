#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    int r,rev=0,j,s=0;
    if(c==0)
    {
        while(n!=0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        for(j=2;j<rev;j++)
        {
            if(rev%j==0)
            {
                s=s+1;
            }
        }
        if(s==0)
        {
            printf("circular prime");
        }
        else{
            printf("prime but not a circular prime");
        }
    }
    else{
        printf("not prime");
    }
}