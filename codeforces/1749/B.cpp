#include <bits/stdc++.h>
using namespace std;

int main() {
    int tests;
    cin>>tests;
    while(tests--){
        int mons;
        cin>>mons;
        long long int a1=0, b1=-333, c1=0;
        long long int array[mons], array2[mons];
        for(int i=0;i<mons;i++){
            cin>>array[i];
            a1=a1+array[i];
        }
        
        for(int j=0;j<mons;j++){
            cin>>array2[j];
            c1=c1+array2[j];
            b1=max(b1, array2[j]);
        }
        
        long long int sol=a1+c1-b1;
        cout<<sol<<endl;
    }
}