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
#define MAX_N 150000


vector<int> edges[MAX_N];
vector<int> roots[MAX_N];
bool already[MAX_N];

// vector<int> dfs(int s, vector<int> root){
// void dfs(int s, vector<int> root){

//     for(auto v: edges[s]){
//         vector<int> r1 = root;
//         if(!already[v]){
//             already[v] = true;
//             r1.emplace_back(v);
//             roots[v] = r1;
//             dfs(v, r1);
//         }
//     }
    
//     // return root;
// }

// int d[MAX_N][MAX_M];

// int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
// 
void bfs(){
    queue <pair<int, vector<int>>> que;

    vector<int> v0;
    v0.emplace_back(0);

    for(auto v: edges[0]){
        que.push(make_pair(v, v0));
    }

    while (que.size()){
        pair<int, vector<int>> p=que.front(); que.pop();
        // if(p.first == gx && p.second== gy) break;

        // for(int i=0; i<4; i++){
        //     int nx = p.first + dx[i], ny = p.second + dy[i];

        //     if(0 <= nx && nx < N && 0 <= ny && ny < M && maze[nx][ny] != '#' && d[nx][ny]==INF){
        //         que.push(P(nx, ny));
        //         d[nx][ny] = d[p.first][p.second] +1;
        //     }
        // }

        for(auto v: edges[p.first]){
            vector<int> r1 = p.second;
            if(!already[v]){
                already[v] = true;
                r1.emplace_back(v);
                roots[v] = r1;
                que.push(make_pair(v, r1));
            }
        }
    }

    
    // return d[gx][gy];
}


int main(){
    int n; cin >> n;
    rep(i, n){
        int p;
        cin >> p;
        if(p==-1){
            continue;
        }else{
            edges[i].emplace_back(p-1);
            edges[p-1].emplace_back(i);
        }
    }
    already[0] = true;
    
    bfs();

    // rep(i, n){
    //     printf("%d\n", i);
    //     rep(j, roots[i].size()){
    //         printf("%d ", roots[i][j]);
    //     }
    //     printf("\n");
    // }

    int q;
    cin >> q;
    rep(i, q){
        int a, b;
        cin >> a >> b;
        --a;--b;
        int id = lower_bound(roots[a].begin(), roots[a].end(), b) - roots[a].begin(); 
        if(roots[a][id]==b){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }


    return 0;
}