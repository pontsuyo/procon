#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_V 1000

vector<int> G[MAX_V];
int V, E;

int color[MAX_V];

bool dfs(int v, int c){
    color[v] = c;
    for(int i=0;i<G[v].size();i++){
        if(color[G[v][i]] == c) return false;
        if (color[G[v][i]] == 0 && !dfs(G[v][i], -c)) return false;
    }
    return true;
}

void solve(){
    for(int i=0; i<V;i++){
        if(color[i]==0){
            if(!dfs(i,1)){
                printf("No\n");
                return;
            }
        }
    }
    printf("Yes\n");
}

int main(){
    scanf("%d %d", &V, &E);
    for(int i=0;i<E;i++){
        // sからtへの辺を張る
        int s, t;
        scanf("%d %d", &s, &t);
        G[s].push_back(t);
    }
    solve();
    return 0;
}