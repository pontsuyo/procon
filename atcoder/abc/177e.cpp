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

#define MAX_N 1000005

int prime[MAX_N];
int d[MAX_N]; //　その数をふるい落とした素数
bool is_prime[MAX_N+1];

int sieve(int n){
    int p=0;
    for(int i=0;i<=n;i++){
        is_prime[i] = true;
    }
    is_prime[0] = false;
    is_prime[1] = false;
	d[1]=1;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            prime[p++] = i;
			d[i] = i;
            for(int j=2*i; j <= n; j+=i){
                is_prime[j] = false;
				if(d[j] == 0){
                    d[j] = i;
                }
            }
        }
    }
    return p;
}

bool used[1000000];

int main(){
	int n;
	cin >> n;

	vector<int> a(n);
	rep(i, n) cin >> a[i];

	// pairwise判定
	sieve(1000005);

	bool pairwise = true;
	rep(i, n){
		int t = a[i];

		set<int> ts;
		// int pi = 0;
		while(t>1){
			// while(t%prime[pi]==0){
			// 	t /= prime[pi];
			// 	ts.insert(pi);
			// }
			// pi++;

			// 割り算回数が減った
			ts.insert(d[t]);
			if(d[t]==t) break;
			t /= d[t];
		}

		for (auto &&si : ts)
		{
			if(used[si]){
				pairwise = false;
				break;
			}else{
				used[si] = true;
			}
		}
		if(!pairwise) break;
	}
	
	if(pairwise){
		cout << "pairwise coprime" << endl;
		return 0;
	}


	// setwise判定
	int g = a[0];
	rep(i, n-1){
		g = __gcd(g, a[i+1]);
	}

	if(g==1){
		cout << "setwise coprime" << endl;
		return 0;		
	}

	cout << "not coprime" << endl;
	return 0;		
}