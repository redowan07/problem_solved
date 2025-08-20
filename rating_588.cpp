#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y=0;
        cin>>x;
        while(x>0){
            y=y*10+(x%10);
            x/=10;
        }
        cout<<y<<endl;
    }
    return 0;
}