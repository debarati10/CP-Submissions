#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int arr[5][5]={};
    int a1, a2;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
            a1=i;
            a2=j;
            }
        }
    }
    if(a1==2 && a2==2)
    cout<<0;
    else{
        int x=abs(a1-2);
        int y=abs(a2-2);
        cout<<x+y;
    }
}