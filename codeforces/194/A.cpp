#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    if(n*2==k)
    cout<<n;
    else{
        int s=k-(n*2);
        int ans=n-s;
        if(ans>=0)
        cout<<ans;
        else
        cout<<0;
    }
}