#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
    long long int n;
    cin>>n;
    if(n%2!=0)
    n=-((n/2)+1);
    else
    n=n/2;
    cout<<n;
}