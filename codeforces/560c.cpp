#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    vector <char> c(n);
    for(int i=0;i<n;i++){
        cin >> c[i];
    }

    vector <char> out;
    int i=1;
    int cnt = 0;
    while(i<n){
        if(c[i]!=c[i-1]){
            out.emplace_back(c[i-1]);
            out.emplace_back(c[i]);
            i += 2;
            cnt+=2;
        }else{
            i++;
        }
    }
    cout << n-cnt << endl;
    for(int j=0;j<out.size();j++){
        cout << out[j];
    }
    cout << endl;

}