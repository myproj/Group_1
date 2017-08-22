#include <iostream>
#include "functions.h"

using namespace std;
int factorial(int n){

	if(n<0)
	{
		int x;
		cin >> x;
		n=x;
		//factorial(x);
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
