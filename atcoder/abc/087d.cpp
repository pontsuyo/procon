#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, m;
    cin >> n >> m;

    vector<tuple<int, int, int, int, int>> q(m);
    rep(i, m){
        int l, r, d;
        cin >> l >> r >> d;
        --l;
        --r;
        q[i] = tie(min(l, r), max(l, r), l, r, d);
    }

    sort(q.begin(), q.end());

    vector<int> x(n, INF);

    rep(i, m){
        int l, r, d;
        tie(ignore, ignore, l, r, d) = q[i];
        
        if(x[l]!=INF && x[r]!=INF){
            if(x[r]-x[l]!=d){
                cout << "No" << endl;
                return 0;
            }
        }else if(x[l]==INF && x[r]==INF){
            x[l] = 0;
            x[r] = d;
        }else if(x[l]==INF){
            x[l] = x[r]-d;
        }else if(x[r]==INF){
            x[r] = x[l]+d;
        }
    }

    int MAX=0, MIN = INF;
    rep(i, n){
        if(x[i]==INF) continue;
        MAX = max(MAX, x[i]);
        MIN = min(MIN, x[i]);
    }

    if(MAX-MIN<=1000000000){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}