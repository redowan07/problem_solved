#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
        if(a>(b+c+d) || b>(a+c+d) || c>(a+b+d) || d>(a+b+c)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}