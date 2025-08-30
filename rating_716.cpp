#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        while(n--) if(a[n]>=10 && a[n]<=60) k++;
        cout<<k<<endl;
    }
    return 0;
}