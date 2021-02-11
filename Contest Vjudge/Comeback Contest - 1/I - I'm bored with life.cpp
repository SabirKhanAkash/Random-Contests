#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A,B;
    cin>>A>>B;
    int x=1;
    for(int i=1;i<=min(A,B);i++)
        x *= i;
    cout<<x<<endl;
}
