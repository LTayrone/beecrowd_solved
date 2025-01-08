//
// Created by User on 08/01/2025.
//
#include <iomanip>
#include <iostream>

using namespace std;


int main() {

    int numero, quantidade_horas;
    double valor, salary;
    cin >> numero >> quantidade_horas >> valor;

    salary = quantidade_horas * valor;

    cout << "NUMBER = " << numero << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}