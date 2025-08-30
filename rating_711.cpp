#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x==5) cout<<1<<endl;
        else if(x>10 && x%10!=0 && x%5==0) cout<<(x/10)+1<<endl;
        else if(x%10==0 && x%5==0) cout<<x/10<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}