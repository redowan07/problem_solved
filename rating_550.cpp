#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        if((a+b+c+d)==0) cout<<"IN"<<endl;
        else cout<<"OUT"<<endl;
    }
    return 0;
}