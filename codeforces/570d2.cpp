// coded by monolith_2
#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>

using namespace std;
typedef pair<long long int, long long int> P;

long long int INF = 1e18;
long long int MOD = 1e9 + 7;

int main(){
	int q;
	cin >> q;
	for(int loop = 0; loop < q; loop++){
		int n;
		cin >> n;
		map<long long int, long long int> m;
		for(int i = 0; i < n; i++){
			int tp;
			cin >> tp;
			m[tp] += 1;
		}
		vector<long long int> v;
		for(auto ite : m){
			v.push_back(-ite.second);
		}
		sort(v.begin(), v.end());
		long long int ans = 0, maxC = INF;
		for(long long int num : v){
			num = -num;
			maxC = min(maxC, num);
			ans += maxC;
			maxC -= 1;
			if(maxC <= 0){
				break;
			}
		}
		cout << ans << endl;
	}
  return 0;
}