#pragma once

#include <iostream>
#include <vector>
using namespace std;
template <class T>
class clsDynamicArray
{

protected: 
	int _Size;

public:

	T* OriginalArray;
	clsDynamicArray(int Size = 0) {
	
		if (_Size < 0) {
			_Size = Size;
		}


		_Size = Size;
		OriginalArray = new T[_Size];
	}
	
	~clsDynamicArray() {
		delete[] OriginalArray;
	}


	bool SetItem(int Index , int Number) {


		if (Index >= _Size || _Size < 0) {
			return false;
		}

		OriginalArray[Index] = Number;
		return true;
	}


	bool IsEmpty() {
		return (_Size == 0 ? true : false);
	}

	int Size() {
		return _Size;
	}

	void PrintList() {
		for (int i = 0; i <= _Size - 1; i++)
		{
			cout << OriginalArray[i] << " ";
		}
		cout << "\n";
	}



};

