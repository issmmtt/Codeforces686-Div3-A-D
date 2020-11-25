#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <deque>
const int mx = 2e5;
int32_t main()
{
	using namespace std;
	ios::sync_with_stdio(0); cin.tie(0);

	int64_t T = 1;;
	cin >> T;
	while(T--)
	{
		int64_t N;
		cin >> N;
		for(int64_t i = 1; i <= N; ++i)
			cout << (i == N ? 1 : i+1) << " \n"[i == N];
	}
	return 0;
}
