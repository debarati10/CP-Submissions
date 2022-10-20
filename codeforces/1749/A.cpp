#include <bits/stdc++.h>
using namespace std;

int main() {
    int tests;
    cin>>tests;
    while(tests--){
        int size, rooks;
        cin>>size>>rooks;
        int arr[rooks][2];
        for(int j=0;j<rooks;j++){
            cin>>arr[j][0]>>arr[j][1];
        }
        if(size>rooks) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}