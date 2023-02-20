#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1)
        count++;
    }
    if(count==0)
    cout<<"EASY";
    else
    cout<<"HARD";
    
}