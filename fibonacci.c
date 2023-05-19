#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    while(n-2!=0)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;
    }
}