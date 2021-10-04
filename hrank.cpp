#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q; cin>>n>>q;
    int arr[n];
    for(int i =0 ;i<n;i++){
        int m; cin>>m;
        int j;
        for( j = 0 ; j<m;j++ ){
            cin>>arr[j];
        }
    }
    for(int i = 0 ;i < n ; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}