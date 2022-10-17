#include<bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin>>test;
    while(test--){
        int number;
        cin>>number;
        int array[number];
        for(int j=0;j<number;j++) cin>>array[j];
        cout<<3*(10-number)*(9-number)<<endl;
    }
}