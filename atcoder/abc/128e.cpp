#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, q;
    cin >> n >> q;
    int s[n], t[n], x[n];
    rep(i, n){
        cin >> s[i] >> t[i] >> x[i];
    }
    int d[q];
    rep(i, q){
        cin >> d[i];
    }

    rep(i, q){
        int s_[n], t_[n];
        rep(j, n){
            s_[j] = s[j]-d[i];
            t_[j] = t[j]-d[i];
        }
        
        int dis = 1000000001;
        int tmp = 1000000001;
        bool f = true;
        rep(j, n){
            if(s_[j]<=x[j] && t_[j]>x[j]){
                dis = min(dis, x[j]);
                f = false;
            }
        }
        if(f){
            dis = -1;
        }
        printf("%d\n", dis);
    }
    return 0;
}