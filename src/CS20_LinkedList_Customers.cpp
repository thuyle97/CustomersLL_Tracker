//============================================================================
// Name        : CS20_LinkedList_Customers.cpp
// Author      : Thuy Le
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Customer.hpp"
#include "LinkedList.hpp"
using namespace std;

int main()
{
	LinkedList* list = new LinkedList();

	Customer* customer1 = new Customer();
	customer1 ->setAccountBalance(12);
	customer1 ->setAddress("123abc");
	customer1 ->setCity("ABC");
	customer1 ->setName ("Mickey");
	customer1 ->setID(1234);
	customer1 ->setState("California");
	customer1 ->setZipCode(1234);

	Customer* customer2 = new Customer();
	customer2 ->setAccountBalance(-1);
	customer2 ->setCity("ABC");
	customer2 ->setID(123);
	customer2 ->setName ("Minnie");

	Customer* customer3 = new Customer();
	customer3 ->setAccountBalance(123);
	customer3 ->setCity("ABC");
	customer3 ->setID(-1);
	customer3 ->setName ("Masupilami");

	Customer* customer4 = new Customer();
	customer4 ->setAccountBalance(1234);
	customer4 ->setCity("");
	customer4 ->setID(12);
	customer4 ->setName ("Stich");

	Customer* customer5 = new Customer();
	customer5 ->setAccountBalance(12345);
	customer5 ->setCity("Tracy");
	customer5 ->setID(12345);
	customer5 ->setName ("Booboo");

	cout << "The size: " << list->size() << endl;

	list->push_back(customer1);
	cout <<"The size: " << list->size() << endl;

	list->push_back(customer2);
	cout <<"The size: " << list->size() << endl;

	list->push_back(customer3);
	cout <<"The size: " << list->size() << endl;

	list->push_back(customer4);
	cout <<"The size: " << list->size() << endl;

	// list->print_list();

	list->push_front(customer5);
	list->print_list();
	cout << "Exist #1234: " << list->exists(1234) << endl;
	cout << "Exist #2345: " << list->exists(2345) << endl;
	cout << endl;


	cout << "Deleting an item: " << endl;
	list->deleteIt(12345);
	cout <<"The size: " << list->size() << endl;
	//list->print_list();
//
//	cout << "Deleting an item: " << endl;
//	list->deleteIt(12);
//	cout <<"The size: " << list->size() << endl;
//	list->print_list();
//
//	cout << "Deleting an item: " << endl;
//	cout << list->deleteIt(1) << endl;
//	cout <<"The size: " << list->size() << endl;
//	//list->print_list();
//
	cout << "The Pop Back Item: " << list->pop_back()->getName() << endl;
	cout <<"The size: " << list->size() << endl;
////	list->print_list();
////
	cout << "The Pop Back Item: " << list->pop_back()->getName() << endl;
	cout <<"The size: " << list->size() << endl;
//	list->print_list();

//	cout << "The Pop Back Item: " << (list->pop_back())->getName() << endl;
//	cout <<"The size: " << list->size() << endl;
//	list->print_list();
//
//	cout << "The Pop Back Item: " << (list->pop_back())->getName() << endl;
//	cout <<"The size: " << list->size() << endl;
//	list->print_list();
//	list->push_front(customer5);
//	cout << "Push Front:" << endl;
//	list->print_list();
//
	cout << "The pop front item: " << list->pop_front()->getName() << endl;
	cout <<"The size: " << list->size() << endl;
	//cout << "Pop Front: " << endl;
	//list->print_list();
//
//	cout << "The pop front item: " << list->pop_front()->getName() << endl;
//	cout <<"The size: " << list->size() << endl;
//	cout << "Pop Front: " << endl;
//	list->print_list();
//
//	cout << "The pop front item: " << (list->pop_front())->getName() << endl;
//	cout << "Pop Front: " << endl;
//	list->print_list();

//

	list->delete_list();
	cout <<" Size of list after destroying: " << list->size() << endl;

	cout << "Program Ended!" << endl; // prints !!!Hello World!!!
	return 0;
}
