#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    float i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("%0.2f",sum);
}