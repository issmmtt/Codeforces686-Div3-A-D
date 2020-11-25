#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>

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
		vector < int64_t > A(N), B, cnt(N+1, 1);
		for(int64_t i = 0; i < N; ++i)
		{
			cin >> A[i];
			if(B.size() && A[i] == B.back())
				continue;
			B.push_back(A[i]);
		}
	//	cout << B.size() << "\n";
		for(auto &i : B)
			cnt[i]++;
		cnt[B[0]] -= 1;
		cnt[B[B.size()-1]] -= 1;
	//	cout << cnt[B[B.size()-1]] << "\n";
		int64_t ret = 1e9;
		for(int64_t &i : B)
			ret = min(ret, cnt[i]);
		cout << ret << "\n";
	}
	return 0;
}
