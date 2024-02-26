#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string s;
    cin >> s;
    n = s.length();
    int cnt = 0;
    for(i = 0; i < n; i += 2)
        cnt++;

    bool f = true;
    for(i = 1; i < n; i++)
    {
        if(s[i] != '0'){
            f = false;
            break;
        }
    }

    if(f && n % 2)
        cnt--;
    cout<<cnt;

    return 0;
}
