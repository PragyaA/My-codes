#include<stdio.h>
int main()
{
    int x;
    float y,a;
    scanf("%d %f",&x,&y);
    if(y>(x+0.5))
    {
        if(x%5==0)
            sum=y-x-0.5;
        else
            sum=y;
    }
    else
        sum=y;
    printf("%f\n",sum);
    return 0;
}
