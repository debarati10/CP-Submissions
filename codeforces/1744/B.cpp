#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long findsum=0, ev=0, od=0, number, query, i, j;
        cin>>number>>query;
        long long int arr[number];
        for(i=0;i<number;i++){
            cin>>arr[i];
            arr[i]&1?od++:ev++;
            findsum+=arr[i];
        }
        int z=query;
        while(z--){
            cin>>i>>j;
            i?findsum+=(od*j):findsum+=(ev*j);
            cout<<findsum<<endl;
            if(j&1){
                if(!i){
                    od=number;
                    ev=0;
                }
                else{
                    od=0;
                    ev=number;
                }
            }
        }
    }
}