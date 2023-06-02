#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    c=a+b;
    while(1)
    {
        if(c==n)
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
        c=a+b;
    }
}