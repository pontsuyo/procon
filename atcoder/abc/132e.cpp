//sunuke
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

const int INF = 1001001001;
int dist[100005][3];

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> to(N);
    rep(i, M){
        int ut, vt;
        cin >> ut >> vt;
        --ut; --vt;
        to[ut].emplace_back(vt);
    }
    int S, T;
    cin >> S >> T;
    S--;
    T--;
    
    rep(i, N){
        rep(j, 3){
            dist[i][j] = INF;
        }
    }

    queue<P> q;
    q.push(P(S, 0));
    dist[S][0] = 0;
    while(!q.empty()){
        int v = q.front().first;
        int l = q.front().second;
        q.pop();
        for(int u:to[v]){
            int nl = (l+1)%3;
            if (dist[u][nl] != INF) continue;
            dist[u][nl] = dist[v][l]+1;
            q.push(P(u, nl));
        }
    }
    int ans = dist[T][0];
    if (ans == INF) ans = -1;
    else ans /= 3;
    cout << ans << endl;
    return 0;
}