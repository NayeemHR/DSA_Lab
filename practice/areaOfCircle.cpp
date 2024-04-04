#include <iostream>
#include <cmath>


using namespace std;
int main(){
    /*
    
    */
    cout << "Enter Radius:" << endl;
    double radius;
    cin >> radius;
    double area = M_PI * pow(radius, 2);
    cout << "The area of the circle is " << area << endl;
    return 0;

}