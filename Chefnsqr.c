#include<stdio.h>
int main()
{
    int n,x,y;
    long long int c[2000][2];
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        for(y=0;y<2;y++)
        scanf("%lld",&c[x][y]);
    }
    for(x=0;x<n;x++)
    {
        for(y=0;y<2;y++)
        printf("%lld",c[x][y]);
    }

}
