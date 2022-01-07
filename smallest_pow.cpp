#include<iostream>
using namespace std;

int main(){
    int a=1,x;
    cin>>x;
    
    int ans=1;
    for(a=2;a<=x;a*=2){
        ans=a;
    }
    cout<<ans;
}