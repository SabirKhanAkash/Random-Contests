#include<stdio.h>
int main()
{
    long long int T,N,i;
    scanf("%lld",&T);
    for (i=1;i<=T;i++) {
        scanf("%lld",&N);
        printf("%lf\n",3 * (floor(N-1/3)  *  (floor(N-1/3)+1))/2
+ 5 * (floor(N-1/5)  *  (floor(N-1/5)+1))/2
-15 * (floor(N-1/15) * (floor(N-1/15)+1))/2);

    }

    return 0;
}
