#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=count(s.begin(), s.end(), 'A');
    int i=count(s.begin(), s.end(), 'I');
    int f=count(s.begin(), s.end(), 'F');

    int ans=0;
    if(i==1)
    ans=1;
    if(i==0)
    ans=a;
    if(i>1)
    ans=0;
    if(a==0){
        if(i==1)
        ans=max(ans, 1);
        else
        ans=max(ans, 0);
    }
    if(i==0 && f==0)
    ans=max(ans, a);
    if(a==0 && i==0)
    ans=max(ans, 0);

    cout<<ans;
}