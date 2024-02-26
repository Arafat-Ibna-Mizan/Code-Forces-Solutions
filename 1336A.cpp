#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,l;

    cin>>t;
    while(t--)
    {
      cin>>n>>m;
      long long sum=0;
      while(n--)
      {
          cin>>l;
          sum+=l;
      }
      if(sum==m)
        cout<< "YES"<<endl;
      else
        cout<< "NO"<<endl;
    }
}



