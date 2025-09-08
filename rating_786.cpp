#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float a,b,c=0,n;
        cin>>n>>a>>b;
    c=log2(n);
    if(c>1) cout<<(c*a)+(c-1)*b<<endl;
    else cout<<a<<endl;
    }
return 0;
}