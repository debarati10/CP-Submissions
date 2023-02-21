#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int a,b,s;
    cin>>a>>b>>s;
    if(abs(a)+abs(b)==s)
    cout<<"YES"<<endl;
    else if((abs(a)+abs(b))>s)
    cout<<"NO"<<endl;
    else{
        if((s-(abs(a)+abs(b)))%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}