#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int x = 25;
    int a[100000];
    rep(i, 100000){
        a[i] = i*10;
    }

    int *ptr;
    ptr = &x;
    cout << "x = " << x << endl;
    cout << "&x " << &x << endl;
    cout << "&x+1 =" << &x+1 << endl;
    cout << "ptr =  " << ptr << endl;
    
    int *pa;
    pa = &a[3];
    cout << *pa << endl; 
    cout << 9000[a] << endl; //不思議案件
    cout << &a[0] << endl; 
    cout << &a[1] << endl; 
    cout << pa[0] << endl; 
    cout << pa[1] << endl; 
    

    int *pb;
    // pb = 1;

    return 0;
}