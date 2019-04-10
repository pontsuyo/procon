#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n,0);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    int A=0,B=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            A += a[i];
        }else{
            B += a[i];
        }
    }
    cout << A-B << endl;
}