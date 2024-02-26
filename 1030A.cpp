#include<iostream>
using namespace std;
int main()
{
    int n,i,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<n;i++)
    {
            if(a[i]==1)
            {
                break;
            }
    }
    if(i==n)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }
    return 0;
}
