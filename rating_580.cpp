#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        int k=0;
        for(int j=0;j<n;j++) cin>>a[j];
        for(int j=0;j<n;j++){
            if(a[j]>=1000) k++;
        }
        cout<<k<<endl;
    }
    return 0;
}