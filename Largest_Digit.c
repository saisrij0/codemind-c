#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,max=1;
    while(n>0)
    {
        r=n%10;
        if(r>max)
        {
            max=r;
        }
        n=n/10;
    }
    printf("%d",max);
}