#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    int m = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[n];
        m+=a[n];
    }

    cout<<setprecision(14);
    cout<<m/(double)n;
}
