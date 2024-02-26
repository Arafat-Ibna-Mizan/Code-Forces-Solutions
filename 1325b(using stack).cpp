#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        list<int>l;
        int n;
        cin>>n;
        while(n--)
        {
            int a;
            cin>>a;
            l.push_back(a);
        }
        l.unique();
        for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
        cout<<endl;
    }

}
