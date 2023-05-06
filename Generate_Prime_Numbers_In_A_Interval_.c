#include<stdio.h>
int main()
{
    int m,n,i,j,c=1;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        c=1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==1 && i!=1)
        {
            printf("%d
",i);
        }
    }
}