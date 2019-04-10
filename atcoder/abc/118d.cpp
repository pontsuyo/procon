#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n >> m;
    int a[m];

    map<int, int> mp;
    mp[1] = 2;
    mp[2] = 5;
    mp[3] = 5;
    mp[4] = 4;
    mp[5] = 5;
    mp[6] = 6;
    mp[7] = 3;
    mp[8] = 7;
    mp[9] = 6;

    vector<int> appear;
    rep(i, m){
        cin >> a[i];
    }

    sort(a, a+m, greater<>());

    rep(i, m){
        appear.emplace_back(mp[a[i]]);
    }
    int MIN = 10;
    rep(i, appear.size()){
        MIN = min(MIN, appear[i]);
    }
    int minNum;
    if(MIN==2){
        minNum=1;
    }else if(MIN==3){
        minNum=7;
    }else if(MIN==4){
        minNum=4;
    }else if(MIN==5){
        minNum=5;
    }else if(MIN==6){
        minNum=9;
    }else if(MIN==7){
        minNum=8;
    }

    vector <int> mods;
    rep(i, appear.size()){
        mods.emplace_back(max(appear[i]-MIN, appear[i]%MIN));
    }

    int keta = n/MIN;
    int amari = n%MIN;

    int times;
    int MAX = 0;
    int tmp = 0;
    rep(i, m){
        if(mods[i]!=0){

            if(amari % mods[i] == 0){
                times = amari/mods[i];
                if(a[i]>minNum){
                    tmp = 0;
                    rep(j, times){
                        // cout << a[i];
                        tmp += a[i]*pow(10, keta-j-1);
                    }
                    rep(j, keta-times){
                        // cout << minNum;
                        tmp += minNum *pow(10, keta-times-j-1);
                    }
                    // return 0;
                }else{
                    tmp = 0;
                    rep(j, times){
                        tmp += minNum *pow(10, keta-j-1);
                    }
                    rep(j, keta-times){
                        tmp += a[i] *pow(10, keta-times-j-1);
                    }
                    // return 0;
                }
                cout << tmp << endl;
                MAX = max(MAX, tmp);
            }
            cout << i << " dame" << endl;

            cout << MAX << endl;

        }
    }


    return 0;
}