#include<iostream>
using namespace std;

int main(){
    int a=1,x;
    cin>>x;
    int pow=0;

    while(a<=x){
        pow=a;
        a*=2;
    }
    cout<<"The smallest power of 2 which is less than "<<x<<"  is  "<<pow;
}