#include<stdio.h>
int non_prime(int n)
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
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(non_prime(i))
            {
                c++;
            }
        }
    }
    printf("%d",c);
}