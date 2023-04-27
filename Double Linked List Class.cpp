#include <iostream>
#include "clsDynamicArray.h"

using namespace std;



int main() {

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);
    

    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nIs Array Size:  " << MyDynamicArray.Size();
    cout << "\nArray Items:\n";


    MyDynamicArray.PrintList();

   /* cout << "\nStack: \n";
    MyStack.Print();

    cout << "\nStack Size: " << MyStack.Size();
    cout << "\nStack Front: " << MyStack.Top();
    cout << "\nStack Back: " << MyStack.Bottom();

    MyStack.pop();

    cout << "\n\nStack after pop() : \n";
    MyStack.Print();

    cout << "\n\nItem (2): " << MyStack.GetItem(2);

    MyStack.Reverse();
    cout << "\n\nStack after reverse() : \n";
    MyStack.Print();


    MyStack.UpdateItem(2, 600);
    cout << "\n\nStackafter Updating Item(2) to 600 : \n";
    MyStack.Print();

    MyStack.InsertAfter(2, 800);
    cout << "\n\nStack after Inserting 800 after Item(2): \n";
    MyStack.Print();


    MyStack.InsertAtFront(1000);
    cout << "\n\nStack after Inserting 1000 at Top : \n";
    MyStack.Print();



    MyStack.InsertAtBack(2000);
    cout << "\n\nStack after Inserting 2000 at Bottom : \n";
    MyStack.Print();

    MyStack.Clear();
    cout << "\n\nStack after Clear() : \n";
    MyStack.Print();*/

    system("pause>0");

	return 0;
}