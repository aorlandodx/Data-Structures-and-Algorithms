//This program shows an example of recursion
//Created by Angel Peña on Jul 7, 2025
#include <iostream>
using namespace std;

int factorial(int n){
    if(n <= 1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main(){

    int n = 5;
    int result = factorial(n);
    cout << "El factorial de " << n << " es: " << result << endl;
    return 0;
}