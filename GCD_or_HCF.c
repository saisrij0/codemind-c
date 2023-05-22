#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    for(i=a*b;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            break;
        }
    }
    printf("%d",i);
}