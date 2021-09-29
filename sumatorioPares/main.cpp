//
//  main.cpp
//  sumatorioPares
//
//  Created by Carlos Botella Navarro on 29/9/21.
//

#include <iostream>
using namespace std; // no hace falta poner "std::" delante de "cout" o "cin"

int sumatorioPares(){
    int n;
    int total = 0;
    cout << "Elige un número: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (i%2) { // %2 comprueba si hay remainders
            // cout << "i: " << i << "\n";
            total = total + i + 1;
            // cout << total << "\n";
        }
    }
    cout << "resultado: " << total << "\n";
    return total;
}

int main() {
    sumatorioPares();
}
