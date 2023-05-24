#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,c=0;
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
        printf("%d ",c);
    }
}