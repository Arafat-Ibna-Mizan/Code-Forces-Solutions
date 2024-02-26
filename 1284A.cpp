#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s1[25],s2[25];
    for(int i=0;i<n;i++)cin>>s1[i];
        for(int i=0;i<m;i++)cin>>s2[i];
        //fflush(stdin);
        int x;
        cin>>x;
        //fflush(stdin);
        while(x--)
        {
            int p;cin>>p;p--;
            cout<<s1[p%n]+s2[p%m]<<endl;
        }



}
