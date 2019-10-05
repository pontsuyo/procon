#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, k, q;
    cin >> n >> k >> q;
    
    vector<int> s(n, k-q);
    rep(i, q){
        int a;cin >> a;
        s[a-1]++;
    }

    rep(i, n){
        if(s[i]<=0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}