#pragma once

#include <cmath>
#include <string>
#define Use_Mass

#ifndef Use_Mass
#include "list.h"
#else
#include "stack.h"
#endif // !Use_Mass
class TCalculator {
	std::string expr, postfix;
	TStack<char> st_c;
	TStack<double> st_d;
	int Prior(char c);
public:
	TCalculator() :st_c(), st_d() {}
	~TCalculator() {}
	void SetExpr(std::string);
	std::string GetExpr();
	std::string GetPostfix();
	bool CheckBrackets();
	void ToPostfix();
	double Calc();
};
