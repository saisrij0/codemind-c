#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=n/4;
    if(n!=0 && n<4)
    {
        printf("1");
    }
    else if(n>=4 && n%4==0)
    {
        printf("%d",r);
    }
    else{
        printf("%d",r+1);
    }
}