#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x,k=0;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            if(arr[i]>=x) k++;
        }
        cout<<k<<endl;
    }
    return 0;
}