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
		vector < pair < int64_t, int64_t > > mp(N+1);
		int64_t i = 1;
		while(i <= N)
		{
			int64_t x; cin >> x;
			mp[x].first++;
			mp[x].second = i;
			i++;
		}
		for(int64_t i = 1; i <= N; ++i)
		{
			if(mp[i].first == 1)
			{
				cout << mp[i].second << "\n"; goto tag;
			}
		}
		cout << "-1\n";
		tag:;
	}
	return 0;
}
