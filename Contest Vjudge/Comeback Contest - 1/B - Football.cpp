#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,goals=0;
    string champ,team;
    cin>>T;
    for(int i=0;i<T;i++) {
        if(goals!=0) {
            cin>>team;
            if(team==champ)
                goals+=1;
            else
                goals-=1;
        }
        else {
            cin>>champ;
            goals = 1;
        }
    }
    cout<<champ<<endl;
    return 0;
}
