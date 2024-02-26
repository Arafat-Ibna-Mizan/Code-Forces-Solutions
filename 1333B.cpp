#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j;
    vector<int>vec;
    cin>>t;
    while(t--)
    {

        int k,l;
        cin>>k;
        while(k--)
        {
            cin>>l;
            vec.push_back(l);
        }
        int i=0;
        while(vec[i]!=0)
            i++;
        j=0;
        while(vec[i]!=1 || vec[i]!=vec.end())
        {
            j++;
            i++;
        }
        cout<<j<<endl;
        j=0;


        vec.clear();

    }
}
