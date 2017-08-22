#include "functions.h"

int factorial(int n){

	if(n < 0){
		int t;
		cin>>t;
		return factorial(t);
	}else{
		if(n!=1){
			return(n * factorial(n-1));
		}
		else return 1;	
	}

}
