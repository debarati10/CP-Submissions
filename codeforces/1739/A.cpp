#include<iostream>
using namespace std;

int main(){
    int t, n, m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n<=1 || m<=1)
        cout<<n<<" "<<m<<endl;
        else if(n==2 && m==2)
        cout<<n<<" "<<m<<endl;
        else if(n==3 && m==2)
        cout<<"2 2"<<endl;
        else if(n==2 && m==3)
        cout<<"2 2"<<endl;
        else if(n==3 && m==3)
        cout<<"2 2"<<endl;
        else
        cout<<n<<" "<<m<<endl;
    }
}