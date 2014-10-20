#include<stdio.h>
int main()
{
        int t,n,m,a[100],i,maxi=0,sum=0;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d %d",&n,&m);
            for(i=1;i<=n;i++)
            scanf("%d ",&a[i]);
            for(i=1;i<=n;i++)
            {
                if(maxi<a[i])
                maxi=a[i];
            }
            for(i=1;i<=n;i++)
            {
                sum=sum+(maxi-a[i]);
            }
            if(sum==m)
            printf("Yes\n");
            else
            printf("No\n");
        }
        return 0;
}
