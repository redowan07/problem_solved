#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int k=a+c;
        int l=a+d;
        int j=b+c;
        int m=b+d;
        if(k>=l && k>=j && k>=m) cout<<k<<endl;
        else if(l>=k && l>=j && l>=m) cout<<l<<endl;
        else if(j>=k && j>=l && j>=m) cout<<j<<endl;
        else cout<<m<<endl;
    }
    return 0;
}