#include<iostream>
using namespace std;

int main(){
string name="Ravet";
cout<<name<<"\n";

name.push_back('k');// work on single character
cout<<name<<"\n";

cout<<name[5]<<"\n";

name.pop_back();
cout<<name<<"\n";

name.append("Kumar");
cout<<name<<"\n"; //work on string and char

return 0;
}

