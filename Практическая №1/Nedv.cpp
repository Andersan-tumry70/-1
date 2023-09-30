#include <iostream>
#include <fstream>
#include "Nedv.h"

using namespace std;

ostream& operator << (ostream& ost, Nedv& nedv)
{
    ost << nedv.owner << " " << nedv.data << " " << nedv.price << endl;
    return ost;
}

istream& operator >> (istream& ist, Nedv& nedv) {
    ist >> nedv.owner;
    ist >> nedv.data >> nedv.price;
    return ist;
}
