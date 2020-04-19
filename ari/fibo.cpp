#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18


typedef vector<int> vec;
typedef vector<vec> mat;

const int M = 10000;

// A*Bの計算
mat mul(mat &A, mat &B) {
    mat C(A.size(), vec(B[0].size()));
    // i, k, jの順番変えてもいい？
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B[0].size(); j++){
            for (int k = 0; k < B.size(); k++) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) %M;
            }
        }
    }
    return C;
}

// A^nの計算
mat pow(mat A, ll n){
    mat B(A.size(), vec(A.size()));
    // Bの初期値は単位行列
    for (int i = 0; i < A.size(); i++) {
        B[i][i]=1;
    }

    while(n>0){
        if(n&1) B = mul(B, A);
        A = mul(A, A);
        n >>= 1;
    }
    return B;
}

ll n;
void solve(){
    mat A(2, vec(2));
    A[0][0] = 1; A[0][1] = 1;
    A[1][0] = 1; A[1][1] = 0;
    A = pow(A, n);
    printf("%d\n", A[1][0]);
}

int main(){
    cin >> n;
    solve();
    return 0;
}