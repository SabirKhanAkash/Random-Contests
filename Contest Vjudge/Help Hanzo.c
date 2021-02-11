#include<stdio.h>
int main()
{
    int T,a,b,i,j,k;
    scanf("%d",&T);
    for (i=1 ; i<=T ; i++)
    {
        scanf("%d%d",&a,&b);
         for(j=a;j<=b;j++) {
        for(k=2;k<j;k++) {
            if(j%k==0)
            break;
    }
        if(j==k)
            printf("%d\t",j);

    }

    }
    return 0;
}
