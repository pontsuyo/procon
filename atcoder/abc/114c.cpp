#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    int k = 0;
    int cnt=0;
    string c[3] = {"3", "5", "7"};
    bool flag = false;

    rep(keta,9){
        rep(i,pow(3, (keta+1))){
            string s = "";
            bool count357[3] = {false};
            int j = i;
            while(s.size()<keta+1){
                s = c[j%3] + s;
                count357[j%3] = true;
                j /= 3;
            }
            if(stoi(s)>n){
                flag = true;
            }
            if(flag) break;

            if(count357[0]==true && count357[1]==true && count357[2]==true){
                cnt++;
            }

        }
        if(flag) break;
    }
    cout << cnt << endl;
    return 0;
}