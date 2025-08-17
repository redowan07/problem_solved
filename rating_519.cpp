#include<iostream>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y>>z;
        x=y*x;
        if(z>(x*0.5)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}