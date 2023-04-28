#pragma once
#include <iostream>
#include "clsMyStackArr.h"

using namespace std;

class clsMyString : public clsMyStackArr <string> 
{

private:
	string _Value = "";

public:

	void SetValue(string Value) {
		_Value = Value;

		clsMyStackArr::push(Value);

	}

	string GetValue() {
		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;


	void Undo() {
		 clsMyStackArr::pop();
	}

	void Redo() {
		
	}


};

