#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_V 1000

struct vertex{
    vector <vertex*> edge;
};

vertex G[MAX_V];

int main(){
    int V, E;
    scanf("%d %d", &V, &E);
    for(int i=0;i<E;i++){
        int s, t;
        scanf("%d %d", &s, &t);
        G[s].edge.push_back(&G[t]);
    }
    return 0;
}