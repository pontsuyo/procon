#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N, M;
    cin >> N >> M;
    vector<string> A(N);
    vector<string> B(M);
    rep(i, N){
        cin >> A[i];
    }
    rep(i, M){
        cin >> B[i];
    }

    rep(i, N-M+1){
        rep(j, N-M+1){
            bool flag = true;
            rep(k, M){
                rep(l, M){
                    if(A[i+k][j+l]!=B[k][l]){
                        flag=false;
                        break;
                    }
                }
            }
            if(flag){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}