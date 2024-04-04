#include <iostream>

using namespace std;

int main(){
    //convert fahrenheit to celsius
    cout << "Enter a temperature in fahrenheit: " << endl;
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 1.8;
    cout << "The temperature in celsius is " << celsius << endl;
    return 0;
} 