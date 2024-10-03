//Euclidean Algorithm
#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(a>0){
        int r = b%a;
        b = a;
        a = r;
    }
    return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b);
}
