#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<int> arr;
        while(true){
            if(n>=1 && n<=9){
                arr.push_back(n%10);
                break;
            }
            arr.push_back(n%10);
            n=n/10;
        }
        vector<int> ans;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]!=0){
                ans.push_back(arr[i]*pow(10, i));
            }
        }
        int k=ans.size();
        cout<<k<<endl;
        for(int j=0;j<k;j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
    }
}