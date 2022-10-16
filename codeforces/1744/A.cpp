#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int number;
        cin>>number;
         int arr[number];
        for(int i=0;i<number;i++) 
        cin>>arr[i];
        string str;
        cin>>str;
        
        map<int, char> map;
        int ans=0;
        for(int i=0;i<number;i++){
            if(map.find(arr[i])!=map.end() && str[i]!=map[arr[i]]){
                ans=1;
                break;
            }
            map.insert({arr[i], str[i]});
        }
        
        if(!ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}