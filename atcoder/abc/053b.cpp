#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string s;
    cin >> s;
    // int a=s.size(), z=0;
    // bool f = false;
    // rep(i, s.size()){
    //     if(!f && s[i]=='A'){
    //         a = i;
    //         f = true;
    //     }
    //     if(s[i]=='Z'){
    //         z = max(z, i);
    //     }
    // }
    // printf("%d\n", z-a+1);

    cout << s.rfind("Z") - s.find("A") +1 << endl; 
    return 0;
}