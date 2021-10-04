#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

    int a = 6;
    int* b = &a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    return 0;
}