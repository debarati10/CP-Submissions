#include<bits/stdc++.h> 
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int len;
        cin>>len;
        long long int sum=0;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        cout<<abs(sum)<<endl;
    }
}