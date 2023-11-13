#include "Daughter.h"
#include "Mother.h"
#include <iostream>
using namespace std;

Daughter::Daughter()
{
    cout << "Derived Class Constructor" << endl;
};

Daughter::~Daughter(){
    cout << "Derived Class Deconstructor" << endl;
}
