#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        if((p+q)%4==0 || (p+q)==0 || (p+q)%4==1) cout<<"ALICE"<<endl;
        else cout<<"BOB"<<endl;
    }
    return 0;
}