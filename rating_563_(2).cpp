#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        n=(n*1000)/100;
        cout<<n<<endl;
    }
    return 0;
}