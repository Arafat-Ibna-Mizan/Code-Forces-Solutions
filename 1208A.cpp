#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n,a,b,r;
    cin>>t;
    for(int i=0;i<t;i++){
            cin>>a>>b>>n;

            if(n%3==0){
                cout<<a<<endl;
                }
                if(n%3==1){
                cout<<b<<endl;
                }
                        if(n%3==2)
                        {
                            r=a^b;
                            cout<<r<<endl;
                        }

                }
    }



