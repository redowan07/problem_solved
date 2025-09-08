#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3,b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int s1=a1+a2+a3-min(a1,min(a2,a3));
        int s2=b1+b2+b3-min(b1,min(b2,b3));
        
        if(s1>s2) cout<<"Alice"<<endl;
        else if(s1<s2) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
    }
    return 0;
}