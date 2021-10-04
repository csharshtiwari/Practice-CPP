#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int t1 = 0;
    int t2 = 1;
    int nextSum;
    int n;
    cin>>n;

    for ( int i = 0 ; i<n ;i++){
        cout<<t1<<" ";
        nextSum = t1+t2;
        t1 = t2;
        t2 = nextSum;
        nextSum = t1;
    }
    return 0;
}