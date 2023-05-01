#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int x,y,j;
        scanf("%d%d",&x,&y);
        int z,c=0;
        for(j=x;j<=y;j++)
        {
            z=j%10;
            if(z==2 || z==3 || z==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}