#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_V 10000

// vector <int> G[MAX_V];

struct edge {int to, cost;};
vector <edge> G[MAX_V];

int main(){
    int V, E;
    scanf("%d%d", &V, &E);
    for(int i=0;i < E;i++){
        // sからtへの辺を張る
        int s, t;
        scanf("%d%d", &s, &t);
        G[s].push_back(t);
        // G[t].push_back(s); 無向グラフの場合はさらにtにsへの辺を張る
    }
    /*
        グラフの操作
    */
   
    return 0;
}