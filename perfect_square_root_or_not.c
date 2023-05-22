#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,c=0;
    for(i=1;i<n;i++)
    {
        if(n==i*i)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}