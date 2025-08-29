#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=1;
        cin>>n;
        while(n>0){
            k*=n;
            n--;
        }
        cout<<k<<endl;
    }
    return 0;
}