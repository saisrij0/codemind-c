#include<stdio.h>
int not_prime(int i)
{
    int j,c=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int n,i,r=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(not_prime(i))
            {
                r++;
            }
        }
    }
    printf("%d",r);
}