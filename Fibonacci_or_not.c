#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    while(1)
    {
        c=a+b;
        if(n==c)
        {
            printf("True");
            break;
        }
        if(c>n)
        {
            printf("False");
            break;
        }
        a=b;
        b=c;
    }
}