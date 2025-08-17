#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        x*=4;
        x+=y;
        cout<<x<<endl;
    }
    return 0;
}