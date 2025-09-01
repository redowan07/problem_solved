#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,x,y;
        cin>>h>>x>>y;
        int k=h-y;
        if(k>0){
            if(k%x==0) cout<<(k/x)+1<<endl;
            else cout<<(k/x)+2<<endl;
        }else cout<<1<<endl;
    }
    return 0;
}