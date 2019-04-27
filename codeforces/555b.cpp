#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    int a;
    int f[9];
    cin >> n >> a;
    rep(i, 9){
        cin >> f[i];
    }
    
    int d[n];
    rep(i, n){
        int tmp = a/(pow(10,n-1-i));
        d[i] = tmp%10;
    }

    rep(i, n){
        cout << d[i] << " ";
    }

    bool once = false;
    int cd = 100000000;
    rep(i, n){
        if(!once){
            if(f[d[i]-1]>d[i]){
                d[i] = f[d[i]-1];
                once = true;
                cd = i;
            }
        }else{
            if(f[d[i]-1]>=d[i] && i-cd == 1){
                d[i] = f[d[i]-1];
                cd = i;
            }else{
                break;
            }
        }
    }

    int out=0;
    rep(i, n){
        out += d[i] * pow(10,n-i-1);
    }
    cout << out << endl;
    return 0;
}