#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)


int h, w;
char c[501][501];
int si, sj;
int gi, gj;
bool reached[501][501] ={false};

void search(int x, int y){
    if(x<0 || h <= x || y<0 || w <= y || c[x][y] =='#') return;
    if( reached[x][y]) return;

    reached[x][y] = true;

    search(x+1, y);
    search(x-1, y);
    search(x, y-1);
    search(x, y+1);
}

int main(){
    cin >> h >> w;
    rep(i,h){
        rep(j,w){
            cin >> c[i][j];
            if(c[i][j]=='s'){
                si = i; sj=j;
            }else if(c[i][j]=='g'){
                gi = i; gj=j;
            }
        }
    }

    search(si,sj);

    if(reached[gi][gj]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}