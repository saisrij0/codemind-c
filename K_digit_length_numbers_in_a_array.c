#include<stdio.h>
int main()
{
    int n,k,i,c=0,res=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        c=0;
        if(m==0)
        {
            c=1;
        }
        else{
            while(m)
            {
                m=m/10;
                c++;
            }
        }
        if(c==k)
        {
            res++;
        }
    }
    printf("%d",res);
}