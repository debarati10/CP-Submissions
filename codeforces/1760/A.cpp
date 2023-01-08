#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        int maxi=0;
        int mini=0;
        if(a>b && a>c)
        maxi=a;
        else if(b>a && b>c)
        maxi=b;
        else if(c>a && c>b)
        maxi=c;
        
        if(a<b && a<c)
        mini=a;
        else if(b<c && b<a)
        mini=b;
        else if(c<a && c<b)
        mini=c;
        
        if(a!=maxi && a!=mini )
        cout<<a<<endl;
        else if(b!=maxi && b!=mini)
        cout<<b<<endl;
        else if(c!=maxi && c!=mini)
        cout<<c<<endl;
    }
}