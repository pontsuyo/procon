#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> l;
    priority_queue<int, vector<int>> r;

    int li=0, ri=9;
    string s;
    cin >> s;

    vector<int> ans(10, 0);
    for (int i = 0; i < s.size(); i++){
        if(li<=ri){
            if(s[i]=='L'){
                if(l.size()==0){
                    ans[li]=1;
                    li++;
                }else{
                    ans[l.top()]=1;
                    l.pop();
                }
            }else if(s[i]=='R'){
                if(r.size()==0){
                    ans[ri]=1;
                    ri--;
                }else{
                    ans[r.top()]=1;
                    r.pop();
                }
            }else{
                int num = s[i]-'0';
                if(num<=li){
                    l.push(num);
                }else{
                    r.push(num);
                }
                ans[num] = 0;
            }            
        }else{
            if(s[i]=='L'){
                if(l.size()==0){
                    ans[li]=1;
                    li++;
                }else{
                    ans[l.top()]=1;
                    l.pop();
                    r.pop();
                }
            }else if(s[i]=='R'){
                if(r.size()==0){
                    ans[ri]=1;
                    ri--;
                }else{
                    ans[r.top()]=1;
                    r.pop();
                    l.pop();
                }
            }else{
                int num = s[i]-'0';
                l.push(num);
                r.push(num);
                ans[num] = 0;
            }
            rep(i, 10){
                cout << ans[i];
            }
            cout << endl;
        }
    }

    rep(i, 10){
        cout << ans[i];
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}