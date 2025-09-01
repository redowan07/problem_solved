#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        if(a<=0 && b<=0){
          if(abs(a+b)%k==0) cout<<abs(a+b)/k<<endl;
          else cout<<(abs(a+b)/k)+1<<endl;
        }else if(a>0 && b>0){
            if(abs(a-b)%k==0) cout<<abs(a-b)/k<<endl;
          else cout<<(abs(a-b)/k)+1<<endl;
        }else if(a>0 && b<0){
            if(abs(a-b)%k==0) cout<<abs(a-b)/k<<endl;
            else cout<<(abs(a-b)/k)+1<<endl;
        }else{
            if(abs(b-a)%k==0) cout<<abs(b-a)/k<<endl;
            else cout<<(abs(b-a)/k)+1<<endl;
        }
    }
    return 0;
}