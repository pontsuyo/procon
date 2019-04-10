#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    ll n, k;
    cin >> n >> k;
    vector <ll> t(n,0);
    vector <ll> d(n,0);
    
    rep(i, n){
        cin >> t[i] >> d[i];
    }

    ll sum=0;
    set <int> s;
    ll tmp;
    // vector <ll> dd(n,0);
    ll MAX = 0;
    int ind;
    rep(i, k){
        if(i==0){
            size_t max = distance(d.begin(), max_element(d.begin(), d.end()));
            sum += d[max];
            s.insert(t[max]);
            d[max] = -1e9;
        }else{
            rep(j,n){
                if(s.count(t[j])>0){
                    tmp = d[j] - (k-i+s.size())*2 + 1;
                }else{
                    tmp = d[j];
                }
                if(tmp>MAX){
                    MAX = tmp;
                    ind = j;
                }
            }
            sum += d[ind];
            s.insert(t[ind]);
            d[ind] = -1e9;
            MAX = 0;
        }
            // cout << sum+ s.size()*s.size() << endl;
    }
    cout << sum+ s.size()*s.size() << endl;
    return 0;
}