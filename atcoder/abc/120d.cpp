#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)


class UnionFind{
    public:
    vector<int> Parent;

    UnionFind(int N){
        Parent = vector <int> (N, -1);
    }

    int root(int A){
        if(Parent[A]<0) return A;
        return Parent[A] = root(Parent[A]);
    }
    int size(int A){
        return -Parent[root(A)];
    }

    bool connect(int A, int B){
        A = root(A);
        B = root(B);
        if(A==B){
            return false;
        }
        if(size(A) < size(B)) swap(A, B);

        Parent[A] += Parent[B];
        Parent[B] = A;
        return true;
    }
};

int main(){
    int N, M;
    cin >> N >> M;
    int A[M], B[M];
    rep(i, M){
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }

    vector<ll> ans(M);
    ans[M-1] = (ll) N*(N-1)/2;

    UnionFind Uni(N);

    for(int i = M-1;i>=1;i--){
        // 繋がってなかったのが繋がった場合
        if(Uni.root(A[i]) != Uni.root(B[i])){
            ans[i-1] = ans[i] - (ll) Uni.size(A[i]) * Uni.size(B[i]);
            Uni.connect(A[i], B[i]);
        }
        else ans[i-1] = ans[i];

    }
    rep(i, M){
        cout << ans[i] << endl;
    }
    return 0;
}