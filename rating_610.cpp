#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x,y;
        cin>>n>>x>>y;
        if(y<=x*n && y>=0){
        if(y%x==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}