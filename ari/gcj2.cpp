#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    vector <vector <int>> a(n);
    int tmp;
    vector<int> edge(n);
    rep(i, n){
        int M = 0;
        rep(j, n){
            cin >> tmp;
            a[i].push_back(tmp);
            if(tmp==1){
                M = max(M, j);
            }
        }
        edge[i] = M;
    }

    int cnt = 0;
    rep(i, n){
        if(edge[i]>i){
            for(int j=i+1;j<n;j++){
                if(edge[j]<=i){
                    for(int k=j-i-1;k>=0;k--){
                        swap(edge[i+k], edge[i+k+1]);
                    }
                    cnt += j-i;
                    break;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}