#include<iostream>
using namespace std;

int occFirst(int arr[] , int n , int key , int i){
    if(i==n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return occFirst(arr , n , key , i+1);

}
int occLast(int arr[] , int n , int key , int i){
    if(i==n){
        return -1;
    }
    int restArr = occLast(arr,n,key,i+1);
    if(restArr != -1){
        return restArr;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;

}


int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<occFirst(arr,7,2,0)<<endl;
    cout<<occLast(arr,7,2,0)<<endl;

    return 0;

    
}