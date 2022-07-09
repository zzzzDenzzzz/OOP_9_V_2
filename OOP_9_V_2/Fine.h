#pragma once

#include<string>
#include<iostream>

using namespace std;

class Fine
{
	string name_fine;
	string price_fine;
	string number_auto;
public:
	Fine();
	Fine(const string &name_fine, const string &price_fine, const string &number_auto);
	string getNameFine();
	string getPriceFine();
	string getNumberAuto();
	void print();
};