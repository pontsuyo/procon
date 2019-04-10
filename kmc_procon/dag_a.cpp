#include<iostream>
#include<stack>
#include <vector>
// #define ll long long
// #define REP(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main(){
    int MAX = 1e5 + 1;
    int vn, en;
    cin >> vn >> en;

    int s[en], t[en];
    vector <int> in(MAX,0);
    vector <vector <int> > graph(MAX);
    for(int i=0;i<en;i++){
        cin >> s[i] >> t[i];
    }

    for(int i=0;i<en;i++){
        graph[s[i]].emplace_back(t[i]);
    }

    for(int i=0;i<vn;i++){
        for(int j=0;j<graph[i].size();j++){
            in[graph[i][j]]++;
        }
    }

    vector <int> sorted;
    stack <int> st;
    for(int i=0;i<vn;i++){
        if(in[i]==0){
            st.push(i);
        }
    }
    while(st.empty()==false){
        int tmp = st.top();
        st.pop();
        sorted.emplace_back(tmp);
        for(int i=0;i<graph[tmp].size();i++){
            in[graph[tmp][i]]--;
            if(in[graph[tmp][i]]==0){
                st.push(graph[tmp][i]);
            }
        }
    }
    for(int i=0;i<vn;i++){
        cout << sorted[i] << endl;
    }
    return 0;
}