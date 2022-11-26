#include<bits/stdc++.h>
#include<algorithm>
#define long long kk;
using namespace std;

int main() {
    int testcos;
    cin>>testcos;
    while(testcos--){
        int lenarr;
        cin>>lenarr;
        int arr[lenarr];
        int n=lenarr;
        int divans=0;
        int res=0;
        int finalres=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int j=0;j<n;j++){
            divans=__gcd(divans, arr[j]);
        }
        res=arr[n-1];
        finalres=res/divans;
        cout<<finalres<<endl;
    }
}