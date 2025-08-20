#include<iostream>
using namespace std;
int main(){
    int t,x,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>a>>b;
        int y=a*1+b*2;
        if(y>=x) cout<<"Qualify"<<endl;
        else cout<<"NotQualify"<<endl;
    }
    return 0;
}