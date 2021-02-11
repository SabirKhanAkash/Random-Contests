#include<stdio.h>
int main()
{
    long long int x,k,n,w,i,sum=0;
    scanf("%lld%lld%lld",&k,&n,&w);
    for (i=1 ; i<=w ; i++)
    {
        sum += k*i;
    }
    if (sum>n)
    {
        x=abs(sum-n);
        printf("%lld\n",x);
    }
    else if (sum<n || sum==n)
        printf("0\n");


    return 0;
}
