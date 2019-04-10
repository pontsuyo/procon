#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 10000

int L, P, N;
int A[MAX_N+1], B[MAX_N+1];

void solve(){
    // 簡単のためゴールをガソリンスタンドに追加
    A[N] = L;
    B[N] = 0;
    N++;

    // ガソリンスタンドを管理する順位キュー
    priority_queue<int> que;

    // ans: 補給回数, pos: 今いる場所, tank: タンクのガソリンの量
    int ans = 0, pos = 0, tank = P;

    for(int i=0; i< N; i++){
        // 次に進む距離
        int d = A[i] - pos;

        // 十分な量になるまでガソリンを補給
        while(tank -d <0){
            if(que.empty()){
                puts("-1");
                return;
            }
            tank += que.top();
            que.pop();
            ans++;
        }

        tank -= d;
        pos = A[i];
        que.push(B[i]);
    }
    printf("%d\n", ans);
}

int main(){
    cin >> N >> L >> P;
    rep(i, N){
        cin >> A[i];
    }
    rep(i, N){
        cin >> B[i];
    }
    solve();
    return 0;
}