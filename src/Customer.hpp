/*
 * Customer.hpp
 *
 *  Created on: Oct 2, 2019
 *      Author: lethuy
 */

#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_

#include <iostream>

using namespace std;
class Customer
{
public:
	Customer();
	virtual ~Customer();

	int getID() ;
	string getName();
	string getAddress();
	string getCity();
	string getState();
	int getZipCode();
	float getAccountBalance();

	bool setID(int ID);
	bool setName(string name);
	bool setAddress(string address);
	bool setCity (string city);
	bool setState (string state);
	bool setZipCode (int code);
	bool setAccountBalance(float balance);

private:
	int ID;
	string Name;
	string Address;
	string City;
	string State;
	int ZipCode;
	float AccountBalance;
};

#endif /* CUSTOMER_HPP_ */
