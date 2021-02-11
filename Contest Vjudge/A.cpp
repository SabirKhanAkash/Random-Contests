#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,a,b,c,d,e,f,g,i,t,x,y,z,m,n,p,q,l=0;
    cin>>n1>>a>>b>>c>>d>>e>>f>>g;
    for (i = 0 ;  ; i+=1 ) {
    if (n1>a ) {
        x = abs(n1-a);
        if(x==0) {
            t=a;
            break;
        }
    }
    else {
        t=a;
        break;
    }
    if (x>b)
        y = abs(x-b);
        if(y==0) {
            t=b;
            break;
        }
    else {
        t=b;
    break;
    }
     if (y>c)
        z = abs(y-c);
        if(z==0) {
            t=c;
            break;
        }
    else {
        t=c;
    break;
    }
     if (y>d)
        m = abs(z-d);
        if(m==0) {
            t=d;
            break;
        }
    else {
        t=d;
    break;
    }
    if (y>e)
        n = abs(m-e);
        if(n==0) {
            t=e;
            break;
        }
    else {
        t=e;
    break;
    }
    if (y>f)
        p = abs(n-f);
        if(p==0) {
            t=f;
            break;
        }
    else {
        t=f;
    break;
    }
    if (y>g) {
        q = abs(p-g);
        if(q==0) {
            t=g;
            break;
        }
        else
            n1=q;
    }
    else {
        t=g;
    break;
        }
    }
    if(t==a)
        cout<<"1"<<endl;
    else if (t==b)
        cout<<"2"<<endl;
    else if(t==c)
        cout<<"3"<<endl;
    else if(t==d)
        cout<<"4"<<endl;
    else if(t==e)
        cout<<"5"<<endl;
    else if(t==f)
        cout<<"6"<<endl;
    else if(t==g)
        cout<<"7"<<endl;
    return 0;
}
