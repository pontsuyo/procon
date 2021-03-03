#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    int h, w;
    cin >> h >> w;
    string s[h];
    rep(i, h) cin >> s[i];

    vector<vector<int>> dist(h, vector<int>(w, INF));

    queue<P> q;

    map<char, stack<P>>m;
    int ss, gg;
    rep(hi, h) rep(wi, w){
        // if(s[hi][wi]=='#') continue;
        if(s[hi][wi]=='S'){
            q.emplace(hi, wi);
            dist[hi][wi] = 0;
        }   
    }

    vector<vector<P>> warps(256);
    rep(i, h) rep(j, w) warps[s[i][j]].emplace_back(i, j);
    
    int di[] = {-1, 0, 1, 0};
    int dj[] = {0, 1, 0, -1};

    while(!q.empty()){
        // int i = q.front().first;
        // int j = q.front().second;
		auto [i, j] = q.front();
        q.pop();

        if(s[i][j] == 'G'){
            cout << dist[i][j] << endl;
            return 0;
        }

        rep(v, 4){
            int ni = i+di[v];
            int nj = j+dj[v];
            if(ni>=0 && ni<h && nj>=0 && nj<w && s[ni][nj]!='#' && dist[ni][nj]==INF){
                dist[ni][nj] = dist[i][j]+1;
                q.emplace(ni, nj);
            }
        }

        if(islower(s[i][j])){
            for(auto p: warps[s[i][j]]){
                int ni = p.first;
                int nj = p.second;
                if(dist[ni][nj]!=INF)continue;
                dist[ni][nj] = dist[i][j]+1;
                q.emplace(ni, nj);
            }
            warps[s[i][j]] = vector<P>();
        }
    }

    cout << -1 << endl;
    return 0;
}