#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 1000000000

int main(){
    int n, m;
    cin >> n >> m;

    // rep(i,n){
    //     rep(j, m){
    //         cin >> tmp;
    //     }
    // }

    vector< map<int, int>> mapa(n+m-1);
    vector< map<int, int>> mapb(n+m-1);

    int tmp;
    rep(i, n){
        rep(j, m){
            cin >> tmp;
            mapa[i+j][tmp]++;
        }
    }
    
    rep(i, n){
        rep(j, m){
            cin >> tmp;
            mapb[i+j][tmp]++;
        }
    }

    rep(i, mapa.size()){
        if(mapa[i] != mapb[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}