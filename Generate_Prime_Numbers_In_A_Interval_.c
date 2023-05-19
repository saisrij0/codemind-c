#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int i,j,c=0;
    for(i=m;i<=n;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(i!=1 && c==0)
        {
            printf("%d
",i);
        }
    }
}