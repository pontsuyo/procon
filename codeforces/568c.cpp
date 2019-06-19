#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int n, M;
    cin >> n >> M;
    vector<int> t(n);
    rep(i, n){
        cin >> t[i];
    }

    priority_queue<int> que, quetmp;
    int S = 0;
    vector<int> ans(n);
    rep(i, n){
        S += t[i];
        if(S<M){
            ans[i] = 0;
        }else{
            quetmp = que;
            int d = S-M;
            int dsum = 0;
            int cnt = 0;
            while(d > dsum){
                dsum += quetmp.top();
                cnt++;
                quetmp.pop();
            }
            ans[i] = cnt;
        }
        que.push(t[i]);
    }
    rep(i, n){
        cout << ans[i];
        if(i!=n-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }
    return 0;
}