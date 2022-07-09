#include"Fine.h"
#include"ListFine.h"
#include"Tree.h"

int main()
{
	const Fine fine_1{ "speed", "5000", "AAA" };
	const Fine fine_2{ "speed", "1000", "BBB"};
	const Fine fine_3{ "speed", "1500", "CCC"};
	const Fine fine_4{ "speed", "2000", "DDD"};

	ListFine lf_1, lf_2, lf_3, lf_4;
	lf_1.add(fine_1)->add(fine_2)->add(fine_3)->add(fine_4)->print();
	lf_2.add(fine_2)->add(fine_3)->add(fine_4)->print();
	lf_3.add(fine_3)->add(fine_4)->print();
	lf_4.add(fine_4)->print();

	Tree tr;
	tr.add(lf_1)->add(lf_2)->add(lf_3)->add(lf_4)->print();

	return 0;
}