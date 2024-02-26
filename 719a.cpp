#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        long long R;
        cin>>R;
        int L=1;
        long long tmp = 0, ans = 0;
	long long n = log10(R) + 1;

	for (long long i = 0; i < n; i++) {

		tmp = tmp * 10 + 1;

		for (long long j = 1; j <= 9; j++) {

			if (L <= (tmp * j)
				&& (tmp * j) <= R) {

				ans++;
			}
		}
	}
	cout<< ans<<endl;
    }


}

