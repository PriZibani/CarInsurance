#include <iostream>
#include <string>
using namespace std;

class InsurancePolicy
{
    public:
        InsurancePolicy();
        InsurancePolicy(int pNr, string pHolder, double aRate);
        ~InsurancePolicy();

        void setPolicy(int pNr, string pHolder, double aRate);
        int get_pNr()const;
        string get_pHolder()const;
        double get_aRate()const;
        virtual void showPolicy (int pNr, string pHolder, double aRate);


    private:
        int policyNr;
        string policyHolder;
        double annualRate;
};
void InsurancePolicy::showPolicy(int pNr, string pHolder, double aRate)
{
    cout << this->get_pNr()<<this->get_pHolder() << this->get_aRate();
}
// Default constructor
InsurancePolicy::InsurancePolicy()
{
    policyNr = 0;
    policyHolder = " ";
    annualRate = 0.0;
}
//Overloaded constructor
InsurancePolicy::InsurancePolicy(int pNr, string pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;
}
//Destructor
InsurancePolicy::~InsurancePolicy()
{
    cout << endl<< "Destructor executed";
}
//Mutator
void InsurancePolicy::setPolicy(int pNr, string pHolder, double aRate)
{
    policyNr = pNr;
    policyHolder = pHolder;
    annualRate = aRate;

}



int InsurancePolicy::get_pNr()const
{
    return policyNr;
}
string InsurancePolicy::get_pHolder()const
{
    return policyHolder;
}
double InsurancePolicy::get_aRate()const
{
    return annualRate;
}


class CarInsurance : public InsurancePolicy
{
    private:
        double excess;
    public:
        double get_excess();
        double set_excess(double ex);
        void showPolicy(int pNr, string pHolder, double aRate, double ex);
        void setPolicy(int pNr, string pHolder, double aRate, double ex);
        friend ostream& operator <<(ostream& os, const CarInsurance& carInsurance);
        void showPolicy(int pNr, string pHolder, double aRate, double ex);

};
double CarInsurance::get_excess()
{
    return excess;
}
double CarInsurance::set_excess(double ex)
{
    return excess = ex;
}

ostream& operator <<(ostream& os, const CarInsurance& carInsurance)
{
    os<<"Excess : "<<carInsurance.excess<< endl;
}
void CarInsurance::showPolicy(int pNr, string pHolder, double aRate, double ex)
{
    InsurancePolicy::showPolicy(pNr, pHolder, aRate);
    cout << this->get_excess() << endl;
}
void CarInsurance::setPolicy(int pNr, string pHolder, double aRate, double ex)
{
    InsurancePolicy::setPolicy(pNr,pHolder,aRate);
    excess = ex;

    }



int main()
{
    InsurancePolicy myPolicy(123456, "Peter Molema", 3450.67);
    CarInsurance yourPolicy(456891, "Wilson Ntemba", 5550.67,15000.00);

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






