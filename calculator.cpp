#include <iostream>
using namespace std;

enum class TokenType {
	ADD,
	SUBTRACT,
	MULTIPLY,
	DIVIDE,
	MOD,
	INT,
	FLOAT,
}

struct Token {
	TokenType type;
	string value;

	Token(TokenType t, const string& v)
		: type(t)
		, value(v)
	{
	}
};

void add(int* x, int* y, int* result){
	*result = *x + *y;
}

void subtract(int* x, int* y, int* result){
	*result = *x - *y;
}
void multiple(int* x, int*y, int* result){
	*result = *x * *y;
}
void divide(int* x, int*y, int* result){
	*result = *x / *y;
}
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
	multiple(&x, &y, &result);
	cout << "multiply " << result << "\n";
	add(&x, &y, &result);
	cout << "add " << result << "\n";
	divide(&x, &y, &result);
	cout << "divide " << result << "\n";
	return 0; 
}


