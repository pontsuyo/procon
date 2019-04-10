#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)


struct UnionFind{
    vector<int> par;
    UnionFind(int N): par(N){
        rep(i, N){
            par[i] = i;
        }
    }
    int root(int x){
        if(par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y){
        int rx = root(x);
        int ry = root(y);
        if(rx==ry) return;
        par[rx] = ry;
        
    }

    bool same(int x, int y){
        int rx = root(x);
        int ry = root(y);
        return rx==ry;

    }
};


int main(){
    int h, w;
    cin >> h >> w;
    UnionFind tree(h*w);
    
    int a[h][w];
    bool exist5 = false;
    bool all0 = true;
    rep(i, h){
        rep(j, w){
            cin >> a[i][j];
            if(a[i][j]==5){
                exist5 = true;
            }
            if(a[i][j]!=0){
                all0 = false;
            }
        }
    }
    if(all0){
        cout << "Yes 0" << endl;
        return 0;
    }
    if(!exist5){
        cout << "No" << endl;
        return 0;
    }

    rep(i, h){
        rep(j, w){
            if(i!=0 && a[i-1][j]!=5 && a[i][j]!=5){
                tree.unite(w*i+j, w*(i-1)+j);
            }
            if(j!=0 && a[i][j-1]!=5 && a[i][j]!=5){
                tree.unite(w*i+j, w*i+j-1);
            }
            if(i!=0 && a[i-1][j]==5 && a[i][j]==5){
                tree.unite(w*i+j, w*(i-1)+j);
            }
            if(j!=0 && a[i][j-1]==5 && a[i][j]==5){
                tree.unite(w*i+j, w*i+j-1);
            }
        }
    }

    int maxs[10000] = {0};
    rep(i, h){
        rep(j, w){
            int setNum = tree.root(w*i+j);
            maxs[setNum] = max(a[i][j], maxs[setNum]);    
        }
    }
    int cnt = 0;
    rep(i, 10000){
        if(maxs[i]==9){
            cnt += 3;
        }else if(maxs[i]==8){
            cnt += 2;
        }else if(maxs[i]==7){
            cnt += 1;
        }else if(maxs[i]==6){
            cnt += 1;
        }
    }
    cout << "Yes " << cnt+1 << endl;
    return 0;
}