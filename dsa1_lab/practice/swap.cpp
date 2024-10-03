#include <iostream>

int main(){
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "This is a Value of a :" << a;
    std::cout << "\nThis is a Value of b :" << b;
}