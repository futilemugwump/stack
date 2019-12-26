#include <string>
#include <iostream>
#include "calculator.h"
using namespace std;
int main()
{
	
		
			
				TCalculator C;
				string test_string;
				getline(cin, test_string);
				C.SetExpr(test_string);
				C.ToPostfix();
				cout << C.GetPostfix() << endl;
				cout << C.Calc() << endl;
			
		
		system("pause");
		return 0;
	
}