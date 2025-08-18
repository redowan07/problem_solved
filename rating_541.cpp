#include<iostream>
using namespace std;
int main(){
    int t,b1,b2,b3;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>b1>>b2>>b3;
        if((b1+b2+b3)<2) cout<<"Water filling time"<<endl;
        else cout<<"Not Now"<<endl;
    }
    return 0;
}