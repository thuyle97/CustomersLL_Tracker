/*
 * Customer.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: lethuy
 */

#include "Customer.hpp"
#include <iostream>

using namespace std;
Customer::Customer()
{
	// TODO Auto-generated constructor stub
	this->ID = 0;
	this->Name = "Unknown";
	this->Address = "Unknown";
	this->City = "Unknown";
	this->State = "Unknown";
	this->ZipCode = 0;
	this->AccountBalance = 0;
}

Customer::~Customer()
{
	// TODO Auto-generated destructor stub
}

int Customer::getID()
{
	return this->ID;
}

string Customer::getName()
{
	return this->Name;
}

string Customer::getAddress()
{
	return this->Address;
}

string Customer::getCity()
{
	return this->City;
}

string Customer::getState()
{
	return this->State;
}

int Customer::getZipCode()
{
	return this->ZipCode;
}

float Customer::getAccountBalance()
{
	return this->AccountBalance;
}

bool Customer::setID(int ID)
{
	if (ID > 0)
	{
		this->ID = ID;
		return true;
	}
	else
	{
		return false;
	}
}

bool Customer::setName(string name)
{
	if (name.size() != 0)
	{
		this->Name = name;
		return true;
	}
	else
	{
		return false;
	}
}

bool Customer::setAddress(string address)
{
	if (address.size() != 0)
	{
		this->Address = address;
		return true;
	}
	else
	{
		return false;
	}
}

bool Customer::setCity(string city)
{
	if (city.size() > 0)
	{
		this->City = city;
		return true;
	}
	else
	{
		return false;
	}
}

bool Customer::setState(string state)
{
	if (state.size() > 0)
	{
		this-> State = state;
		return true;
	}
	else
	{
		return false;
	}
}

bool Customer::setZipCode(int code)
{
	if (code > 0)
	{
		this->ZipCode = code;
		return true;
	}
	else
	{
		return false;
	}
}

bool Customer::setAccountBalance(float balance)
{
	if (balance < 0)
	{
		return false;
	}
	else
	{
		this->AccountBalance = balance;
		return true;
	}
}





