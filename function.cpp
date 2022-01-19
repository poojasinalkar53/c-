#include<iostream>
using namespace std;

int sum(int,int);

int main(){
    int a=10,b=15;
    int sum_ab=sum(a,b);
    cout<<sum_ab;
    return 0;
}

int sum(int a,int b){
   int sum_ab=a+b;
   return sum_ab;
}