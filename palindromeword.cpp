#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char c[n+1];
    cin>>c;
    bool check = 1;
    for(int i = 0 ; i< n;i++){
        if(c[i]!= c[n-1-i]){
            check = 0;
            break;
        }
    }
    if(check == true){
        cout<<"Palindrome" <<endl;
    }

    else{
        cout<<"Not Palindrome"<<endl;
    }


    return 0;
}