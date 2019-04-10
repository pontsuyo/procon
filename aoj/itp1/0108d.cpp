#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    string p;
    
    getline(cin, s);
    getline(cin, p);
    
    s += s;

    for(int i=0;i<s.size();i++){
        if(s.substr(i, p.size())==p){
            cout << "Yes" << endl;
            return 0;
        } 
    }

    // string tmp;
    // for(int i=0;i<s.size();i++){
    //     if(s.size()-i < p.size()){
    //         tmp = s.substr(i,s.size()-i) + s.substr(0, i+p.size()-s.size());
    //     }else{
    //         tmp = s.substr(i, p.size());
    //     }
    //     if(tmp==p){
    //         cout << "Yes" << endl;
    //         return 0;
    //     } 
    // }
    cout << "No" << endl;
}