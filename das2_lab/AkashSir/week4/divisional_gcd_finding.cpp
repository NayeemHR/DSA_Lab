#include <iostream>

using namespace std;

int gcd(int a, int b){
    int mn = min(a, b);
    for(int div=mn;div>=1;div--){
    if(a%div==0 && b&div==0)
        return div;
    }
}


int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b);
}
