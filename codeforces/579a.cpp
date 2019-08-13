#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int q, n;
    cin >> q;
    rep(i, q){
        cin >> n;
        int a[n];
        int st;
        rep(j, n){
            cin >> a[j];
            if(a[j]==1){
                st = j;
            }
        }
        int ii = 1;
        bool flag = true;
        for (int j = st; j < n; j++)
        {
            if(a[j]!=ii){
                flag = false;
                break;
            }
            ii++;
        }
        for (int j = 0; j < st; j++)
        {
            if(a[j]!=ii){
                flag = false;
                break;
            }
            ii++;
        }

        ii = 1;
        bool flag1 = true;
        for (int j = st; j >= 0; j--)
        {
            if(a[j]!=ii){
                flag1 = false;
                break;
            }
            ii++;
        }
        for (int j = n-1; j > st; j--)
        {
            if(a[j]!=ii){
                flag1 = false;
                break;
            }
            ii++;
        }
        if(flag || flag1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}