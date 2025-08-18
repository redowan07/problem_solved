#include<iostream>
using namespace std;
int main(){
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        x*=y;
        y=x/100;
        cout<<y<<endl;
    }
    return 0;
}