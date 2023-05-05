#include<stdio.h>
int main()
{
    int n,sq,r,rev=0;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int res;
    res=rev*rev;
    int rs,re=0;
    while(res>0)
    {
        rs=res%10;
        re=re*10+rs;
        res=res/10;
    }
    if(re==sq)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}