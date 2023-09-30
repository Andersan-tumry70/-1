#include <iostream>
#include <fstream>

#include "Data.h"

using namespace std;

struct Nedv
{
    string owner;
    Data data;
    int price;
};

ostream& operator << (ostream& ost, Nedv& nedv);

istream& operator >> (istream& ist, Nedv& nedv);
