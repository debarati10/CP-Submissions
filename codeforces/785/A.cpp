#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string s;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron")
        sum+=4;
        if(s=="Cube")
        sum+=6;
        if(s=="Octahedron")
        sum+=8;
        if(s=="Dodecahedron")
        sum+=12;
        if(s=="Icosahedron")
        sum+=20;
    }
    cout<<sum;
}