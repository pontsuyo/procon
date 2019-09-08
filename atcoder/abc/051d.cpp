#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

#define MAX_E 1000
#define MAX_V 1000

int V, E;

struct edge{int from, to, cost;};

edge es[MAX_E];
int d[MAX_V];

int S;

void shortest_path(int s){
    rep(i, V){
        d[i] = INF;
    }
    d[s] = 0;
    while(true){
        bool update = false;
        rep(i, E){
            edge e = es[i];
            if(d[e.from] != INF){
                d[e.to] = min(d[e.to], d[e.from]+e.cost);
                update = true;
            }
        }

        // 全ての辺でループした時に最短距離更新を行う頂点が存在しなかった場合，break
        if(!update) break;
    }
}

int main(){
    cin >> V >> E;
    rep(i, E){
        cin >> es[i].from >> es[i].to >> es[i].cost;
    }
    cin >> S;
    shortest_path(S);
    
    cout << S << endl;
    rep(i, V){
        cout << d[i] << endl;
    }
    return 0;
}








int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m), b(m), a(m), 
    rep(i, m){
        cin >> a[i] >> b[i] >> c[i];
    }


    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}