#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // vector<int> v0, v1;
    // int ti=1;
    // for(int i=1;i<n;i++){
    //     if(s[i]!=s[i-1]){
    //         if(s[i]=='0'){
    //             v1.emplace_back(i-ti);   
    //         }else{
    //             v0.emplace_back(i-ti);
    //         }
    //         ti = i;
    //     }
    // }
    // if(ti!=n-1){
    //     if(s[n-1]=='0'){
    //         v0.emplace_back(n-1-ti);
    //     }else{
    //         v1.emplace_back(n-1-ti);
    //     }
    // }
    
    // if(s[0]=='0'){


    // }else{
    //     for (int i = 0; i < max(0, v0.size()-k+1) ; i++) {
    //         int sum = 0;
    //         rep(j, k){

    //         }
    //     }
        
    // }

    vector<int> v;
    if(s.size()==1){
        v = {1};
    } else {
        int ti=0;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                v.emplace_back(i-ti);
                ti = i;
            }
        }
        v.emplace_back(n-ti);
    }

    // rep(i, v.size()){
    //     cout << v[i] << " ";
    // }


    vector<int> sum(v.size()+1, 0);
    sum[0] = 0;
    rep(i, v.size()){
        sum[i+1] = sum[i] + v[i];
    }
    
    rep(i, sum.size()){
        cout << sum[i] << " ";
    }

    int ans = 0;
    if(s[0]=='0'){
        int num = v.size()/2 + v.size()%2;
        if(num < k){
            ans = n;
        } else{
            rep(i, num-k+1){
                ans = max(ans, sum[2*i+1 + 2*(k-1)]-sum[2*i+1]);
            }
        }
    } else{
        int num = v.size()/2;
        if(num < k){
            ans = n;
        } else {
            rep(i, num-k+1){
                ans = max(ans, sum[2*(i+1) + 2*(k-1)]-sum[2*(i+1)]);
            }
        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}