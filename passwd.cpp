
#include <iostream>
#include <string.h>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	bool lower = false , upper = false , digit = false;
	string str;
	while(T>0){
	    cin>>str;
	    for(int i = 0 ; i<str.size() ;  i++){
	        if(islower(str[i])){
	            lower = true;
	        }
	        if(isupper(str[i])){
	            upper = true;
	        }
	        if(isdigit(str[i])){
	            digit = true;
	        }
	    }
	    
	    
	    T--;
	}
	for(int i = 0 ; i<T ; i++){
		if(upper == true && lower == true && digit == true){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}