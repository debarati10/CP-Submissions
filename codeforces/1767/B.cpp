#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int testcos;
    cin>>testcos;
    while(testcos--){
        int town;
        cin>>town;
        long long int f1;
        cin>>f1;
        long long array[town-1];
        
        for(int j=0;j<town-1;j++) cin>>array[j];
        sort(array, array + town-1);
        
        for(int i=0;i<town-1;i++){
            int small=(array[i]-f1)/2;
            if(f1<array[i]){
            f1+=((array[i]-f1)%2==0)?small:small+1;
            }
        }
        cout<<f1<<endl;
    }
}