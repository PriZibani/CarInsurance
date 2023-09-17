#include "InsurancePolicy.h"

InsurancePolicy::InsurancePolicy()
{
    policyNr = 0;
    policyHolder = " ";
    annualRate = 0.0;
}

InsurancePolicy::InsurancePolicy(int pNr, const string& pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}

InsurancePolicy::~InsurancePolicy()
{
    cout << endl << "Destructor executed";
}

void InsurancePolicy::setPolicy(int pNr, const string& pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}

int InsurancePolicy::get_pNr() const
{
    return policyNr;
}

string InsurancePolicy::get_pHolder() const
{
    return policyHolder;
}

double InsurancePolicy::get_aRate() const
{
    return annualRate;
}

void InsurancePolicy::showPolicy(ostream& out) const
{
    out << "Policy Number : " << this->get_pNr() << endl;
    out << "Policy Holder : " << this->get_pHolder() << endl;
    out << "Annual Rate : " << this->get_aRate() << endl;
}

