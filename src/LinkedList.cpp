/*
 * LinkedList.cpp
 *
 *  Created on: Oct 5, 2019
 *      Author: lethuy
 */

#include "LinkedList.hpp"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
	this->head = nullptr;
}

LinkedList::~LinkedList()
{
	delete_list();
}

void LinkedList::push_back(Customer* Item)
{
	// node* current = head;
	if (head == nullptr)
	{
		node * newnode = new node();
		newnode->data = Item;
		newnode->next = nullptr;
		head = newnode;
	}
	else
	{
		push_back_indirect(Item, head->next);
	}
}

void LinkedList::push_back_indirect(Customer* Item, node*& head)
{

	if (head == nullptr)
	{
		node * newnode = new node();
		newnode->data = Item;
		newnode->next = nullptr;
		head = newnode;
	}
	else
	{
		push_back_indirect(Item, head->next);
	}
}
void LinkedList::push_front(Customer* Item)
{
	node* newnode = new node();
	newnode->data = Item;
	newnode->next = head;
	head = newnode;
}

int LinkedList::size(void)
{
	if (head == nullptr)
	{
		return 0;
	}
	return 1+size_indirect(head->next);
}

int LinkedList::size_indirect(node*& head)
{
	if (head == nullptr)
	{
		return 0;
	}
	return 1+ size_indirect(head->next);
}

void LinkedList::delete_list(void)
{
	node* current;
	while (head != nullptr)
	{
		current = head;
		head = head->next;
		delete current->data;
		current->data = nullptr;
		current->next = nullptr;
		delete current;
		current = nullptr;
	}
	head = nullptr;
}

void LinkedList::print_list(void)
{
	if (head == nullptr)
	{
		cout << "There is no element in the list." << endl;
		return;
	}
	else
	{
		cout << "Name: " << head->data->getName() << endl;
		cout << "ID: " << head->data->getID() << endl;
		cout << "City: " << head->data->getCity() << endl;
		cout << "Account Balance: " << head->data->getAccountBalance() << endl;
		cout << endl;
		printer_indirect (head->next);
	}
}

void LinkedList::printer_indirect(node*& head)
{
	if (head == nullptr)
	{
		return;
	}
	else
	{
		cout << "Name: " << head->data->getName() << endl;
		cout << "ID: " << head->data->getID() << endl;
		cout << "City: " << head->data->getCity() << endl;
		cout << "Account Balance: " << head->data->getAccountBalance() << endl;
		cout << endl;
		printer_indirect (head->next);
	}
}

Customer* LinkedList::pop_front(void)
{

	if (head == nullptr)
	{
		return nullptr;
	}
	node* current = head;
	Customer* tempCustomer = current->data;
	head = current -> next;
	current->data = nullptr;
	current->next = nullptr;
	delete current;
	current = nullptr;
	return tempCustomer;
}

Customer* LinkedList::pop_back(void)
{
	node* current = head;
	if (head == nullptr)
	{
		return nullptr;
	}
	else if ( current->next == nullptr)
	{
		Customer* data = current->data;
		head = nullptr;
		current->data = nullptr;
		current->next = nullptr;
		delete current;
		current = nullptr;
		return data;
	}
	return pop_back_indirect (head, head->next);
}

Customer* LinkedList::pop_back_indirect(node*& trailhead, node*& head)
{
	node* current = head;
	if (current->next == nullptr)
	{
		Customer* data = current->data;
		trailhead->next = nullptr;
		current->data = nullptr;
		current->next = nullptr;
		delete current;
		current = nullptr;
		return data;
	}
	return pop_back_indirect (head, head->next);
}

Customer* LinkedList::find(int ID)
{
	node* current = head;
	node* trailcurrent = current;
	while (current != nullptr)
	{
		if (current->data->getID() == ID)
		{
			return trailcurrent->data;
		}
		else
		{
			current = current->next;
			trailcurrent = trailcurrent->next;
		}
	}
	return nullptr;
}

bool LinkedList::exists(int ID)
{
	node* current = head;
	while (current!= nullptr)
	{
		if (current->data->getID() == ID)
		{
			return true;
		}
		current = current -> next;
	}
	return false;
}

bool LinkedList::deleteIt(int ID)
{
	if (head == nullptr)
	{
		return false;
	}
	if (head->data->getID() == ID)
	{
		delete pop_front();
		return true;
	}
	else
	{
		node* current = head;
		node* trailcurrent = current;
		current = current -> next;
		while (current != nullptr)
		{
			if (current->data->getID() == ID)
			{
				trailcurrent->next = current->next;
				delete current->data;
				current->data = nullptr;
				current->next = nullptr;
				delete current;
				current = nullptr;
				return true;
			}
			trailcurrent = trailcurrent -> next;
			current = current -> next;
		}
		return false;
	}
}


