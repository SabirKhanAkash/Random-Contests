#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c=0,j;
    string num;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        cin>>num;
        for(j=0;j<num.size();j++){
            if(num[j]=='4')
                c++;
        }
        printf("%d\n",c);
        c=0;
    }

    return 0;
}
