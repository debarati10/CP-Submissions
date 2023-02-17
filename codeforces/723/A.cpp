#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    vector<int> arr(3);
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int x=abs(arr[0]-arr[1]);
    int y=abs(arr[1]-arr[2]);
    cout<<x+y;
}