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


	T GetItem(int index) {

		return OriginalArray[index];

	}


	void Reverse() {
		_TempArray = new T[_Size];
		int counter = 0;
		
		for (int i = _Size - 1; i >= 0; i--)
		{
			_TempArray[counter] = OriginalArray[i];
			counter++;
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;



	}


	void Clear() {
		_Size = 0;
		_TempArray = new T[0];
		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	bool DeleteItemAt(int index) {

		if (index >= _Size || _Size < 0) {
			return false;
		}

		_Size--;

		_TempArray = new T[_Size];
		int counter = 0;
		for (int i = 0; i < index; i++)
		{

			_TempArray[i] = OriginalArray[i];
		}


		for (int i = index + 1; i < _Size + 1; i++)
		{

			_TempArray[i - 1] = OriginalArray[i];
		}

		delete[] OriginalArray;

		OriginalArray = _TempArray;

	}

	void DeleteFirstItem() {
		DeleteItemAt(0);
	}

	 void DeleteLastItem() {
		DeleteItemAt(_Size - 1);

	}

	 int Find(T value) {
		 
		 for (int i = 0; i < _Size; i++)
		 {
			 if (OriginalArray[i] == value) {

				 return i;
			 }
				 
		 }

		 return -1;
	 }


	 bool DeleteItem(T value) {

		 int index = Find(value);

		 if (index == 0) {
			 return false;
		 }

		 DeleteItemAt(index);
		 return true;

	 }



};

