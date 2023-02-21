#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int n, d;
    cin>>n>>d;
    int arr[n];
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int m;
    cin>>m;
    if(n==m)
    cout<<sum;
    if(n>m){
        sort(arr, arr+n);
        long long int sum0=0;
        for(int i=0;i<m;i++){
        sum0+=arr[i];
    }
    cout<<sum0;
    }
    if(n<m){
        int extra=m-n;
        long long int money=extra*d;
        long long int ans=sum-money;
        cout<<ans;
    }
}