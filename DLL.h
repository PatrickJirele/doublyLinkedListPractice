/*
	191
	DoublyLinkedList
	DLL.h
	pjirele, dfahrney
*/
#pragma once
struct Node
{
	int data;
	Node* next, * prev;
};
class DLL
{
private:
	int size;
	Node* top, * bottom;
public:
	DLL();
	void addTop(int);
	void addBottom(int);
	void displayTB();
	void displayBT();
	void delTop();
	void delBottom();

};

