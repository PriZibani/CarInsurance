
#ifndef INSURANCEPOLICY_H
#define INSURANCEPOLICY_H

#include <string>
#include <iostream>
using namespace std;

class InsurancePolicy
{
public:
    InsurancePolicy();
    InsurancePolicy(int pNr, const string& pHolder, double aRate);
    ~InsurancePolicy();

    void setPolicy(int pNr, const string& pHolder, double aRate);
    int get_pNr() const;
    string get_pHolder() const;
    double get_aRate() const;
    void showPolicy(ostream& out) const;

private:
    int policyNr;
    string policyHolder;
    double annualRate;
};

#endif
