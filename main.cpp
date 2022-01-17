/*
    191
    doublyLinkedList
    main.cpp
    pjirele, dfahrney
*/

#include "DLL.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    DLL l1 = DLL();
    l1.addTop(17);
    l1.addBottom(5);
    l1.addBottom(69);
    l1.addTop(420);
    l1.addBottom(12);
    l1.addBottom(456);
    l1.addTop(-9);

    cout << "dispalyTB: "; l1.displayTB();
    cout << endl << endl;
    cout << "displayBT: "; l1.displayBT();
    cout << endl << endl;

    cout << "delTop should return no \"-9\"" << endl;
    l1.delTop();
    cout << "displayTB: "; l1.displayTB();
    cout << endl << endl;
    cout << "displayBT: "; l1.displayBT();
    cout << endl << endl;


    cout << "delBottom should return no \"456\"" << endl;
    l1.delBottom();
    cout << "displyTB: "; l1.displayTB();
    cout << endl << endl;
    cout << "displayBT: "; l1.displayBT();
    cout << endl;

} // end main


