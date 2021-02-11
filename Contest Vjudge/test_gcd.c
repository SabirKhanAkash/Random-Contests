#include<stdio.h>
#include<math.h>
int main()
{
    int GCD,G=0,i,p,j,N[502], a,b,t,m,gcd;
    while(p!=0)
    {
        scanf("%d",&N[p]);
    }
    for(i=1 ; i<N ; i++)
    {
        for(j=i+1 ; j<=N ; j++)
        {
             m=i*j;
            if(i==0) gcd=i;
            else if(j==0) gcd =j;
            else {
            while (j!=0) {
                t=j;
                b=i%j;
                i=t;
            }
            gcd=t;
            }
            G+= gcd;
        }
    }
    printf("%d\n",G);
    return 0;
}

