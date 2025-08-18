#include<iostream>
using namespace std;
int main(){
    int t,n,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x;
        n*=x;
        if(n<4) cout<<1<<endl;
        else {
            if(n%4==0){
            cout<<(n/4)<<endl;}else {
                cout<<(n/4)+1<<endl;
            }
         }
    }
    return 0;
}