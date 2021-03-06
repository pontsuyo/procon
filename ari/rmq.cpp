#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

const int SIZE = 1<<20;

int N,node[400010];
void init(int N_){
    while(N<N_)N*=2;
    for(int i=0;i<2*N-1;i++)node[i]=INF;
}
void update(int a,int x){
    a+=SIZE-1;
    node[a]=x;
    while(a>0){
        a=(a-1)/2;
        node[a]=min(node[2*N],node[2*N+1]);
    }
}
int query(int a,int b,int k=0,int l=0,int r=N){
    if(b<=l||r<=a)return INF;
    if(a<=l&&r<=b)return node[k];
    int vl=query(a,b,2*k+1,l,(l+r)/2);
    int vr=query(a,b,2*k+2,(l+r)/2,r);
    return min(vl,vr);
}

int main(){
    int n;
    cin >> n;
    
    

    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}