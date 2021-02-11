#include<iostream>
#include<stdio.h>
#define si(x) scanf("%d",&x)
using namespace std;
int main()
{
    int n,arr[1010],ps=0,pd=0;
    si(n);
    for(int i=0;i<n;i++){
        si(arr[i]);
    }
    if(n%2==0) {
        for(int i=0,j=n-1;(i!=(n/2));i++,j--){
        if(arr[i]>arr[j]){
                ps+=arr[i];
                pd+=arr[j];


            cout<<ps<<endl;
            cout<<pd<<endl;
        }
        else {
                ps+=arr[j];
                pd+=arr[i];


            //cout<<ps<<endl;
            //cout<<pd<<endl;
        }
    }
    cout<<ps<<" "<<pd<<endl;
    }
    if(n%2!=0) {
        for(int i=0,j=n-1;(i!=(n+1)/2);i++,j--){
        if(arr[i]>arr[j]){
                ps+=arr[i];
                pd+=arr[j];


            //cout<<ps<<endl;
            //cout<<pd<<endl;
        }
        else {
                ps+=arr[j];
                pd+=arr[i];


            //cout<<ps<<endl;
            //cout<<pd<<endl;
        }
    }
    cout<<ps<<" "<<pd-arr[((n+1)/2)-1]<<endl;
    }

    return 0;
}
