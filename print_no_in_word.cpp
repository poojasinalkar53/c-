#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the number a and b : ";
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(i==1){
            cout<<"One\n";
        }else if (i==2){
            cout<<"Two\n";
        }else if(i==3){
            cout<<"Three\n";
        }else if(i==4){
            cout<<"Four\n";
        }else if(i==5){
            cout<<"Five\n";
        }else if(i==6){
            cout<<"Six\n";
        }else if(i==7){
            cout<<"Seven\n";
        }else if(i==8){
            cout<<"Eight\n";
        }else if(i==9){
            cout<<"Nine\n";
        }else{
            if(i%2==0){
                cout<<"Even\n";
            }else{
                cout<<"Odd\n";
            }
        }
        
    }
}

/* input 8 and 11
output : 
eight 
nine 
even // This is deu to number is greater than nine
odd */