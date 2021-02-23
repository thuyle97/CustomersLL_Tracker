/*
 * LinkedList.hpp
 *
 *  Created on: Oct 5, 2019
 *      Author: lethuy
 */

#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_
#include "Customer.hpp"
#include <iostream>

using namespace std;

struct node
{
	Customer* data;
	node* next;
};

class LinkedList
{
public:
	LinkedList();
	virtual ~LinkedList();

	void push_back (Customer*);
	void push_front (Customer*);
	int size (void);
	void delete_list(void);
	void print_list(void);
	Customer* pop_front(void);
	Customer* pop_back(void);
	Customer* find (int ID);
	bool exists (int ID);
	bool deleteIt (int ID);
private:
	node* head;
	int size_indirect (node*&);
	void push_back_indirect (Customer*, node*&);
	void printer_indirect (node*&);
	Customer* pop_back_indirect(node*&,node*&);


};

#endif /* LINKEDLIST_HPP_ */
