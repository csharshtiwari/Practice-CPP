#include<iostream>
using namespace std;

int bSearch(int arr[], int n , int key){
    int f=0;
    int l=n;
    while(f<=l){
        int mid = (f+l)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            l=mid-1;
        }
        else{
            f=mid+1;
        }

    }
    return -1;
    
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<bSearch(arr,n,key)<<endl;

    return 0;
}