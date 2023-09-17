
#include "CarInsurance.h"
#include <iostream>
using namespace std;

CarInsurance::CarInsurance(int pNr, const char* pHolder, double aRate, double ex)
    : InsurancePolicy(pNr, pHolder, aRate), excess(ex)
{
}

double CarInsurance::get_excess() const
{
    return excess;
}

void CarInsurance::set_excess(double ex)
{
    excess = ex;
}

void CarInsurance::showPolicy(ostream& out) const
{
    // Call the base class showPolicy function to display the InsurancePolicy member variables
    InsurancePolicy::showPolicy(out);

    out << "Excess fee : " << this->get_excess() << endl;
}
