#include <iostream>
#include "operations.hpp"
using namespace std;

int get_expression(){
	int x;
	cout << "Provide a math expressioni \n";
	cin >> x;

	return x;
}

int main(){
	int result;

	int x = 10;
	int y = 5;
	
	int *p = &x;
	int *q = &x;
	int expression;

	expression = get_expression();
	cout << "user input " << expression << "\n";
	subtract(&x,&y,&result);
	cout << "subtraction " << result << "\n";
	multiply(&x, &y, &result);
	cout << "multiply " << result << "\n";
	add(&x, &y, &result);
	cout << "add " << result << "\n";
	divide(&x, &y, &result);
	cout << "divide " << result << "\n";
	return 0; 
}


