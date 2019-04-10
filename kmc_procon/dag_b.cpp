#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <queue>
using ll=long long;
#define REP(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main(){
    int node = 26;

    vector <int> in(node,0);
    vector <vector <int> > graph(node);

    int n; cin >> n;
    string a[n], b[n];
    string t,s; 
    REP(i,n){
        cin >> a[i] >> b[i];
    }

    REP(i,n){
        int j; //ループカウンタを後で外部で使うために，ここで宣言．
        for(j=0; j < min(a[i].size(), b[i].size());j++){
            if(a[i][j]!=b[i][j]){
                graph[a[i][j]-'a'].emplace_back(b[i][j]-'a');
                break;
            }
        }
        if(j==b[i].size()){
            cout << -1 << endl;
            return 0;
        }
    }

    for(int i=0;i<node;i++){
        for(int j=0;j<graph[i].size();j++){
            in[graph[i][j]]++;
        }
    }

    vector <int> sorted;
    priority_queue <int, vector<int>, greater<int>> que;

    for(int i=0;i<node;i++){
        if(in[i]==0){
            que.push(i);
        }
    }
    while(!que.empty()){
        int tmp = que.top();
        que.pop();
        sorted.emplace_back(tmp);
        for(int i=0;i<graph[tmp].size();i++){
            in[graph[tmp][i]]--;
            if(in[graph[tmp][i]]==0){
                que.push(graph[tmp][i]);
            }
        }
    }

    if(sorted.size()!=node){
        cout << -1 << endl;
        return 0;
    }
    
    for(int i=0;i<node;i++){
        cout << (char)(sorted[i] + 'a');
    }
    cout << endl;
    return 0;
}