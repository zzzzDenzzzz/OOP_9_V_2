#include "ListFine.h"

void ListFine::print()
{
	for (Fine var : list_fine)
	{
		var.print();
	}
	cout << endl;
}

ListFine *ListFine::add(const Fine &fine)
{
	list_fine.push_back(fine);
	return this;
}

bool ListFine::operator<(const ListFine &right_list_fine)const
{
	if (list_fine.size() > right_list_fine.list_fine.size())
	{
		return true;
	}
	return false;
}
