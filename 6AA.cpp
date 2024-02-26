#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

        if((a+b>c && b+c>a && a+c>b)||(b+c>d && b+d>c && c+d>b) ||
           (a+c>d && a+d>c && d+c>a)||(a+b>d && a+d>b && b+d>a))
           cout<< "TRIANGLE"<<endl;
    else if((a+b==c || a+c==b || b+c==a) || (b+c==d || b+d==c || c+d==b)||
            (a+c==d || a+d==c || d+c==a) ||(a+b==d || a+d==b || b+d==a))
           cout<< "SEGMENT"<<endl;
           else
            cout << "IMPOSSIBLE"<<endl;
}
