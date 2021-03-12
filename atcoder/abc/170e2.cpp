#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

map<int, int, greater<int>> mi[200005];
 
int main(){
	int n, q;
	cin >> n >> q;
 
	map<int, int> m;
	vector<int> a(n), b(n);
 
	rep(i, n){
		cin >> a[i] >> b[i];
		b[i]--;
		mi[b[i]][a[i]]++;
	}
 
	rep(i, 200005){
		if(mi[i].size()> 0){
			m[mi[i].begin() -> first]++;
		}
	}
 
	rep(qi, q){
		int c, d;
		cin >> c >> d;
		c--;
		d--;
 
		// for (auto &&i : m)
		// {
		// 	cout << i.first << " " << i.second << endl;	
		// }
 
 
		m[mi[b[c]].begin() -> first]--;
		if(m[mi[b[c]].begin() -> first]==0) m.erase(mi[b[c]].begin() -> first);
		if(m[mi[d].begin() -> first]>0) m[mi[d].begin() -> first]--;
		if(m[mi[d].begin() -> first]==0) m.erase(mi[d].begin() -> first);
 
		mi[b[c]][a[c]]--;
		if(mi[b[c]][a[c]]==0) mi[b[c]].erase(a[c]);
		mi[d][a[c]]++;
 
		m[mi[b[c]].begin() -> first]++;
		m[mi[d].begin() -> first]++;
 
		m.erase(0);
 
// printf("m1 %d\n", qi);
// 		for (auto &&i : mi[0])
// 		{
// 			cout << i.first << " " << i.second << endl;	
		// }
 
 
// printf("m after  %d\n", qi);
// 		for (auto &&i : m)
// 		{
// 			cout << i.first << " " << i.second << endl;	
// 		}
		
 
		cout << m.begin() -> first << endl;
 
		b[c] = d;
	}
	return 0;
}