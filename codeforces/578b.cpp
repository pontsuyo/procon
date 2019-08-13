#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int t;
    cin >> t;
    rep(i, t){
        int n, m, k;
        cin >> n>> m>> k;
        vector<int> h(n);
        rep(j, n){
            cin >> h[j];
        }

        bool flag = true;
        for (int j= 0; j <= n-2; j++){
            int bs = (h[j+1]-h[j])-k;
            if(bs > m){
                flag = false;
                break;
            }

            if(-bs > h[j]){
                bs = -h[j];
            }

            m -= bs;   
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    // printf("%d\n", N);
    return 0;
}