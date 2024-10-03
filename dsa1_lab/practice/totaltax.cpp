#include <iostream>
using namespace std;
int main(){
    double salary = 95000;
    cout << "Your salary is $" << salary << endl;

    const double satateTaxRate = 0.04;
    double satateTax = salary * satateTaxRate;
    cout << "Your state tax is $" << satateTax << endl;

    const double countyTaxRate = 0.04;
    double countyTax = salary * countyTaxRate;
    cout << "Your county tax is $" << countyTax << endl;

    double totalTax = satateTax + countyTax;
    cout << "Your total tax is $" << totalTax << endl;

    return 0;

}