#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int T,K,N,y,x;
    int i;
        scanf("%lld",&T);
        for (i=1 ; i<=T ; i++)
        {
            scanf("%lld",&K);
            N=abs((K/3)-(K/2))/2;
            y=abs((K/3)-N);
            x=y-2*N;
            if ((x+y)==K && (x+y)==3*(N+y) && K==2*(y-N) )
                printf("%lld %lld %lld\n",N,x,y);
            else
                printf("-1\n");
        }




    return 0;
}
