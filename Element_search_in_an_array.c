#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se,c=0;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==a[i])
        {
            c=1;
            break;
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