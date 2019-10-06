#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

bool seen[50*50];
vector<int> edges[50*50];

void dfs(int s, int p){
    seen[s] = true;
    for (auto v: edges[s]){
        if(v==p) continue;
        if(!seen[v]) dfs(v, s);
    }
}


int main(){
    int w, h;
    int di[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dj[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    while(true){
        cin >> w >> h;
        if(w==0 && h==0) break;
        int c[h][w];
        rep(i, h){
            rep(j, w){
                cin >> c[i][j];
                edges[w*i+j] = {};
            }
        }

        // 隣接リスト構築
        rep(i, h){
            rep(j, w){
                if(c[i][j]==1){
                    rep(k, 8){
                        int i_ = i+di[k];
                        int j_ = j+dj[k];
                        if(i_>=0 && i_<h && j_>=0 && j_<w && c[i_][j_]==1){
                            int idx = w * i_ + j_;
                            edges[w*i+j].emplace_back(idx);
                            // edges[idx].emplace_back(w*i+j);
                        }
                    }
                }
            }
        }

        rep(i, h){
            rep(j, w){
                seen[w*i+j] = false;
            }
        }

        // ここからdfs実行
        int cnt = 0;
        rep(i, h){
            rep(j, w){
                int num = w*i+j;
                if(c[i][j]==1 && !seen[num]){
                    dfs(num, -1);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    // printf("%d\n", N);
    return 0;
}