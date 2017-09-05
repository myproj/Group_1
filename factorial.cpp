#include "functions.h"

int factorial(int n){

	//code to handle -ve case handled
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
