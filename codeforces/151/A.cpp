#include<bits/stdc++.h>
#include<algorithm>
#include<climits>
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int toast=drink/nl;
    int slices=c*d;
    int salt=p/np;
    if(n>slices || drink<(nl*n) || p<(np*n) )
    cout<<0;
    else{
        int mini=min(toast, min(slices, salt));
        int ans=mini/n;
        cout<<ans;
    }
}
