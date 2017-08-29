#include <iostream>
#include "functions.h"
using namespace std;

int factorial(int n){

	if(n < 0)
	{
		int x;
		cout<<"Enter positive value of n: ";
		cin>>x;
		n = x;
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
