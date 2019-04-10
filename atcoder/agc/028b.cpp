#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

unsigned long long kai(int n)
{
    unsigned long long c = 1;
    while(n>0){
        c *= n;
        n -=1;
    }
    return c;
}


int main()
{
    cout << kai(100) << endl;
}
// int main()
// {
//     int N;
//     cin >> N;

//     vector<int> a(N);
    
//     for(int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }


//     if(ans<MAX) cout << ans << endl;
//     else cout << "TLE" << endl;
// }