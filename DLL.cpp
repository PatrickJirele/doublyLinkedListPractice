/*
	191
	DoublyLinkedList
	DLL.cpp
	pjirele, dfahrney
*/

#include "DLL.h"
#include <iostream>

using namespace std;

DLL::DLL()
{
	top = bottom = nullptr;
	size = 0;
} // end DLL

void DLL::addTop(int n)
{
	Node* temp = new Node;
	temp->data = n;
	if (size == 0)
	{
		top = bottom = temp;
		temp->next = nullptr;
		temp->prev = nullptr;
		size++;
	} // end if
	else
	{
		temp->next = top;
		temp->prev = nullptr;
		top->prev = temp;
		top = temp;
		size++;
	} // end else
} // end addTop

void DLL::addBottom(int n)
{
	Node* temp = new Node;
	temp->data = n;
	temp->next = nullptr;
	if (size == 0)
	{
		top = bottom = temp;
		temp->prev = nullptr;
		size++;
	} // end if
	else
	{
		bottom->next = temp;
		temp->prev = bottom;
		bottom = temp;
		size++;
	} // end else
} // end addBottom

void DLL::displayTB()
{
	Node* temp = new Node;
	temp = top;
	while (temp != nullptr)
	{
		cout << temp->data << "  ";
		temp = temp->next;
	} // end while
} // end DisplayTB

void DLL::displayBT()
{
	Node* temp = new Node;
	temp = bottom;
	while (temp != nullptr)
	{
		cout << temp->data << "  ";
		temp = temp->prev;
	} // end while
} // end displayBT

void DLL::delTop()
{
	Node* temp = new Node;
	if (size == 0)
		cout << "ERROR" << endl;
	else
	{
		top->data = top->next->data;
		temp = top->next;
		top->next->prev = nullptr;
		top = temp;
		size--;
	} // end else
} // end delTop

void DLL::delBottom()
{
	Node* temp = new Node;
	if (size == 0)
		cout << "ERROR" << endl;
	else
	{
		bottom->data = bottom->prev->data;
		temp = bottom->prev;
		bottom->prev->next = nullptr;
		bottom = temp;
		size--;
	} // end else
} // end delBottom
