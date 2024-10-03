// Prime Generation using Sieve of Eratosthenes
#include <iostream>

using namespace std;

int sieve[1000001];

int main()
{
    int range;
    cin >> range;

    for(int i=1;i<=range;i++){
        sieve[i] = 1;
    }

    sieve[1] = 0;

    for(int i=1;i<=range;i++){
        if(sieve[i]==1){
            cout << i << " ";
            for(int j=i*2;j<=range;j+=i){
                sieve[j] = 0;
            }
        }
    }

}