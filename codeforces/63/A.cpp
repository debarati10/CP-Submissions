#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> p1, p2, p3, p4;
    for(int i=0;i<n;i++){
        string name;
        string rank;
        cin>>name>>rank;
        if(rank=="rat")
        p1.push_back(name);
        if(rank=="woman" || rank=="child")
        p2.push_back(name);
        if(rank=="man")
        p3.push_back(name);
        if(rank=="captain")
        p4.push_back(name);
    }
    for(int i=0;i<p1.size();i++)
    cout<<p1[i]<<endl;
    for(int i=0;i<p2.size();i++)
    cout<<p2[i]<<endl;
    for(int i=0;i<p3.size();i++)
    cout<<p3[i]<<endl;
    for(int i=0;i<p4.size();i++)
    cout<<p4[i]<<endl;
}