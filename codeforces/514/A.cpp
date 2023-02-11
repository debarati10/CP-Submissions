#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    long long int n;
    cin>>n;
    vector<long long int> ans;
    while(true){
        if(n>=0 && n<=9 && n==9){
            ans.push_back(n);
            break;
        }
        else if(n>=0 && n<=9 && n!=9){
            long long int small0=n%10;
            if(small0>=5)
            small0=9-small0;
            ans.push_back(small0);
            break;
        }
        long long int small=n%10;
        if(small>=5)
        small=9-small;
        ans.push_back(small);
        n=n/10;
    }
    long long int size=ans.size();
    long long int res=0;
    for(int i=size-1;i>=0;i--){
        res=res+ans[i]*(pow(10, i));
    }
    cout<<res;
}
