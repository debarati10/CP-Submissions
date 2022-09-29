#include <iostream>
#include<climits>
using namespace std;

int main() {
    int t, n, arr[10000], count;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
        cin>>arr[i];
        int ans=0;

        
        for(int i=1;i<n;i++){
            if(arr[i+1]<=arr[i] && arr[i+1]!=0){
                ans=-1;
                break;    
                }
            else{
                arr[i+1]=arr[i]+arr[i+1];
            }
    }
    if(ans==-1)
    cout<<ans<<endl;
    else{
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
}