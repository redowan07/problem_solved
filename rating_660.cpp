#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        for(int i=0;i<x;i++){
            if(s[i]=='A') cout<<'T';
            else if(s[i]=='T') cout<<'A';
            else if(s[i]=='G') cout<<'C';
            else if(s[i]=='C') cout<<'G';
        }
        cout<<endl;
    }
    return 0;
}