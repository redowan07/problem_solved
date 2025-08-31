#include<iostream>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       if(n>=5) {
           if(n%5==0){
                cout<<(n/5)*4<<endl;
           } else cout<<((n/5)*4)+n%5<<endl;
       }
        else cout<<n<<endl;
   }
   return 0;
}