#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double x,y,z;
        cin>>x>>y>>z;
        double l=y/x;
       if(z>l) cout<<(z-l)<<endl;
       else cout<<0<<endl;
    }
    return 0;
}