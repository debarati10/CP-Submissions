#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int ans=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="++X" || s=="X++")
        ans+=1;
        if(s=="--X" || s=="X--")
        ans-=1;
    }
    cout<<ans;
}