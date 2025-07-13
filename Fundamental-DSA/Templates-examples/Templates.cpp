//This program shows the functionality and usage of templates
//Created by Angel Peña on Jul 7, 2025

#include <iostream>
#include <string>
using namespace std;

//Make a lexicographical comparison to find the greatest of two values regardless their data type
template <typename Template>
Template findMax(Template a, Template b){
    return (a > b) ? a : b;
} 

int main(){
    
    string a = "";
    string b = "";
    cout << "Introduce a value: ";
    cin >> a;

    cout << "Introduce another value: ";
    cin >> b;

    cout << "The greatest value is: " << findMax(a, b) << endl;

    return 0;
}
