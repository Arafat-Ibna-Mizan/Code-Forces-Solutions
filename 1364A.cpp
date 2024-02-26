#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,x,y;
    cin>>t;
    while(t--)
    {
        cin>>l>>x;
        int sum=0;
        while(l--)
        {
            cin>>y;
            if(y%x!=0)
                sum++;
        }
        if(sum%x)
        cout<< sum<<endl;
        else
            cout<<"-1"<<endl;
    }
}
