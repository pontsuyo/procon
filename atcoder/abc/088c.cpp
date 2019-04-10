#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> c(3, vector<int>(3,0));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> c[i][j];
        }
    }
    int d1, d2;
    for(int i=0;i<3;i++){
        if(i==0){
            d1 = c[i][0] - c[i][1];
            d2 = c[i][1]-c[i][2];
        }else{
            if(d1 != c[i][0] - c[i][1]){
                cout << "No" << endl;
                return 0;
            }
            if(d2 != c[i][1] - c[i][2]){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}