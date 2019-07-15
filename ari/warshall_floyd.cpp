#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_V 100005

int d[MAX_V][MAX_V];
int V;

void warshall_floyd() {
    for(int k=0; k<V; k++)
        for(int i=0; i<V; i++)
            for(int j=0; j<V; j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
}


int main(){
    return 0;
}