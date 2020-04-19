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

int dp[50005];
const int SIZE = 1<<20;

int N,node[400010];
void init(int N_){
    N=1;
    while(N<N_)N*=2;
    for(int i=0;i<2*N-1;i++)node[i]=INF;
}
void update(int a,int x){
    a+=N-1;
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
    int n, m;
    int s[500005], t[500005];

    cin >> n >> m;
    rep(i, m){
        cin >> s[i] >> t[i];
    }
    init(n);
    fill(dp, dp+N+1, INF);
    dp[1]=0;
    update(0, 0);
    for (int i = 0; i < m; i++) {
        printf("%d %d\n", dp[t[i]], query(s[i]-1, t[i])+1);
        int v = min(dp[t[i]], query(s[i]-1, t[i])+1);
        dp[t[i]] = v;
        update(t[i]-1, v);
        // cout << dp[t[i]] << endl;
        rep(i, 2*N+1){
            cout << node[i] << " ";
        }
        cout << endl;
    }
    printf("%d\n", dp[N]);
    return 0;
}