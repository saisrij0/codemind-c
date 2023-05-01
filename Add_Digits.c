#include<stdio.h>
int add(int n)
{
    int r,s=0;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(s>9)
    {
        return add(s);
    }
    else{
        return s;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int res=add(n);
    printf("%d",res);
}