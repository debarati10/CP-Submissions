#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int testcos;
    cin>>testcos;
    while(testcos--){
        int lenarr;
        cin>>lenarr;
        int arr[lenarr];
        int n=lenarr;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long final=0;
        sort(arr, arr+n);
       for(long long j=0;j<n;j++){
           if(j<n-1 && arr[j]!=arr[j+1])
           final=max(final, ((j+1)*(n-j-1)));
           if(!final)
           final=n>>1;
       }
       cout<<final<<endl;
    }
}