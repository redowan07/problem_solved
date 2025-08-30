#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int j,k;
        k=(1000-y*4)+(500-(x+y)*2);
        j=(500-x*2)+(1000-(y+x)*4);
        if(j>=k) cout<<j<<endl;
            else cout<<k<<endl;
    }
    return 0;
}