#include<iostream>
using namespace std;
int main(){
    int t;
    float x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        x*=0.5;
        if(y>=x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}