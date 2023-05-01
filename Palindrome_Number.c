#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,r,rev=0;
        scanf("%d",&m);
        int temp;
        temp=m;
        while(m>0)
        {
            r=m%10;
            rev=rev*10+r;
            m=m/10;
        }
        if(rev==temp)
        {
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}