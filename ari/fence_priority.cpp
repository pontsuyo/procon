#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 10000

// 入力
int N, L[MAX_N];

void solve(){
    ll ans=0;

    // 順位キューを用意（小さい順から出てくるようにしています）
    priority_queue <int, vector<int>, greater<int> > que;
    for(int i=0;i<N; i++){
        que.push(L[i]);
    }

    // 板が一枚になるまで適用
    while(que.size()>1){
        // 一番短い板，次に短い板を取り出す
        int l1, l2;
        l1 = que.top();
        que.pop();
        l2 = que.top();
        que.pop();

        // それらを併合
        ans += l1 + l2;
        que.push(l1+l2);
    }
    printf("%lld\n", ans);
}

int main(){
    cin >> N;
    rep(i, N){
        cin >> L[i];
    }
    solve();
    return 0;
}