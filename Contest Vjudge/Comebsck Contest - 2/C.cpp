#include<bits/stdc++.h>
using namespace std;
int main()
{
    signed int t,n,m,pos_sum=0,neg_sum=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d",&n,&m);
        for(int j=1;j<=n;j++){
            if((j<=m || j==2*m+1 || j==2*m+2 || j==2*m+3 )&& (j!=2*m))
                neg_sum+=j;
            else
                pos_sum+=j;
        }
        cout<<pos_sum<<"  "<<neg_sum<<endl;
        printf("%d\n",pos_sum-neg_sum);

        pos_sum=0;
        neg_sum=0;
    }

    return 0;
}
