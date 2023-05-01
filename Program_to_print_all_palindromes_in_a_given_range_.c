#include<stdio.h>
int palindrome(int i)
{
    int r,rev=0;
        while(i>0)
        {
            r=i%10;
            rev=rev*10+r;
            i=i/10;
        }
    return rev;
}
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        int temp;
        temp=i;
        int res=palindrome(i);
        if(res==temp)
        {
            printf("%d ",res);
        }
    }
}