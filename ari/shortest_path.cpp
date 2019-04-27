#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_E 1000
#define MAX_V 1000
#define INF 1e9

struct edge {int from, to, cost; };

edge es[MAX_E];

int d[MAX_V];
int V, E;

void shortest_path(int s){
    for (int i=0; i<V; i++) d[i] = INF;
    d[s] = 0;
    while(true){
        bool update = false;
        for(int i=0; i<E; i++){
            edge e = es[i];
            if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
                d[e.to] = d[e.from] + e.cost;
                update = true;
            }
        }
        if (!update) break;
    }
}


int main(){
    return 0;
}