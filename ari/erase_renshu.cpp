#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    // vector<int> v = { 2,5,3,3,1,2,4,2,1,1,4,4,3,3,3};
    // vector<int> v = { 1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,6};
    vector<int> v = { 6,6,6,6,6,6,5,5,5,5,5,4,4,4,4,3,3,3,2,2,1, 0};
    
    decltype(v)::iterator result = unique(v.begin(), v.end());

    rep(i, v.size()){
        cout << v[i] << " ";
    }
    cout << endl;
    // [v.begin(), result)の範囲に、重複を除いた結果が入っている。
    // 不要になった要素を削除
    v.erase(result, v.end());

    // printf("unsorted unique", v);
    rep(i, v.size()){
        cout << v[i] << " ";
    }
    return 0;
}