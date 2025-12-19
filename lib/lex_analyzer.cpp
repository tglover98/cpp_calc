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
