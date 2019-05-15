#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n ;
    cin >> n;

    if(n==0){
        printf("0\n");
        return 0;
    }

    string s_;
    cin >> s_;
    // printf("ok\n");
    vector<char> s;
    rep(i, s_.size()){
        s.emplace_back(s_[i]);
    }
    int cnt = 0;
    vector <char> c_end;
    
    while(true){
        bool flag = false;
        bool fl = true;
        vector <char> c;
        c.emplace_back(s[0]);    
        for(int i=1;i<s.size();i++){
            if((i%2==1 && s[i-1]==s[i]) && fl){
                cnt++;
                flag = true;
                fl = false;
            }else{
                c.emplace_back(s[i]);
            }
        }
    
        if(!flag){
            c_end = c;
            break;
        }else if(cnt==n || c.size()==1){
            printf("%d\n", s_.size());
            return 0;
        }else{
            s = c;
        }
    }
    // printf("%d\n", cnt);
    if((n-cnt)%2!=0){
        printf("%d\n", cnt+1);
        rep(i, c_end.size()-1){
            cout << c_end[i];
        }
        cout << endl;
    }else{
        printf("%d\n", cnt);
        rep(i, c_end.size()){
            cout << c_end[i];
        }
        cout << endl;
    }

    return 0;
}