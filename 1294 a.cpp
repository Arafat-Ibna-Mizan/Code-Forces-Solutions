#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
	cin >>t;
	for (int i=0;i<t;++i) {
		int a[3], n;
		cin >> a[0] >> a[1] >> a[2] >> n;
		sort(a, a + 3);
		int A=n-(2 * a[2] - a[1] - a[0]);
		if (A < 0 || A % 3 != 0) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	return 0;
}


