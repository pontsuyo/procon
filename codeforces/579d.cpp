#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    string s, t;
    cin >> s >> t;

    int l=0, r=0;
    int ans = 0;
    while(l<s.size() && r<=s.size()){        
        bool flag = false;
        int j=0;
        for (int i = 0; i < s.size()-(r-l); i++){
            if(i < l){
                if(s[i]==t[j]){
                    j++;
                }
            }else{
                if(s[i+r-l]==t[j]){
                    j++;
                }
            }
        }
        if(j==t.size()){
            flag = true;
        }

        if(flag){
            // printf("%d %d\n", l, r);
            ans = max(ans, r-l);
            r++;
        }else{
            l++;
            r=l+ans;
        }
    }    

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}