#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int q;
    cin >> q;
    rep(j, q){
        int n; cin >> n;
        vector <int> a(n, 0);
        rep(i, n){
            cin >> a[i];
        }
        a.emplace_back(200005);

        sort(a.begin(), a.end());
        
        vector <int> v;
        int cnt = 1;
        rep(i, n){
            if(a[i]==a[i+1]){
                cnt++;
            }else{
                v.emplace_back(cnt);
                cnt = 1;
            }
        }

        v.emplace_back(200005);
        sort(v.begin(), v.end(), greater<int>());
        
        vector<pair<int, int>> p;
        rep(i, v.size()-1){
            if(i==0) continue;
            if(v[i]==v[i+1]){
                cnt++;
            }else{
                p.emplace_back(make_pair(v[i], cnt));
                cnt = 1;
            }
        }
        p.emplace_back(make_pair(v[v.size()-1], cnt));

        p.emplace_back(make_pair(0, 0));

        // printf("query %d\n",j);
        // rep(i, p.size()){
        //     printf("%d %d\n", p[i].first, p[i].second);
        // }

        ll sum = 0;
        // printf("%d\n", p.size());
        rep(i, p.size()-1){
            ll tmp = p[i].first - p[i].second+1;
            ll gap = p[i].first - p[i+1].first;
            
            if(gap > p[i].second){
                sum += (p[i].first + tmp)*p[i].second/2;
            }else{
                sum += (p[i].first + (p[i+1].first + 1)) * gap /2;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}