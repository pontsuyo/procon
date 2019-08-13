#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n, k;
    cin >> n >> k;

    string s[n];
    rep(i, n){
        cin >> s[i];
    }


    vector<int> row(n,0), col(n, 0);
    rep(i, n){
        rep(j, n)[
            if(s[i][j]=='B'){
                row[i]++;
                col[j]++;
            }
        ]
    }

    vector<int> r_ = row, c_=col;
    rep(i, k){
        rep(j, k){
            if(s[i][j]=='B'){
                r_[i]--;
                c_[j]--;
            }
        }
    }
    

    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}