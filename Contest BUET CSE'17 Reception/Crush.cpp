#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    ll n,sum=0;
    cin>>t;
    for(int i=0 ;i<t ;i++)
    {
        cin>>n;
        for(ll j=1; j<=n ; j++)
        {
            for(ll k=j ; k<=n ; k++)
            {
                if(k%j == 0)
                    sum = sum ^ k;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }

    return 0;
}
