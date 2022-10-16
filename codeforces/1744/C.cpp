#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int number;
        long long int count=0,g=0,r=0,y=0;
        cin>>number;
        char c;
        cin>>c;
        
        bool ans=1;
        vector<char> vec(number+2);
        for(int i=1;i<=number;i++){
            cin>>vec[i];
            if(vec[i]!='g') ans=0;
        }
        bool ans1=1;
        for(int i=number;i>0;i--){
            if(vec[i]=='g') ans1=0;
            if(ans1) continue;
            count++;
            if(vec[i]==c) r=max(count, r);
            if(vec[i]=='g') count=0;
        }
        
        for(int i=number;i>0;i--){
            count++;
            if(vec[i]==c) r=max(r, count);
            if(vec[i]=='g') break;
        }
        if(ans || c=='g') r=0;
        cout<<r<<endl;
    }
}