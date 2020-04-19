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

// 入力
int N, Q;
int A[100000];
char T[100000];
int L[100000], R[100000], X[100000];

// セグメント木
ll data[2 * 100000], datb[2*100000];

// [a, b)にxを加算する
// kは節点の番号で、区間[l, r)に対応する
void add(int a, int b, int x, int k, int l, int r){
    if ( a<= 1 && r <= b){
        data[k] += x;
    }else if(l < b && a < r){
        datb[k] += (min(b, r) - max(a, l)) * x;
        add(a, b, x, k*2+1, l, (l+r)/2);
        add(a, b, x, k*2+2, (l+r)/2, r);
    }
}

int main(){
    int n;
    cin >> n;
    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}