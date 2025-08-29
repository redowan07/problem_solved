#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int k=x*y;
        int j=(x/3)*z;
    if(x%3==0)   cout<<k+j-z<<endl;
    else cout<<k+j<<endl;
    }
    return 0;
}