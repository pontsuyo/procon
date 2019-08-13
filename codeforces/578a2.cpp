#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;

    int MIN=0, MAX=9;
    string s;
    cin >> s;

    vector<int> ans(10, 0);
    for (int i = 0; i < s.size(); i++){
        // cout << MIN << MAX << endl;
        if(s[i]=='L'){
            ans[MIN] = 1;
        }else if(s[i]=='R'){
            ans[MAX] = 1;
        }else{
            int num = s[i]-'0';
            ans[num] = 0;
        }
        MIN = 9;
        MAX = 0;
        rep(i, 10){
            if(ans[i]==0){
                MIN = min(MIN, i);
                MAX = max(MAX, i);
            }
        }
        //     rep(i, 10){
        // cout << ans[i];
        // }
        // cout << endl;

    }

    rep(i, 10){
        cout << ans[i];
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}