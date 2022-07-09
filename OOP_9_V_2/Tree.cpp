#include "Tree.h"

void Tree::print()
{
	for (ListFine var : set_list_fine)
	{
		var.print();
	}
	cout << endl;
}

Tree *Tree::add(ListFine &list_fine)
{
	set_list_fine.insert(list_fine);
	return this;
}
