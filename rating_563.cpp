#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int f,r=n*50;
        f=r*0.2+r*0.2+r*0.3;
        cout<<r-f<<endl;
    }
    return 0;
}