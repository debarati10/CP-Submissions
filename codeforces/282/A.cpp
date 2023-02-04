#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int n, ans=0;
    cin>>n;
    string s2="++X";
    string s3="X++";
    string s4="--X";
    string s5="X--";
    string s1;
    for(int i=0;i<n;i++){
        cin>>s1;
        if(s1==s2 || s1==s3)
        ans+=1;
        if(s1==s4 || s1==s5)
        ans-=1;
    }
    
    cout<<ans;
}
