#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int q,c=0;
    char s1[20000][50],s2[1000010],s3[1000010];
    cin>>q;
    for(int i=0 ;i<q ;i++)
    {
        scanf("%s",s1[i]);
    }
    gets(s2);
    sort(s2,s2+strlen(s2));
    for(int i=0 ; i<strlen(s2) ; i++)
    {
        for(int j=0 ; j<strlen(s1[j]);j++)
        {
            if(s1[j]!= s2[i])
            {
                flag = 1;
            }
            else
                break;
        }
        if(flag == 1)
            s3[k++] = s2[i];
    }


    return 0;
}
