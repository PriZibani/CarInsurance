InsurancePolicy();
InsurancePolicy(int pNr, string pHolder, double aRate);
~InsurancePolicy();
void setPolicy(int pNr, string pHolder, double aRate);
int get_pNr()const;
string get_pHolder()const;
double get_aRate()const;
private:
int policyNr;
string policyHolder;
double annualRate;
};
(a) Implement the class InsurancePolicy.
(b) Code the interface for a class CarInsurance derived from class InsurancePolicy (the base class). This class has an additional member variable, excess. Class InsurancePolicy also has member functions, get_excess() and set_excess()to return the value of member variable excess and update the value of member variable excess respectively. The class CarInsurance should override function showPolicy() in order to display the member variables of CarInsurance and also override member function setPolicy() in order to update the member variables of CarInsurance.
(c) Implement the class CarInsurance and use the code below to implement
setPolicy():
void CarInsurance:: setPolicy(int pNr, string pHolder,
double aRate, double eValue)
{
policyNr = pNr; policyholder = pHolder; annualRate = aRate; excess = eValue;
}
You should obtain the following errors:
Explain why setPolicy()is not a legal definition in the derived class
CarInsurance?
Suggest two ways to fix this problem.
(d) Add a member function
void showPolicy(ostream & out)const;
to the class InsurancePolicy as well as to the class CarInsurance in order to display the member variables of InsurancePolicy and CarInsurance.
(e) Use the following driver program to test your classes InsurancePolicy and
CarInsurance:
#include <iostream>
#include <fstream>
#include "Insurance.h"
#include "CarInsurance.h" using namespace std;
int main()
{
InsurancePolicy myPolicy(123456, "Peter Molema", 3450.67);
CarInsurance yourPolicy(456891, "Wilson Ntemba", 5550.67,
15000.00);
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
myPolicy.showPolicy(cout);
cout << endl;
yourPolicy.showPolicy(cout);
cout << endl << "AFTER UPDATES:" << endl;
myPolicy.setPolicy(123456, "Peter Molema", 5450.67); yourPolicy.setPolicy(456891,"Wilson Ntemba",6650.67, 25000.00);
myPolicy.showPolicy(cout);
cout << endl;
yourPolicy.showPolicy(cout);
cout << endl;
return 0;
}
