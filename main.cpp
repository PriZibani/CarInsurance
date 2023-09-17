#include <iostream>
#include "CarInsurance.h"
using namespace std;

int main()
{
    InsurancePolicy myPolicy(123456, "Peter Molema", 3450.67);
    CarInsurance yourPolicy(456891, "Wilson Ntemba", 5550.67, 15000.00);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    myPolicy.showPolicy(cout);

    cout << endl;
    yourPolicy.showPolicy(cout);
    cout << endl << "AFTER UPDATES:" << endl;

    myPolicy.setPolicy(123456, "Peter Molema", 5450.67);
    yourPolicy.set_excess(25000.00);

    myPolicy.showPolicy(cout);
    cout << endl;
    yourPolicy.showPolicy(cout);
    cout << endl;

    return 0;
}
