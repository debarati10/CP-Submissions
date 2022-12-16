#include<bits/stdc++.h>
#include<algorithm>
#define long long kk;
#include<climits>
using namespace std;
 
int main() {
    int testcos;
    cin>>testcos;
    while(testcos--){
        int tri[6];
        for(int x=0;x<6;x++) cin>>tri[x];
        if(tri[0]!=tri[2] && tri[0]!=tri[4] && tri[2]!=tri[4]){ 
            cout<<"YES"<<endl;
        }
        
        else if(tri[1]!=tri[3] && tri[1]!=tri[5] && tri[3]!=tri[5]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}