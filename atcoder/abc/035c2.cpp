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
    vector<int> v(2000000);
    rep(i, q){
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        v[l]+=1;
        v[r+1]-=1;
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += v[i];
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