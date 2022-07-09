#pragma once

#include<list>
#include"Fine.h"

class ListFine
{
	list<Fine>list_fine;
public:
	void print();
	ListFine *add(const Fine &fine);
	bool operator<(const ListFine &right_list_fine)const;
};