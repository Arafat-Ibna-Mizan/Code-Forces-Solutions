#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <int >v;
        int k;
        for(int i=0;i<3;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        if(v[1]!=v[2])
            cout<< "NO"<<endl;
        else
        {
            cout<< "YES"<<endl;
            cout<<v[0]<< "\t"<<v[0]<< "\t"<<v[1]<<endl;
        }
    }
}
