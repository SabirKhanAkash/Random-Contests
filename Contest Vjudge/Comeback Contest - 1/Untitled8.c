#include<bits/stdc++.h>
int main()
{
    long long int T,N,sum=0;
    scanf("%lld",T);
    for (int i=0;i<T;i++) {
        scanf("%lld",&N);
        for(int j=1;j<N;j++){
            if(j%3==0)
                sum+=j;
            if(j%5==0)
                sum+=j;
        }
        printf("%lld\n",sum);
        sum=0;
    }

    return 0;
}
