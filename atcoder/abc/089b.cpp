#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    char c;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> c;
        if(c=='Y'){
            cout << "Four" << endl;
            return 0;
        }
    }
    cout << "Three" << endl;
    return 0;
}