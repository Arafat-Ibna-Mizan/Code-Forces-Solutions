#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i=0,sum=0;
    cin >> n;
    n=abs(n);
    if(n==0)
        cout<<"0";
    else
    {
        while(sum!=n)
    {
       sum+=i;
       //cout<<i;
       if(sum>n)
            sum-=2*i;
       i++;
    }
    cout<< i-1;
    }
}
