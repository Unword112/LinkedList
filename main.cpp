#include "LinkedList.h"
#include <iostream>

using namespace std;

int main()
{
    int e, i;
    LinkedList list;

    int choice;

    do{
    list.display();

    cout << "\nWelcome to Chin lab" << endl;
    cout << "\n66066780-Nathakith-baosalee" << endl;
    cout << "1. size()" << endl
         << "2. get(int i)" << endl
         << "3. remove(int i)" << endl
         << "4. indexOf(int e)" << endl
         << "5. set(int i, int e)" << endl
         << "6. add(int i, int e)" << endl
         << "7. display " << endl
         << "8. Clear" << endl
         << "0. Exit Program " << endl
         << "Select Choice : ";
    cin >> choice;

    switch (choice){
        case 1: cout << "Size : " << list.size() << endl;
            break;
        case 2: cout << "Enter i : ";
                cin >> i;
                cout << "Get Number from i : " << list.get(i) << endl;
            break;
        case 3: cout << "Enter i : ";
                cin >> i;
                cout << "Remove : " << list.remove(i);
            break;
        case 4: cout << "Enter e : ";
                cin >> e;
                cout << "Index : " << list.indexOf(e) << endl;
            break;
        case 5: cout << "Enter i : ";
                cin >> i;
                cout << "Enter e : ";
                cin >> e;
                list.set(i, e);
            break;
        case 6: cout << "Enter i : ";
                cin >> i;
                cout << "Enter e : ";
                cin >> e;
                list.add(i,e);
            break;
        case 7: list.display();
            break;
        case 8: list.clear();
        }
    } while(choice != 0);

    return 0;
}