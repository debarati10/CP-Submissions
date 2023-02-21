#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int zero=0, one=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0')
        zero++;
        else
        one++;
    }
    cout<<abs(zero-one);
}