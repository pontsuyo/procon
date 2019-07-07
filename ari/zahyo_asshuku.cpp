#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 500

int W, h, n;
int x1[MAX_N], x2[MAX_N], Y1[MAX_N], y2[MAX_N];

// 塗りつぶし用
bool fld[MAX_N * 6][MAX_N * 6];

// x1, x2 を座標圧縮し，座標圧縮した際の幅を返す．
int compress(int *x1, int *x2, int w){

// これでもいける
// int compress(int x1[], int x2[], int w){ 
    vector<int> xs;

    for(int i=0; i<n; ++i){
        for (int d = -1; d<=1; ++d){
            int tx1 = x1[i] + d, tx2 = x2[i] + d;
            if(1 <= tx1 && tx1 <= w) xs.push_back(tx1);
            if(1 <= tx2 && tx2 <= w) xs.push_back(tx2);
        }
    }
    sort(xs.begin(), xs.end());
    xs.erase(unique(xs.begin(), xs.end()), xs.end());

    for(int i=0; i<n; ++i){
        x1[i] = find(xs.begin(), xs.end(), x1[i]) - xs.begin();
        x2[i] = find(xs.begin(), xs.end(), x2[i]) - xs.begin();
    }

    return xs.size();
}

void solve(){
    W = compress(x1, x2, W);
    h = compress(Y1, y2, h);

    // rep(i, MAX_N){
    //     cout << x1[i] << " ";
    // }
    // cout << endl;

    memset(fld, 0, sizeof(fld));
    for(int i=0; i<n; ++i){
        for(int y=Y1[i]; y <= y2[i]; ++y){
            for(int x = x1[i]; x<= x2[i]; x++){
                fld[y][x] = true;
            }
        }
    }

    int ans = 0;
    for(int y=0; y<h; ++y){
        for(int x=0; x<W; ++x){
            if(fld[y][x]) continue;
            ++ans;

            // 幅優先探索
            queue<pair<int, int> >que;
            que.push(make_pair(x, y));

            int dx[4] = {0, 1, 0, -1};
            int dy[4] = {1, 0, -1, 0};

            while(!que.empty()){
                int sx = que.front().first, sy = que.front().second;
                que.pop();

                for(int i=0; i<4; ++i){
                    int tx = sx + dx[i], ty = sy + dy[i];
                    if(tx<0 || W <= tx || ty<0 || h <= ty) continue;
                    if(fld[ty][tx]) continue;
                    que.push(make_pair(tx, ty));
                    fld[ty][tx] = true;
                }
            }
        }
    }
    printf("%d\n", ans);
}


int main(){
    cin >> W >> h >> n;
    rep(i, n){
        cin >> x1[i];
    }
    rep(i, n){
        cin >> x2[i];
    }
    rep(i, n){
        cin >> Y1[i];
    }
    rep(i, n){
        cin >> y2[i];
    }
    solve();
    return 0;
}