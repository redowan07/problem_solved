// Janmansh has to submit 3 assignments for Chingari before 
// 10 pm and he starts to do the assignments at X pm. Each assignment takes him 
// 1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

#include<iostream>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        if((10-x)<3) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}