#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n, m;
    cin >> n >> m;
    // vector<int> a(n), b(n);
    priority_queue<P, vector<P>> p;
    rep(i, n){
        int a_, b_;
        cin >> a_ >> b_;
        p.push(make_pair(b_, -a_));
    }

    vector<int> val(100001, 0);
    ll ans = 0;
    int i=m-1;
    while(p.size()>0){
        for (int j = m-(-p.top().second); j>=0 ; j--)
        {
            if(val[j]==0){
                val[j] = p.top().first;
                break;
            }
        }
        p.pop();
    }

    rep(i, val.size()-1){
        ans += val[i];
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}