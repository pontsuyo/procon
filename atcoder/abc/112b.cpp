#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;

    vector<int> c(N), t(N);
    
    for(int i = 0; i < N; i++)
    {
        cin >> c[i] >> t[i];
    }

    int MAX = 1 << 30;
    int ans = MAX;
    for(int i = 0; i < N; i++)
    {
        if(t[i] <=T)
        {
            ans = min(ans, c[i]);
        }
    }

    // if(ans<MAX){
    //     cout << ans << endl;
    // }else{
    //     cout << "TLE" << endl;
    // }

    if(ans<MAX) cout << ans << endl;
    else cout << "TLE" << endl;
}