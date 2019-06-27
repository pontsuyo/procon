#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    int nn;
    while(true){
        int sum = 0;
        nn = n;
        while(nn>0){
            sum += nn%10;
            nn/=10;
        }
        if(sum%4==0){
            cout << n << endl;
            return 0;
        }
        n++;
    }
}