#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <deque>
const int mx = 2e5;
std:: vector < std::pair < int64_t, int64_t > > fac;
void facc(int64_t K)
{
	fac.clear();
	int64_t j = 0;
	while(K%2 == 0)
		K /= 2, j++;
	fac.push_back({j, 2});
	for(int64_t i = 3; i*i <= K; i += 2)
	{
		if(K%i == 0)
		{
			int64_t count = 0;
			while(K%i == 0)
			{
				K /= i, count++;
			}
			fac.push_back({count, i});
		}

	}
	if(K > 1)
		fac.push_back({1, K});
}
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
		int64_t go = N;
		facc(N);
		sort(fac.begin(), fac.end()); 
		int64_t size = fac.size();
		cout << fac[size - 1].first << "\n";
		int64_t ptr = 1;
		for(int64_t i = 0; i < fac[size-1].first; ++i)
		{
			if(i == fac[size - 1].first-1)
			{
				cout << go/ptr << "\n";
				goto tag;
			}
			cout << fac[size-1].second << " ";
			ptr *= fac[size-1].second;
		}
		tag:;
	}
	return 0;
}
