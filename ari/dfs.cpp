#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 1000

int a[MAX_N];
int n, k;

bool dfs(int i, int sum){
    if(i==n){
        return sum == k;
    }

    if(dfs(i+1, sum)){
        return true;
    }
    if(dfs(i+1, sum+a[i])){
        return true;
    }

    return false;
}

int main(){
    cin >> n >> k;
    rep(i, n){
        cin >> a[i];
    }
    if(dfs(0,0)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}

