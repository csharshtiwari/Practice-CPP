#include<iostream>
using namespace std;

void revStr(string s){
    if(s.length()==0){
        return;
    }                   // base case
    string remStr = s.substr(1); // return string after index 1
    revStr(remStr);
    cout<<s[0]<<endl;

}
int main(){
    string s = "Binod";
    revStr(s);
    return 0;

}
