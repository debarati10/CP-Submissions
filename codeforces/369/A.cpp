#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    int b, c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            if(m>0)
            m--;
            else
            c++;
        }
        else{
            if(k>0)
            k--;
            else if(m>0)
            m--;
            else
            c++;
        }
    }
    cout<<c;
}