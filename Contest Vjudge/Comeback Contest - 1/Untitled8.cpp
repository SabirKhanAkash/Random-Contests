#include<stdio.h>
int main()
{
    long long int T,N,sum=0;
    scanf("%lld",&T);
    for (int i=1;i<=T;i++) {
        scanf("%lld",&N);
        for(int j=1;j<N;j++){
            if(j%3==0 || j%5==0)
                sum+=j;
        }
        printf("%lld\n",sum);
        sum=0;
    }

    return 0;
}
