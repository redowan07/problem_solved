#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,m=0;
        cin>>n>>k;
        int a[n];
       for(int i=0;i<n;i++) cin>>a[i];
       for(int i=0;i<n;i++) if((a[i]+k)%7==0) m++;
       cout<<m<<endl;
    }
    return 0;
}