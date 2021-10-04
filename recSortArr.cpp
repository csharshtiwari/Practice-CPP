#include<iostream>
using namespace std;

bool sorted(int arr[] , int n){
    if(n==1){
        return true; //base condition
    }
    bool restArr = sorted(arr+1,n-1);
    
    if(arr[0]<arr[1] && restArr){
        return true;
    }
     //check wether arr0 is greater tha arr1 and 
     //remaining array is sorted or not by checking 
     //restArr = true or false
        
}

int main(){
    int arr[] =  {1,2,3,4,5};
    cout<<sorted(arr,5)<<endl;
    
    
}