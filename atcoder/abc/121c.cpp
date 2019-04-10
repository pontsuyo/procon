#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n>> m;
    // int a[n], b[n];

    ll sum = 0;
    vector <pair<ll, ll>> pair(n);

    rep(i, n){
        // cin >> a[i] >> b[i];
        cin >> pair[i].first >> pair[i].second;
    }

    sort(pair.begin(), pair.end());

    rep(i, n){
        if(m > pair[i].second){
            sum += pair[i].first * pair[i].second;
            m -= pair[i].second;
        }else{
            sum += pair[i].first * m;
            // m -= pair[i].second;
            break;
        }
    }
    cout << sum << endl;
    
    return 0;
}