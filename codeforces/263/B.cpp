#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, greater<int>());
    arr[n]=0;
    if(k>n){
        cout<<-1;
    }
    else{
        cout<<arr[k-1]<<" "<<0;
    }
}