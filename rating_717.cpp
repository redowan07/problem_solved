#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int x,y,a,b;
      cin>>x>>y;
      if(y%10==0) b=y/10;
      else if(y%10!=0 ) b=(y/10)+1;
    
    if(x%10==0) a=x/10;
    else a=(x/10)+1;
    
    cout<<abs(a-b)<<endl;
    }
    return 0;
}