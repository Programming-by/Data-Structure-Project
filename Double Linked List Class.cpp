#include <iostream>
#include "clsMyQueue.h"

using namespace std;



int main() {

    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);


    cout << "\nQueue: \n";
    MyQueue.Print();

    cout << "\nQueue Size: " << MyQueue.Size();
    cout << "\nQueue Front: " << MyQueue.front();
    cout << "\nQueue Back: " << MyQueue.back();

    MyQueue.pop();

    cout << "\n\nQueue after pop() : \n";
    MyQueue.Print();

    cout << "\n\n Item (2)" << MyQueue.GetItem(2);

    MyQueue.Reverse();
    cout << "\n\n Queue after reverse() : \n";
    MyQueue.Print();


    MyQueue.UpdateItem(2, 600);
    cout << "\n\nQueue after Updating Item(2) to 600 : \n";
    MyQueue.Print();

    MyQueue.InsertAfter(2, 800);
    cout << "\n\nQueue after Inserting 800 after Item(2): \n";
    MyQueue.Print();


    MyQueue.InsertAtFront(1000);
    cout << "\n\nQueue after Inserting 1000 at Front : \n";
    MyQueue.Print();



    MyQueue.InsertAtBack(2000);
    cout << "\n\nQueue after Inserting 2000 at Back : \n";
    MyQueue.Print();

    MyQueue.Clear();
    cout << "\n\nQueue after Clear() : \n";
    MyQueue.Print();

    system("pause>0");

	return 0;
}