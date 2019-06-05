#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int l;
    cin >> l;
    stack<int> s;

    ll ans[100000] = {};
    // ll so = 0;
    int id = 0;
    rep(i, l){
        string tmp;
        cin >> tmp;
        string op = tmp.substr(0, 1);
        if(op=="a"){
            // so++;
            ans[id]++;
            // if(s.size()==id-1){
            //     // ans += so;
            //     // so = 0;
            //     ans[id-1] += ans[id];
            //     ans[id] = 0; 
            // }
        }else if(op=="f"){
            int f;
            cin >> f;
            s.push(f);
            id++;
            ans[id] = 0;
        }else if(op=="e"){
            int times = s.top();
            s.pop();
            ans[id-1] += ans[id] * times;
            id--;
            // if(s.size()==0){
            //     ans[id-1] += ans[id];
            //     ans[id] = 0; 
            // }
        }
        // printf("%d\n", so);
        if(ans[id]>(ll)pow(2, 32)-1){
            printf("OVERFLOW!!!\n");
            return 0;
        }
    }
    printf("%lld\n", ans[0]);
    return 0;
}