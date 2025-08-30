#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        x=(x*3)-(n-x);
        if(x>=p) cout<<"PASS"<<endl;
        else cout<<"FAIL"<<endl;
    }
    return 0;
}