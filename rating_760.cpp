#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int x,k=1;
        cin>>x;
        while(x>0){
            k*=x;
            x--;
        }
        cout<<k<<endl;
    }
    return 0;
}