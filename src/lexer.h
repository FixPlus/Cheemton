#pragma once
#ifndef CHEEMTON_LEXER
#define CHEEMTON_LEXER

#include <iostream>
#include <sstream>
#include <string>
#include <format>
#include <vector>


namespace cheemton {


	struct Lexeme {
		enum LexemeType {
			//TODO: Number Types
			Number,
			//------------------
			Variable,
			Plus,
			Minus,
			Multiply,
			Divide,
			LeftParentheses,
			RightParentheses
		};
		LexemeType type;
		std::string data;
	};


	class Lexer {
	public:
		Lexer() = default;
		std::vector<Lexeme>* analyzeString(const std::string &inputString);
		std::vector<Lexeme>* analyzeString(const std::string &inputString, std::string* errorOutput);
	private:
	};

}
#endif
