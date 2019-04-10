#include <bits/stdc++.h>
using namespace std;
// #define ll long long
#define rep(i,n) for(long long i=0;i<n;i++)

int main(){
    long long n;
    cin >> n;
    
    vector <long long> a(n,0);
    vector <long long> b(n,0);
    vector <long long> delta(n,0);

    long long cnt=0;
    long long sum = 0;
    priority_queue <long long, vector<long long>, less<long long>> que;

    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        cin >> b[i];
        delta[i] = a[i]-b[i];
        if(delta[i]>0){
            que.push(delta[i]);
        }else if(delta[i]<0){
            sum += delta[i];
            cnt++;
        }
    }

    long long delta_sum;
    delta_sum = accumulate(delta.begin(), delta.end(), 0);
    // cout << delta_sum << endl;
    // if(delta_sum<0){
    //     cout << -1 << endl;
    //     return 0;
    // }

    while(sum<0 && !que.empty()){
        long long tmp = que.top();
        sum += tmp;
        que.pop();
        cnt++;
    }
    if(sum<0){
        cout << -1 << endl;
    }else{
        cout << cnt << endl;
    }
    return 0;
}