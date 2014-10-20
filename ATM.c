This is my first program to be committed.
#include<stdio.h>
int main()
{
    long long int i,count=0,n,k,a[10000000];
    scanf("%lld %lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]%k==0)
            count++;
    }
    printf("%lld\n",count);
    return 0;
}
