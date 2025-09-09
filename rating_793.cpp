#include<iostream>
#include<climits>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n,m=INT_MIN,k=0;
        
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        for(int i=n-1;i>=0;i--){
            if(a[i]!=0){
                k=i;
                break;
            }
        }
    cout<<k<<endl;
    }
    return 0;
}
