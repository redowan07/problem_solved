#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,r;
        cin>>x>>y>>r;
        int n=(r/30)+x;
        
        if(n%y==0) cout<<n/y<<endl;
        else if(n%y!=0) cout<<(n/y)+1<<endl;
        
    }
    return 0;
}