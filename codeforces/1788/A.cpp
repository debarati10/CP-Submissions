#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int o=0, t=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1) o++;
            else
            t++;
        }
        if(t==0)
        cout<<1<<endl;
        else if(t%2!=0)
        cout<<-1<<endl;
        else{
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]==2)
            ans++;
            if(ans==(t/2)){
            cout<<i+1<<endl;
            break;
            }
        }
        }
    }
}
