#include<iostream>
using namespace std;
int main(){
    int t,a,b,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>x>>y;
        y*=x;
        a*=b;
        if(y>=a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}