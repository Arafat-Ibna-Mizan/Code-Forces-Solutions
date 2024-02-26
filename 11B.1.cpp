
#include <bits/stdc++.h>
using namespace std;
int sum(int s)
{
	return (s * (s + 1)) / 2;
}

int countJumps(int n)
{
    n = abs(n);
	int ans = 0;
	while (sum(ans) < n or (sum(ans) - n) & 1)
		ans++;
	return ans;
}

int main()
{
	int n;
	cin>>n;

	cout << countJumps(n);

	return 0;
}

