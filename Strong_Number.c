#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int temp,i,f=1;
    temp=n;
    while(n>0)
    {
        r=n%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
    }
    if(s==temp)
    {
        printf("The number %d is a strong number",temp);
    }
    else{
        printf("The number %d is not a strong number",temp);
    }
}