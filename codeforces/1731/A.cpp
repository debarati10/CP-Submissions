
#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int testcos;
    cin>>testcos;
    while(testcos--){
        int arrlen;
        cin>>arrlen;
        int n=arrlen;
        int arr[n];
        long long int sum=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum=sum*arr[i];
        }
        
        sum=sum+(n-1);
        long long int ans=sum*2022;
        cout<<ans<<endl;
    }
}