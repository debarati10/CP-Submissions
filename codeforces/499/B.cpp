#include<bits/stdc++.h>
#include<algorithm>
#include<map>
using namespace std;
 
int main() {
    int n, m;
    cin>>n>>m;
    string a, b;
    map<string, string> map;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        map[a]=b;
    }
    string w;
    for(int i=0;i<n;i++){
        cin>>w;
        if(w.size()<=map[w].size())
        cout<<w<<" ";
        else
        cout<<map[w]<<" ";
    }
    
}