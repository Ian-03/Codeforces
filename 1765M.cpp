#include <iostream>
#include <math.h>

using namespace std;

int isPrime (int n);

int main(){

    int t;

    long long n, h = 0, f = 0, fac = 0;

    cin >> t;

    for (int i = 0; i < t; i++){
        
        cin >> n;

        if (n % 2 == 0){
            h = n / 2;
            cout << h << " " << h << endl;
        }else{
            f = isPrime(n);
            if (f == 0){
                cout << 1 << " " << n - 1 << endl;
            }else{
                fac = n / f;
                cout << fac << " " << n - fac << endl;
        }
        } 
    }

    return 0;
}

int isPrime (int n){

    int counter = 0, max = sqrt(n) + 1;

    for (int i = 3; i < max; i++){
        if (n % i == 0){
            return i;
        }
    }

    return 0;
}   
