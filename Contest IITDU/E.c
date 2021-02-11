#include<stdio.h>
int main()
{
    int T,N,i,j,sum=0,rem;
    scanf("%d",&T);
    for (i=1 ; i<=T ; i++)
    {
        scanf("%d",&N);
        for (j=1 ; j<N-1 ; j++)
          {
            rem = N % i;
            if (rem == 0)
            {
            sum = sum + i;
            }
        }
        if (sum==N)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
