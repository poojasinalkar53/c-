#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter for n:";
    cin>>n;
    int marks[n];
    cout<<"Enter the number: ";
    for(i=0;i<=n-1;i++){
        cin>>marks[i];
    }

    int sum=0;
    for(i=0;i<=n-1;i++){
        sum=sum+marks[i];
    }

    cout<<"The average of students is :"<<sum/(n+0.0); // here write 0.0 for doing the sum in float

    return 0;
}