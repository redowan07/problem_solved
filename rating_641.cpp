#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        if(x==n) cout<<0<<endl;
        else if (abs(n-x)>min(n,x)) cout<<min(n,x)<<endl;
        else cout<<abs(n-x)<<endl;
    }
    return 0;
}