#include "Fine.h"

Fine::Fine()
{
    name_fine = "empty_string_name_fine";
    price_fine = "empty_string_name_price";
    number_auto = "empyt_string_number_auto";
}

Fine::Fine(const string &name_fine, const string &price_fine, const string &number_auto)
{
    this->name_fine = name_fine;
    this->price_fine = price_fine;
    this->number_auto = number_auto;
}

string Fine::getNameFine()
{
    return name_fine;
}

string Fine::getPriceFine()
{
    return price_fine;
}

string Fine::getNumberAuto()
{
    return number_auto;
}

void Fine::print()
{
    cout << "Name fine: " << name_fine;
    cout << ". Price: " << price_fine;
    cout << " .Number auto: " << number_auto << endl;
}
