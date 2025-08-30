#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        x*=100;
        if(x>=n) cout<<0<<endl;
        else if(x<n){
            if((n-x)%100==0 && (n-x)>=100) cout<<(n-x)/100<<endl;
            else if((n-x)>=100 && (n-x)%100!=0) cout<<((n-x)/100)+1<<endl;
            else cout<<1<<endl;
        }
    }
    return 0;
}