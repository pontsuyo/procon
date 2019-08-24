#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n, q;
    cin >> n >> q;
    map<int, int> l, r;
    rep(i, q){
        int l_, r_;
        cin >> l_ >> r_;
        l_--;
        r_--;
        l[l_]++;
        r[r_]++;
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if(i==0){
            cnt = l[i];
        }else{
            cnt += l[i]-r[i-1];
        }
        
        if(cnt%2==0){
            cout << "0";
        }else{
            cout << "1";
        }
    }    
    cout << endl;
    // printf("%d\n", N);
    return 0;
}