//A group of N friends in Chefland want to buy Chef-TV subscriptions. We know that 6 people can share one Chef-TV subscription. Also, the cost of one Chef-TV subscription is X rupees. Determine the minimum total cost that the group of N friends will incur so that everyone in the group is able to use Chef-TV.

#include<iostream>
using namespace std;
int main(){
    int t,n,x;
    int c=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x;
        if(n>6){
          if(n%6==0) c=n/6;
          else c=(n/6)+1;
        }else c=1;
        cout<<c*x<<endl;
    }
    return 0;
}
