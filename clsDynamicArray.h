#pragma once

#include <iostream>
#include <vector>
using namespace std;
template <class T>
class clsDynamicArray
{

protected: 
	int _Size;
	T* _TempArray;

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

	void Resize(int NewSize) {
	
		if (NewSize < 0) {

			NewSize = 0;
		}

		_TempArray = new T[NewSize];

	
		if (NewSize < _Size) {
			_Size = NewSize;
		}


		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

};

