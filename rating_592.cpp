#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        a*=10;
        b*=5;
        if(a>b) cout<<"FIRST"<<endl;
        else if(a<b) cout<<"SECOND"<<endl;
        else cout<<"ANY"<<endl;
    }
    return 0;
}