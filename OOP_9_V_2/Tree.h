#pragma once

#include<set>
#include"ListFine.h"

class Tree
{
	set<ListFine>set_list_fine;
public:
	void print();
	Tree *add(ListFine &list_fine);
};