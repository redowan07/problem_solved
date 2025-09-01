#include<iostream>
using namespace std;
int main(){
        int r,o,c;
        cin>>r>>o>>c;
        int a=(20-o)*36;
        int b=r-c;
        if(a>b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
}