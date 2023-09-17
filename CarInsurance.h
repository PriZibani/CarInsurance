
#ifndef CARINSURANCE_H
#define CARINSURANCE_H

#include "InsurancePolicy.h"

class CarInsurance : public InsurancePolicy
{
private:
    double excess;

public:
    CarInsurance(int pNr, const char* pHolder, double aRate, double ex);
    double get_excess() const;
    void set_excess(double ex);
    void showPolicy(ostream& out) const;
};

#endif
