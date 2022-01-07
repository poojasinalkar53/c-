#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int numSpace=1;numSpace<=n-row;numSpace++){
            cout<<" ";
        }
        for(int numStar=1;numStar<=row;numStar++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
    