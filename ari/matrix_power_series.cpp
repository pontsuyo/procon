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

int n, k, M;
mat A(2, vec(2));

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

void solve(){
    mat B(n*2, vec(n*2));
    for (int i = 0; i < n; i++){
        // 左上ブロック
        for (int j = 0; j < n; j++){
            B[i][j] = A[i][j];
        }

        // 左下・右下ブロック
        B[n+i][i] = B[n+i][n+i] = 1;
    }
    B = pow(B, k+1); // I+A+A^2+...+A^k

    // Bの左下ブロックが出力するべきS_k
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a = B[n+i][j] % M;
            if(i==j) a = (a+M-1)%M;
            printf("%d%c", a, j+1==n?'\n':' ');
        }
    }
}


int main(){
    cin >> n >> k >> M;
    rep(i, n) rep(j, n) cin >> A[i][j];
    solve();
    // printf("%d\n", N);
    return 0;
}