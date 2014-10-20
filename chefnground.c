#include<stdio.h>
int main()
{
    int i,n,m,t,a[100];
    scanf("%d",&t);
    while(t--)
    {
        int max=0,sum=0,b;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
            if(max<a[i])
            max=a[i];
        }
        for(i=0;i<n;i++)
        {
            sum=sum+max-a[i];
        }
        b=m-sum;
        if(b%n==NULL)
        printf("Yes\n");
        else
        printf("No\n");
    }
}
