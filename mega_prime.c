#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,d=0,mp=0,r;
    scanf("%d",&n);
    if(prime(n))
    {
        while(n!=0)
        {
            r=n%10;
            if(prime(r))
            {
                mp=mp+1;
            }
            d=d+1;
            n=n/10;
        }
        if(mp==d)
        {
            printf("Mega Prime");
        }
        else{
            printf("Not Mega Prime");
        }
    }
    else{
        printf("Not Mega Prime");
    }
}