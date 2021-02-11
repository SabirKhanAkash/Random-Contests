#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum=0,sum2=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        for(int j=1;j<=n;j++){
            sum+=(j*j);
        }
        for(int j=1;j<=n-1;j++){
            sum2+=(j*j);
        }
        cout<<sum+sum2<<endl;
        sum=0;
        sum2=0;
    }

    return 0;
}
