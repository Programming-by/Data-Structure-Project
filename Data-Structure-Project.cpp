
#include <iostream>
#include "clsMyString.h"

using namespace std;

int main()
{

    cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";
    
    clsMyString S1;

    cout << "\nS1 Value: " << S1.Value << "\n";


    S1.Value = "Mohammed";

    cout << "\nS1 Value: " << S1.Value << "\n";

    S1.Value = "Mohammed2";

    cout << "\nS1 Value: " << S1.Value << "\n";


    S1.Value = "Mohammed3";

    cout << "\nS1 Value: " << S1.Value << "\n";

    cout << "\n\nUndo: ";
    cout << "\n----------\n";

    S1.Undo();

    cout << "S1  after undo = " << S1.Value << "\n";

    S1.Undo();

    cout << "S1  after undo = " << S1.Value << "\n";


    S1.Undo();

    cout << "S1  after undo = " << S1.Value << "\n";

    cout << "\n\nRedo: ";
    cout << "\n----------\n";
    
    S1.Redo();

    cout << "S1  after redo = " << S1.Value << "\n";

    S1.Redo();

    cout << "S1  after redo = " << S1.Value << "\n";

    S1.Redo();

    cout << "S1  after redo = " << S1.Value << "\n";

    system("pause>0");
}