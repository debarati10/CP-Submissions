#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int n, m;
    cin>>n>>m;
    char arr[n][m];
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                arr[i][j]='#';
            }
            else if(i%2!=0 && i==3*k+(k-1)){
                if(j==0){
                    arr[i][j]='#';
                }
                if(j!=0){
                    arr[i][j]='.';
                }
            }
            else if(i%2!=0){
                if(j!=m-1){
                    arr[i][j]='.';
                }
                if(j==m-1){
                    arr[i][j]='#';
                }
            }
        }
        if(i==3*k+(k-1))
        k++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}